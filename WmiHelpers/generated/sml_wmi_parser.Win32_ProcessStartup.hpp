class SML_Win32_ProcessStartup 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"Win32_ProcessStartup" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: Win32_ProcessStartup //////////////////////////
struct SML_Win32_ProcessStartup_Props
{
CComVariant CreateFlags;
CComVariant EnvironmentVariables;
CComVariant ErrorMode;
CComVariant FillAttribute;
CComVariant PriorityClass;
CComVariant ShowWindow;
CComVariant Title;
CComVariant WinstationDesktop;
CComVariant X;
CComVariant XCountChars;
CComVariant XSize;
CComVariant Y;
CComVariant YCountChars;
CComVariant YSize;
CComVariant __CLASS;
CComVariant __DERIVATION;
CComVariant __DYNASTY;
CComVariant __GENUS;
CComVariant __NAMESPACE;
CComVariant __PATH;
CComVariant __PROPERTY_COUNT;
CComVariant __RELPATH;
CComVariant __SERVER;
CComVariant __SUPERCLASS;
} ;
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_Win32_ProcessStartup_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"CreateFlags"].vt != VT_EMPTY) { outReturns.CreateFlags = outkvs[L"CreateFlags"]; }
if (outkvs[L"EnvironmentVariables"].vt != VT_EMPTY) { outReturns.EnvironmentVariables = outkvs[L"EnvironmentVariables"]; }
if (outkvs[L"ErrorMode"].vt != VT_EMPTY) { outReturns.ErrorMode = outkvs[L"ErrorMode"]; }
if (outkvs[L"FillAttribute"].vt != VT_EMPTY) { outReturns.FillAttribute = outkvs[L"FillAttribute"]; }
if (outkvs[L"PriorityClass"].vt != VT_EMPTY) { outReturns.PriorityClass = outkvs[L"PriorityClass"]; }
if (outkvs[L"ShowWindow"].vt != VT_EMPTY) { outReturns.ShowWindow = outkvs[L"ShowWindow"]; }
if (outkvs[L"Title"].vt != VT_EMPTY) { outReturns.Title = outkvs[L"Title"]; }
if (outkvs[L"WinstationDesktop"].vt != VT_EMPTY) { outReturns.WinstationDesktop = outkvs[L"WinstationDesktop"]; }
if (outkvs[L"X"].vt != VT_EMPTY) { outReturns.X = outkvs[L"X"]; }
if (outkvs[L"XCountChars"].vt != VT_EMPTY) { outReturns.XCountChars = outkvs[L"XCountChars"]; }
if (outkvs[L"XSize"].vt != VT_EMPTY) { outReturns.XSize = outkvs[L"XSize"]; }
if (outkvs[L"Y"].vt != VT_EMPTY) { outReturns.Y = outkvs[L"Y"]; }
if (outkvs[L"YCountChars"].vt != VT_EMPTY) { outReturns.YCountChars = outkvs[L"YCountChars"]; }
if (outkvs[L"YSize"].vt != VT_EMPTY) { outReturns.YSize = outkvs[L"YSize"]; }
if (outkvs[L"__CLASS"].vt != VT_EMPTY) { outReturns.__CLASS = outkvs[L"__CLASS"]; }
if (outkvs[L"__DERIVATION"].vt != VT_EMPTY) { outReturns.__DERIVATION = outkvs[L"__DERIVATION"]; }
if (outkvs[L"__DYNASTY"].vt != VT_EMPTY) { outReturns.__DYNASTY = outkvs[L"__DYNASTY"]; }
if (outkvs[L"__GENUS"].vt != VT_EMPTY) { outReturns.__GENUS = outkvs[L"__GENUS"]; }
if (outkvs[L"__NAMESPACE"].vt != VT_EMPTY) { outReturns.__NAMESPACE = outkvs[L"__NAMESPACE"]; }
if (outkvs[L"__PATH"].vt != VT_EMPTY) { outReturns.__PATH = outkvs[L"__PATH"]; }
if (outkvs[L"__PROPERTY_COUNT"].vt != VT_EMPTY) { outReturns.__PROPERTY_COUNT = outkvs[L"__PROPERTY_COUNT"]; }
if (outkvs[L"__RELPATH"].vt != VT_EMPTY) { outReturns.__RELPATH = outkvs[L"__RELPATH"]; }
if (outkvs[L"__SERVER"].vt != VT_EMPTY) { outReturns.__SERVER = outkvs[L"__SERVER"]; }
if (outkvs[L"__SUPERCLASS"].vt != VT_EMPTY) { outReturns.__SUPERCLASS = outkvs[L"__SUPERCLASS"]; }
}
return hr;
}

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_Win32_ProcessStartup_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"CreateFlags"].vt != VT_EMPTY) { outReturns.CreateFlags = outkvs[L"CreateFlags"]; }
if (outkvs[L"EnvironmentVariables"].vt != VT_EMPTY) { outReturns.EnvironmentVariables = outkvs[L"EnvironmentVariables"]; }
if (outkvs[L"ErrorMode"].vt != VT_EMPTY) { outReturns.ErrorMode = outkvs[L"ErrorMode"]; }
if (outkvs[L"FillAttribute"].vt != VT_EMPTY) { outReturns.FillAttribute = outkvs[L"FillAttribute"]; }
if (outkvs[L"PriorityClass"].vt != VT_EMPTY) { outReturns.PriorityClass = outkvs[L"PriorityClass"]; }
if (outkvs[L"ShowWindow"].vt != VT_EMPTY) { outReturns.ShowWindow = outkvs[L"ShowWindow"]; }
if (outkvs[L"Title"].vt != VT_EMPTY) { outReturns.Title = outkvs[L"Title"]; }
if (outkvs[L"WinstationDesktop"].vt != VT_EMPTY) { outReturns.WinstationDesktop = outkvs[L"WinstationDesktop"]; }
if (outkvs[L"X"].vt != VT_EMPTY) { outReturns.X = outkvs[L"X"]; }
if (outkvs[L"XCountChars"].vt != VT_EMPTY) { outReturns.XCountChars = outkvs[L"XCountChars"]; }
if (outkvs[L"XSize"].vt != VT_EMPTY) { outReturns.XSize = outkvs[L"XSize"]; }
if (outkvs[L"Y"].vt != VT_EMPTY) { outReturns.Y = outkvs[L"Y"]; }
if (outkvs[L"YCountChars"].vt != VT_EMPTY) { outReturns.YCountChars = outkvs[L"YCountChars"]; }
if (outkvs[L"YSize"].vt != VT_EMPTY) { outReturns.YSize = outkvs[L"YSize"]; }
if (outkvs[L"__CLASS"].vt != VT_EMPTY) { outReturns.__CLASS = outkvs[L"__CLASS"]; }
if (outkvs[L"__DERIVATION"].vt != VT_EMPTY) { outReturns.__DERIVATION = outkvs[L"__DERIVATION"]; }
if (outkvs[L"__DYNASTY"].vt != VT_EMPTY) { outReturns.__DYNASTY = outkvs[L"__DYNASTY"]; }
if (outkvs[L"__GENUS"].vt != VT_EMPTY) { outReturns.__GENUS = outkvs[L"__GENUS"]; }
if (outkvs[L"__NAMESPACE"].vt != VT_EMPTY) { outReturns.__NAMESPACE = outkvs[L"__NAMESPACE"]; }
if (outkvs[L"__PATH"].vt != VT_EMPTY) { outReturns.__PATH = outkvs[L"__PATH"]; }
if (outkvs[L"__PROPERTY_COUNT"].vt != VT_EMPTY) { outReturns.__PROPERTY_COUNT = outkvs[L"__PROPERTY_COUNT"]; }
if (outkvs[L"__RELPATH"].vt != VT_EMPTY) { outReturns.__RELPATH = outkvs[L"__RELPATH"]; }
if (outkvs[L"__SERVER"].vt != VT_EMPTY) { outReturns.__SERVER = outkvs[L"__SERVER"]; }
if (outkvs[L"__SUPERCLASS"].vt != VT_EMPTY) { outReturns.__SUPERCLASS = outkvs[L"__SUPERCLASS"]; }
}
return hr;
}

HRESULT NewObj(SML_Win32_ProcessStartup_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.CreateFlags.vt != VT_EMPTY) { inkvs.insert({ L"CreateFlags", inParams.CreateFlags }); }
if (inParams.EnvironmentVariables.vt != VT_EMPTY) { inkvs.insert({ L"EnvironmentVariables", inParams.EnvironmentVariables }); }
if (inParams.ErrorMode.vt != VT_EMPTY) { inkvs.insert({ L"ErrorMode", inParams.ErrorMode }); }
if (inParams.FillAttribute.vt != VT_EMPTY) { inkvs.insert({ L"FillAttribute", inParams.FillAttribute }); }
if (inParams.PriorityClass.vt != VT_EMPTY) { inkvs.insert({ L"PriorityClass", inParams.PriorityClass }); }
if (inParams.ShowWindow.vt != VT_EMPTY) { inkvs.insert({ L"ShowWindow", inParams.ShowWindow }); }
if (inParams.Title.vt != VT_EMPTY) { inkvs.insert({ L"Title", inParams.Title }); }
if (inParams.WinstationDesktop.vt != VT_EMPTY) { inkvs.insert({ L"WinstationDesktop", inParams.WinstationDesktop }); }
if (inParams.X.vt != VT_EMPTY) { inkvs.insert({ L"X", inParams.X }); }
if (inParams.XCountChars.vt != VT_EMPTY) { inkvs.insert({ L"XCountChars", inParams.XCountChars }); }
if (inParams.XSize.vt != VT_EMPTY) { inkvs.insert({ L"XSize", inParams.XSize }); }
if (inParams.Y.vt != VT_EMPTY) { inkvs.insert({ L"Y", inParams.Y }); }
if (inParams.YCountChars.vt != VT_EMPTY) { inkvs.insert({ L"YCountChars", inParams.YCountChars }); }
if (inParams.YSize.vt != VT_EMPTY) { inkvs.insert({ L"YSize", inParams.YSize }); }
if (inParams.__CLASS.vt != VT_EMPTY) { inkvs.insert({ L"__CLASS", inParams.__CLASS }); }
if (inParams.__DERIVATION.vt != VT_EMPTY) { inkvs.insert({ L"__DERIVATION", inParams.__DERIVATION }); }
if (inParams.__DYNASTY.vt != VT_EMPTY) { inkvs.insert({ L"__DYNASTY", inParams.__DYNASTY }); }
if (inParams.__GENUS.vt != VT_EMPTY) { inkvs.insert({ L"__GENUS", inParams.__GENUS }); }
if (inParams.__NAMESPACE.vt != VT_EMPTY) { inkvs.insert({ L"__NAMESPACE", inParams.__NAMESPACE }); }
if (inParams.__PATH.vt != VT_EMPTY) { inkvs.insert({ L"__PATH", inParams.__PATH }); }
if (inParams.__PROPERTY_COUNT.vt != VT_EMPTY) { inkvs.insert({ L"__PROPERTY_COUNT", inParams.__PROPERTY_COUNT }); }
if (inParams.__RELPATH.vt != VT_EMPTY) { inkvs.insert({ L"__RELPATH", inParams.__RELPATH }); }
if (inParams.__SERVER.vt != VT_EMPTY) { inkvs.insert({ L"__SERVER", inParams.__SERVER }); }
if (inParams.__SUPERCLASS.vt != VT_EMPTY) { inkvs.insert({ L"__SUPERCLASS", inParams.__SUPERCLASS }); }
HRESULT hr = _smlwmi->NewObject(CLASS_NAME, inkvs, var);
return hr;
}




};
