﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;

namespace SmartLib
{

    public class RefCount<T>
    {
        public T Object;

        private int m_refCount = 0;
        private readonly Action<T> m_dispose;

        public RefCount(Action<T> dispose)
        {
            m_dispose = dispose;
        }

        public void AddRef()
        {
            Interlocked.Increment(ref m_refCount);
        }


        public void Release()
        {
            if (0 == Interlocked.Decrement(ref m_refCount))
            {
                if (null != m_dispose)
                {
                    m_dispose.Invoke(Object);
                }
                else
                {
                    (Object as IDisposable)?.Dispose();
                }

                Object = default(T);
            }
        }
    }

    public class SmartRefCount<T> : IDisposable
    {
        private RefCount<T> m_refCountObject;

        public SmartRefCount(T obj, Action<T> action)
        {
            m_refCountObject = new RefCount<T>(action)
            {
                Object = obj
            };
            m_refCountObject.AddRef();
        }


        public T Object
        {
            get
            {
                return m_refCountObject.Object;
            }
        }


        public static SmartRefCount<T> operator +(SmartRefCount<T> left, SmartRefCount<T> right)
        {
            right?.m_refCountObject.AddRef(); //addRef first in case of left and right are same reference
            left?.m_refCountObject.Release();
            return right;
        }

        public void Dispose()
        {
            m_refCountObject.Release();
        }
       
    }


    public class Something : IDisposable
    {
        private readonly string m_name;
        public Something(string name)
        {
            m_name = name;
        }

        public void Print()
        {
            Console.WriteLine($"I am {m_name}");
        }
        public void Dispose()
        {
            Console.WriteLine($"{m_name} is disposed");
        }
    }

    public static class SmartRefCountTest
    {
        public static void Case0()
        {
            SmartRefCount<Something> ss1 = new SmartRefCount<Something>(new Something("apple"), null);
            ss1.Object.Print();

            SmartRefCount<Something> ss2 = new SmartRefCount<Something>(new Something("bear"), null);
            ss2.Object.Print();

            //ss2 += ss2;
            ss1 += ss2;
            //ss2 += ss1;
            bool refEqual = object.ReferenceEquals(ss1, ss2);
            if(refEqual)
            {
                Console.WriteLine($"{nameof(ss1)} {nameof(ss2)} are of same reference");
            }


            SmartRefCount<Something> ss3 = null;
            ss3 += ss1;

            using (ss1)
            using (ss2)
            using (ss3)
            {
                ss1.Object.Print();
                ss2.Object.Print();
                ss3.Object.Print();
            }

            Console.WriteLine();
        }

    }
}
