class SML_MSFT_SmbShare 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"MSFT_SmbShare" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: MSFT_SmbShare //////////////////////////
struct SML_MSFT_SmbShare_Props
{
CComVariant AvailabilityType;
CComVariant CATimeout;
CComVariant CachingMode;
CComVariant ConcurrentUserLimit;
CComVariant ContinuouslyAvailable;
CComVariant CurrentUsers;
CComVariant Description;
CComVariant EncryptData;
CComVariant FolderEnumerationMode;
CComVariant IdentityRemoting;
CComVariant Infrastructure;
CComVariant LeasingMode;
CComVariant Name;
CComVariant Path;
CComVariant ScopeName;
CComVariant Scoped;
CComVariant SecurityDescriptor;
CComVariant ShadowCopy;
CComVariant ShareState;
CComVariant ShareType;
CComVariant SmbInstance;
CComVariant Special;
CComVariant Temporary;
CComVariant Volume;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_MSFT_SmbShare_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AvailabilityType"].vt != VT_EMPTY) { outReturns.AvailabilityType = outkvs[L"AvailabilityType"]; }
if (outkvs[L"CATimeout"].vt != VT_EMPTY) { outReturns.CATimeout = outkvs[L"CATimeout"]; }
if (outkvs[L"CachingMode"].vt != VT_EMPTY) { outReturns.CachingMode = outkvs[L"CachingMode"]; }
if (outkvs[L"ConcurrentUserLimit"].vt != VT_EMPTY) { outReturns.ConcurrentUserLimit = outkvs[L"ConcurrentUserLimit"]; }
if (outkvs[L"ContinuouslyAvailable"].vt != VT_EMPTY) { outReturns.ContinuouslyAvailable = outkvs[L"ContinuouslyAvailable"]; }
if (outkvs[L"CurrentUsers"].vt != VT_EMPTY) { outReturns.CurrentUsers = outkvs[L"CurrentUsers"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"EncryptData"].vt != VT_EMPTY) { outReturns.EncryptData = outkvs[L"EncryptData"]; }
if (outkvs[L"FolderEnumerationMode"].vt != VT_EMPTY) { outReturns.FolderEnumerationMode = outkvs[L"FolderEnumerationMode"]; }
if (outkvs[L"IdentityRemoting"].vt != VT_EMPTY) { outReturns.IdentityRemoting = outkvs[L"IdentityRemoting"]; }
if (outkvs[L"Infrastructure"].vt != VT_EMPTY) { outReturns.Infrastructure = outkvs[L"Infrastructure"]; }
if (outkvs[L"LeasingMode"].vt != VT_EMPTY) { outReturns.LeasingMode = outkvs[L"LeasingMode"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"Path"].vt != VT_EMPTY) { outReturns.Path = outkvs[L"Path"]; }
if (outkvs[L"ScopeName"].vt != VT_EMPTY) { outReturns.ScopeName = outkvs[L"ScopeName"]; }
if (outkvs[L"Scoped"].vt != VT_EMPTY) { outReturns.Scoped = outkvs[L"Scoped"]; }
if (outkvs[L"SecurityDescriptor"].vt != VT_EMPTY) { outReturns.SecurityDescriptor = outkvs[L"SecurityDescriptor"]; }
if (outkvs[L"ShadowCopy"].vt != VT_EMPTY) { outReturns.ShadowCopy = outkvs[L"ShadowCopy"]; }
if (outkvs[L"ShareState"].vt != VT_EMPTY) { outReturns.ShareState = outkvs[L"ShareState"]; }
if (outkvs[L"ShareType"].vt != VT_EMPTY) { outReturns.ShareType = outkvs[L"ShareType"]; }
if (outkvs[L"SmbInstance"].vt != VT_EMPTY) { outReturns.SmbInstance = outkvs[L"SmbInstance"]; }
if (outkvs[L"Special"].vt != VT_EMPTY) { outReturns.Special = outkvs[L"Special"]; }
if (outkvs[L"Temporary"].vt != VT_EMPTY) { outReturns.Temporary = outkvs[L"Temporary"]; }
if (outkvs[L"Volume"].vt != VT_EMPTY) { outReturns.Volume = outkvs[L"Volume"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_MSFT_SmbShare_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AvailabilityType"].vt != VT_EMPTY) { outReturns.AvailabilityType = outkvs[L"AvailabilityType"]; }
if (outkvs[L"CATimeout"].vt != VT_EMPTY) { outReturns.CATimeout = outkvs[L"CATimeout"]; }
if (outkvs[L"CachingMode"].vt != VT_EMPTY) { outReturns.CachingMode = outkvs[L"CachingMode"]; }
if (outkvs[L"ConcurrentUserLimit"].vt != VT_EMPTY) { outReturns.ConcurrentUserLimit = outkvs[L"ConcurrentUserLimit"]; }
if (outkvs[L"ContinuouslyAvailable"].vt != VT_EMPTY) { outReturns.ContinuouslyAvailable = outkvs[L"ContinuouslyAvailable"]; }
if (outkvs[L"CurrentUsers"].vt != VT_EMPTY) { outReturns.CurrentUsers = outkvs[L"CurrentUsers"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"EncryptData"].vt != VT_EMPTY) { outReturns.EncryptData = outkvs[L"EncryptData"]; }
if (outkvs[L"FolderEnumerationMode"].vt != VT_EMPTY) { outReturns.FolderEnumerationMode = outkvs[L"FolderEnumerationMode"]; }
if (outkvs[L"IdentityRemoting"].vt != VT_EMPTY) { outReturns.IdentityRemoting = outkvs[L"IdentityRemoting"]; }
if (outkvs[L"Infrastructure"].vt != VT_EMPTY) { outReturns.Infrastructure = outkvs[L"Infrastructure"]; }
if (outkvs[L"LeasingMode"].vt != VT_EMPTY) { outReturns.LeasingMode = outkvs[L"LeasingMode"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"Path"].vt != VT_EMPTY) { outReturns.Path = outkvs[L"Path"]; }
if (outkvs[L"ScopeName"].vt != VT_EMPTY) { outReturns.ScopeName = outkvs[L"ScopeName"]; }
if (outkvs[L"Scoped"].vt != VT_EMPTY) { outReturns.Scoped = outkvs[L"Scoped"]; }
if (outkvs[L"SecurityDescriptor"].vt != VT_EMPTY) { outReturns.SecurityDescriptor = outkvs[L"SecurityDescriptor"]; }
if (outkvs[L"ShadowCopy"].vt != VT_EMPTY) { outReturns.ShadowCopy = outkvs[L"ShadowCopy"]; }
if (outkvs[L"ShareState"].vt != VT_EMPTY) { outReturns.ShareState = outkvs[L"ShareState"]; }
if (outkvs[L"ShareType"].vt != VT_EMPTY) { outReturns.ShareType = outkvs[L"ShareType"]; }
if (outkvs[L"SmbInstance"].vt != VT_EMPTY) { outReturns.SmbInstance = outkvs[L"SmbInstance"]; }
if (outkvs[L"Special"].vt != VT_EMPTY) { outReturns.Special = outkvs[L"Special"]; }
if (outkvs[L"Temporary"].vt != VT_EMPTY) { outReturns.Temporary = outkvs[L"Temporary"]; }
if (outkvs[L"Volume"].vt != VT_EMPTY) { outReturns.Volume = outkvs[L"Volume"]; }
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

HRESULT NewObj(SML_MSFT_SmbShare_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.AvailabilityType.vt != VT_EMPTY) { inkvs.insert({ L"AvailabilityType", inParams.AvailabilityType }); }
if (inParams.CATimeout.vt != VT_EMPTY) { inkvs.insert({ L"CATimeout", inParams.CATimeout }); }
if (inParams.CachingMode.vt != VT_EMPTY) { inkvs.insert({ L"CachingMode", inParams.CachingMode }); }
if (inParams.ConcurrentUserLimit.vt != VT_EMPTY) { inkvs.insert({ L"ConcurrentUserLimit", inParams.ConcurrentUserLimit }); }
if (inParams.ContinuouslyAvailable.vt != VT_EMPTY) { inkvs.insert({ L"ContinuouslyAvailable", inParams.ContinuouslyAvailable }); }
if (inParams.CurrentUsers.vt != VT_EMPTY) { inkvs.insert({ L"CurrentUsers", inParams.CurrentUsers }); }
if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
if (inParams.EncryptData.vt != VT_EMPTY) { inkvs.insert({ L"EncryptData", inParams.EncryptData }); }
if (inParams.FolderEnumerationMode.vt != VT_EMPTY) { inkvs.insert({ L"FolderEnumerationMode", inParams.FolderEnumerationMode }); }
if (inParams.IdentityRemoting.vt != VT_EMPTY) { inkvs.insert({ L"IdentityRemoting", inParams.IdentityRemoting }); }
if (inParams.Infrastructure.vt != VT_EMPTY) { inkvs.insert({ L"Infrastructure", inParams.Infrastructure }); }
if (inParams.LeasingMode.vt != VT_EMPTY) { inkvs.insert({ L"LeasingMode", inParams.LeasingMode }); }
if (inParams.Name.vt != VT_EMPTY) { inkvs.insert({ L"Name", inParams.Name }); }
if (inParams.Path.vt != VT_EMPTY) { inkvs.insert({ L"Path", inParams.Path }); }
if (inParams.ScopeName.vt != VT_EMPTY) { inkvs.insert({ L"ScopeName", inParams.ScopeName }); }
if (inParams.Scoped.vt != VT_EMPTY) { inkvs.insert({ L"Scoped", inParams.Scoped }); }
if (inParams.SecurityDescriptor.vt != VT_EMPTY) { inkvs.insert({ L"SecurityDescriptor", inParams.SecurityDescriptor }); }
if (inParams.ShadowCopy.vt != VT_EMPTY) { inkvs.insert({ L"ShadowCopy", inParams.ShadowCopy }); }
if (inParams.ShareState.vt != VT_EMPTY) { inkvs.insert({ L"ShareState", inParams.ShareState }); }
if (inParams.ShareType.vt != VT_EMPTY) { inkvs.insert({ L"ShareType", inParams.ShareType }); }
if (inParams.SmbInstance.vt != VT_EMPTY) { inkvs.insert({ L"SmbInstance", inParams.SmbInstance }); }
if (inParams.Special.vt != VT_EMPTY) { inkvs.insert({ L"Special", inParams.Special }); }
if (inParams.Temporary.vt != VT_EMPTY) { inkvs.insert({ L"Temporary", inParams.Temporary }); }
if (inParams.Volume.vt != VT_EMPTY) { inkvs.insert({ L"Volume", inParams.Volume }); }
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




////////////////////////// Method: CreateShare ///////////////////////////
struct CreateShare_InParams
{
CComVariant CATimeout;
CComVariant CachingMode;
CComVariant ChangeAccess;
CComVariant ConcurrentUserLimit;
CComVariant ContinuouslyAvailable;
CComVariant Description;
CComVariant EncryptData;
CComVariant FolderEnumerationMode;
CComVariant FullAccess;
CComVariant LeasingMode;
CComVariant Name;
CComVariant NoAccess;
CComVariant Path;
CComVariant ReadAccess;
CComVariant ScopeName;
CComVariant SecurityDescriptor;
CComVariant Temporary;
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
struct CreateShare_OutResturns
{
CComVariant CreatedShare;
CComVariant ReturnValue;
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
HRESULT CreateShare(IWbemClassObject* obj, CreateShare_InParams& inParams, CreateShare_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.CATimeout.vt != VT_EMPTY) { inkvs.insert({ L"CATimeout", inParams.CATimeout }); }
if (inParams.CachingMode.vt != VT_EMPTY) { inkvs.insert({ L"CachingMode", inParams.CachingMode }); }
if (inParams.ChangeAccess.vt != VT_EMPTY) { inkvs.insert({ L"ChangeAccess", inParams.ChangeAccess }); }
if (inParams.ConcurrentUserLimit.vt != VT_EMPTY) { inkvs.insert({ L"ConcurrentUserLimit", inParams.ConcurrentUserLimit }); }
if (inParams.ContinuouslyAvailable.vt != VT_EMPTY) { inkvs.insert({ L"ContinuouslyAvailable", inParams.ContinuouslyAvailable }); }
if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
if (inParams.EncryptData.vt != VT_EMPTY) { inkvs.insert({ L"EncryptData", inParams.EncryptData }); }
if (inParams.FolderEnumerationMode.vt != VT_EMPTY) { inkvs.insert({ L"FolderEnumerationMode", inParams.FolderEnumerationMode }); }
if (inParams.FullAccess.vt != VT_EMPTY) { inkvs.insert({ L"FullAccess", inParams.FullAccess }); }
if (inParams.LeasingMode.vt != VT_EMPTY) { inkvs.insert({ L"LeasingMode", inParams.LeasingMode }); }
if (inParams.Name.vt != VT_EMPTY) { inkvs.insert({ L"Name", inParams.Name }); }
if (inParams.NoAccess.vt != VT_EMPTY) { inkvs.insert({ L"NoAccess", inParams.NoAccess }); }
if (inParams.Path.vt != VT_EMPTY) { inkvs.insert({ L"Path", inParams.Path }); }
if (inParams.ReadAccess.vt != VT_EMPTY) { inkvs.insert({ L"ReadAccess", inParams.ReadAccess }); }
if (inParams.ScopeName.vt != VT_EMPTY) { inkvs.insert({ L"ScopeName", inParams.ScopeName }); }
if (inParams.SecurityDescriptor.vt != VT_EMPTY) { inkvs.insert({ L"SecurityDescriptor", inParams.SecurityDescriptor }); }
if (inParams.Temporary.vt != VT_EMPTY) { inkvs.insert({ L"Temporary", inParams.Temporary }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"CreateShare", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedShare"].vt != VT_EMPTY) { outReturns.CreatedShare = outkvs[L"CreatedShare"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


////////////////////////// Method: GrantAccess ///////////////////////////
struct GrantAccess_InParams
{
CComVariant AccessRight;
CComVariant AccountName;
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
struct GrantAccess_OutResturns
{
CComVariant Output;
CComVariant ReturnValue;
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
HRESULT GrantAccess(IWbemClassObject* obj, GrantAccess_InParams& inParams, GrantAccess_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AccessRight.vt != VT_EMPTY) { inkvs.insert({ L"AccessRight", inParams.AccessRight }); }
if (inParams.AccountName.vt != VT_EMPTY) { inkvs.insert({ L"AccountName", inParams.AccountName }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"GrantAccess", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Output"].vt != VT_EMPTY) { outReturns.Output = outkvs[L"Output"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


////////////////////////// Method: RevokeAccess ///////////////////////////
struct RevokeAccess_InParams
{
CComVariant AccountName;
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
struct RevokeAccess_OutResturns
{
CComVariant Output;
CComVariant ReturnValue;
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
HRESULT RevokeAccess(IWbemClassObject* obj, RevokeAccess_InParams& inParams, RevokeAccess_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AccountName.vt != VT_EMPTY) { inkvs.insert({ L"AccountName", inParams.AccountName }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"RevokeAccess", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Output"].vt != VT_EMPTY) { outReturns.Output = outkvs[L"Output"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


////////////////////////// Method: BlockAccess ///////////////////////////
struct BlockAccess_InParams
{
CComVariant AccountName;
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
struct BlockAccess_OutResturns
{
CComVariant Output;
CComVariant ReturnValue;
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
HRESULT BlockAccess(IWbemClassObject* obj, BlockAccess_InParams& inParams, BlockAccess_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AccountName.vt != VT_EMPTY) { inkvs.insert({ L"AccountName", inParams.AccountName }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"BlockAccess", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Output"].vt != VT_EMPTY) { outReturns.Output = outkvs[L"Output"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


////////////////////////// Method: UnblockAccess ///////////////////////////
struct UnblockAccess_InParams
{
CComVariant AccountName;
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
struct UnblockAccess_OutResturns
{
CComVariant Output;
CComVariant ReturnValue;
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
HRESULT UnblockAccess(IWbemClassObject* obj, UnblockAccess_InParams& inParams, UnblockAccess_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AccountName.vt != VT_EMPTY) { inkvs.insert({ L"AccountName", inParams.AccountName }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"UnblockAccess", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Output"].vt != VT_EMPTY) { outReturns.Output = outkvs[L"Output"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


////////////////////////// Method: GetAccessControlEntries ///////////////////////////
struct GetAccessControlEntries_InParams
{
} ;
struct GetAccessControlEntries_OutResturns
{
CComVariant Output;
CComVariant ReturnValue;
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
HRESULT GetAccessControlEntries(IWbemClassObject* obj, GetAccessControlEntries_InParams& inParams, GetAccessControlEntries_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"GetAccessControlEntries", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Output"].vt != VT_EMPTY) { outReturns.Output = outkvs[L"Output"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


////////////////////////// Method: EnumerateShares ///////////////////////////
struct EnumerateShares_InParams
{
CComVariant PopulateVolumeProperty;
CComVariant ScopeName;
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
struct EnumerateShares_OutResturns
{
CComVariant Output;
CComVariant ReturnValue;
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
HRESULT EnumerateShares(IWbemClassObject* obj, EnumerateShares_InParams& inParams, EnumerateShares_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.PopulateVolumeProperty.vt != VT_EMPTY) { inkvs.insert({ L"PopulateVolumeProperty", inParams.PopulateVolumeProperty }); }
if (inParams.ScopeName.vt != VT_EMPTY) { inkvs.insert({ L"ScopeName", inParams.ScopeName }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"EnumerateShares", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Output"].vt != VT_EMPTY) { outReturns.Output = outkvs[L"Output"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


////////////////////////// Method: GetShare ///////////////////////////
struct GetShare_InParams
{
CComVariant GetAclNonAdmin;
CComVariant ScopeName;
CComVariant ShareName;
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
struct GetShare_OutResturns
{
CComVariant Output;
CComVariant ReturnValue;
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
HRESULT GetShare(IWbemClassObject* obj, GetShare_InParams& inParams, GetShare_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.GetAclNonAdmin.vt != VT_EMPTY) { inkvs.insert({ L"GetAclNonAdmin", inParams.GetAclNonAdmin }); }
if (inParams.ScopeName.vt != VT_EMPTY) { inkvs.insert({ L"ScopeName", inParams.ScopeName }); }
if (inParams.ShareName.vt != VT_EMPTY) { inkvs.insert({ L"ShareName", inParams.ShareName }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"GetShare", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Output"].vt != VT_EMPTY) { outReturns.Output = outkvs[L"Output"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


////////////////////////// Method: FireShareChangeEvent ///////////////////////////
struct FireShareChangeEvent_InParams
{
CComVariant CATimeout;
CComVariant ConcurrentUserLimit;
CComVariant EventType;
CComVariant Flags;
CComVariant Path;
CComVariant Remark;
CComVariant ScopeName;
CComVariant SecurityDescriptor;
CComVariant ShareName;
CComVariant ShareState;
CComVariant Type;
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
struct FireShareChangeEvent_OutResturns
{
CComVariant ReturnValue;
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
HRESULT FireShareChangeEvent(IWbemClassObject* obj, FireShareChangeEvent_InParams& inParams, FireShareChangeEvent_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.CATimeout.vt != VT_EMPTY) { inkvs.insert({ L"CATimeout", inParams.CATimeout }); }
if (inParams.ConcurrentUserLimit.vt != VT_EMPTY) { inkvs.insert({ L"ConcurrentUserLimit", inParams.ConcurrentUserLimit }); }
if (inParams.EventType.vt != VT_EMPTY) { inkvs.insert({ L"EventType", inParams.EventType }); }
if (inParams.Flags.vt != VT_EMPTY) { inkvs.insert({ L"Flags", inParams.Flags }); }
if (inParams.Path.vt != VT_EMPTY) { inkvs.insert({ L"Path", inParams.Path }); }
if (inParams.Remark.vt != VT_EMPTY) { inkvs.insert({ L"Remark", inParams.Remark }); }
if (inParams.ScopeName.vt != VT_EMPTY) { inkvs.insert({ L"ScopeName", inParams.ScopeName }); }
if (inParams.SecurityDescriptor.vt != VT_EMPTY) { inkvs.insert({ L"SecurityDescriptor", inParams.SecurityDescriptor }); }
if (inParams.ShareName.vt != VT_EMPTY) { inkvs.insert({ L"ShareName", inParams.ShareName }); }
if (inParams.ShareState.vt != VT_EMPTY) { inkvs.insert({ L"ShareState", inParams.ShareState }); }
if (inParams.Type.vt != VT_EMPTY) { inkvs.insert({ L"Type", inParams.Type }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"FireShareChangeEvent", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
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


};
