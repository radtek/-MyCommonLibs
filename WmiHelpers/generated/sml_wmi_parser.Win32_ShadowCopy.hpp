class SML_Win32_ShadowCopy 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"Win32_ShadowCopy" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: Win32_ShadowCopy //////////////////////////
struct SML_Win32_ShadowCopy_Props
{
CComVariant Caption;
CComVariant ClientAccessible;
CComVariant Count;
CComVariant Description;
CComVariant DeviceObject;
CComVariant Differential;
CComVariant ExposedLocally;
CComVariant ExposedName;
CComVariant ExposedPath;
CComVariant ExposedRemotely;
CComVariant HardwareAssisted;
CComVariant ID;
CComVariant Imported;
CComVariant InstallDate;
CComVariant Name;
CComVariant NoAutoRelease;
CComVariant NoWriters;
CComVariant NotSurfaced;
CComVariant OriginatingMachine;
CComVariant Persistent;
CComVariant Plex;
CComVariant ProviderID;
CComVariant ServiceMachine;
CComVariant SetID;
CComVariant State;
CComVariant Status;
CComVariant Transportable;
CComVariant VolumeName;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_Win32_ShadowCopy_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"ClientAccessible"].vt != VT_EMPTY) { outReturns.ClientAccessible = outkvs[L"ClientAccessible"]; }
if (outkvs[L"Count"].vt != VT_EMPTY) { outReturns.Count = outkvs[L"Count"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DeviceObject"].vt != VT_EMPTY) { outReturns.DeviceObject = outkvs[L"DeviceObject"]; }
if (outkvs[L"Differential"].vt != VT_EMPTY) { outReturns.Differential = outkvs[L"Differential"]; }
if (outkvs[L"ExposedLocally"].vt != VT_EMPTY) { outReturns.ExposedLocally = outkvs[L"ExposedLocally"]; }
if (outkvs[L"ExposedName"].vt != VT_EMPTY) { outReturns.ExposedName = outkvs[L"ExposedName"]; }
if (outkvs[L"ExposedPath"].vt != VT_EMPTY) { outReturns.ExposedPath = outkvs[L"ExposedPath"]; }
if (outkvs[L"ExposedRemotely"].vt != VT_EMPTY) { outReturns.ExposedRemotely = outkvs[L"ExposedRemotely"]; }
if (outkvs[L"HardwareAssisted"].vt != VT_EMPTY) { outReturns.HardwareAssisted = outkvs[L"HardwareAssisted"]; }
if (outkvs[L"ID"].vt != VT_EMPTY) { outReturns.ID = outkvs[L"ID"]; }
if (outkvs[L"Imported"].vt != VT_EMPTY) { outReturns.Imported = outkvs[L"Imported"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"NoAutoRelease"].vt != VT_EMPTY) { outReturns.NoAutoRelease = outkvs[L"NoAutoRelease"]; }
if (outkvs[L"NoWriters"].vt != VT_EMPTY) { outReturns.NoWriters = outkvs[L"NoWriters"]; }
if (outkvs[L"NotSurfaced"].vt != VT_EMPTY) { outReturns.NotSurfaced = outkvs[L"NotSurfaced"]; }
if (outkvs[L"OriginatingMachine"].vt != VT_EMPTY) { outReturns.OriginatingMachine = outkvs[L"OriginatingMachine"]; }
if (outkvs[L"Persistent"].vt != VT_EMPTY) { outReturns.Persistent = outkvs[L"Persistent"]; }
if (outkvs[L"Plex"].vt != VT_EMPTY) { outReturns.Plex = outkvs[L"Plex"]; }
if (outkvs[L"ProviderID"].vt != VT_EMPTY) { outReturns.ProviderID = outkvs[L"ProviderID"]; }
if (outkvs[L"ServiceMachine"].vt != VT_EMPTY) { outReturns.ServiceMachine = outkvs[L"ServiceMachine"]; }
if (outkvs[L"SetID"].vt != VT_EMPTY) { outReturns.SetID = outkvs[L"SetID"]; }
if (outkvs[L"State"].vt != VT_EMPTY) { outReturns.State = outkvs[L"State"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"Transportable"].vt != VT_EMPTY) { outReturns.Transportable = outkvs[L"Transportable"]; }
if (outkvs[L"VolumeName"].vt != VT_EMPTY) { outReturns.VolumeName = outkvs[L"VolumeName"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_Win32_ShadowCopy_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"ClientAccessible"].vt != VT_EMPTY) { outReturns.ClientAccessible = outkvs[L"ClientAccessible"]; }
if (outkvs[L"Count"].vt != VT_EMPTY) { outReturns.Count = outkvs[L"Count"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DeviceObject"].vt != VT_EMPTY) { outReturns.DeviceObject = outkvs[L"DeviceObject"]; }
if (outkvs[L"Differential"].vt != VT_EMPTY) { outReturns.Differential = outkvs[L"Differential"]; }
if (outkvs[L"ExposedLocally"].vt != VT_EMPTY) { outReturns.ExposedLocally = outkvs[L"ExposedLocally"]; }
if (outkvs[L"ExposedName"].vt != VT_EMPTY) { outReturns.ExposedName = outkvs[L"ExposedName"]; }
if (outkvs[L"ExposedPath"].vt != VT_EMPTY) { outReturns.ExposedPath = outkvs[L"ExposedPath"]; }
if (outkvs[L"ExposedRemotely"].vt != VT_EMPTY) { outReturns.ExposedRemotely = outkvs[L"ExposedRemotely"]; }
if (outkvs[L"HardwareAssisted"].vt != VT_EMPTY) { outReturns.HardwareAssisted = outkvs[L"HardwareAssisted"]; }
if (outkvs[L"ID"].vt != VT_EMPTY) { outReturns.ID = outkvs[L"ID"]; }
if (outkvs[L"Imported"].vt != VT_EMPTY) { outReturns.Imported = outkvs[L"Imported"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"NoAutoRelease"].vt != VT_EMPTY) { outReturns.NoAutoRelease = outkvs[L"NoAutoRelease"]; }
if (outkvs[L"NoWriters"].vt != VT_EMPTY) { outReturns.NoWriters = outkvs[L"NoWriters"]; }
if (outkvs[L"NotSurfaced"].vt != VT_EMPTY) { outReturns.NotSurfaced = outkvs[L"NotSurfaced"]; }
if (outkvs[L"OriginatingMachine"].vt != VT_EMPTY) { outReturns.OriginatingMachine = outkvs[L"OriginatingMachine"]; }
if (outkvs[L"Persistent"].vt != VT_EMPTY) { outReturns.Persistent = outkvs[L"Persistent"]; }
if (outkvs[L"Plex"].vt != VT_EMPTY) { outReturns.Plex = outkvs[L"Plex"]; }
if (outkvs[L"ProviderID"].vt != VT_EMPTY) { outReturns.ProviderID = outkvs[L"ProviderID"]; }
if (outkvs[L"ServiceMachine"].vt != VT_EMPTY) { outReturns.ServiceMachine = outkvs[L"ServiceMachine"]; }
if (outkvs[L"SetID"].vt != VT_EMPTY) { outReturns.SetID = outkvs[L"SetID"]; }
if (outkvs[L"State"].vt != VT_EMPTY) { outReturns.State = outkvs[L"State"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"Transportable"].vt != VT_EMPTY) { outReturns.Transportable = outkvs[L"Transportable"]; }
if (outkvs[L"VolumeName"].vt != VT_EMPTY) { outReturns.VolumeName = outkvs[L"VolumeName"]; }
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

HRESULT NewObj(SML_Win32_ShadowCopy_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.Caption.vt != VT_EMPTY) { inkvs.insert({ L"Caption", inParams.Caption }); }
if (inParams.ClientAccessible.vt != VT_EMPTY) { inkvs.insert({ L"ClientAccessible", inParams.ClientAccessible }); }
if (inParams.Count.vt != VT_EMPTY) { inkvs.insert({ L"Count", inParams.Count }); }
if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
if (inParams.DeviceObject.vt != VT_EMPTY) { inkvs.insert({ L"DeviceObject", inParams.DeviceObject }); }
if (inParams.Differential.vt != VT_EMPTY) { inkvs.insert({ L"Differential", inParams.Differential }); }
if (inParams.ExposedLocally.vt != VT_EMPTY) { inkvs.insert({ L"ExposedLocally", inParams.ExposedLocally }); }
if (inParams.ExposedName.vt != VT_EMPTY) { inkvs.insert({ L"ExposedName", inParams.ExposedName }); }
if (inParams.ExposedPath.vt != VT_EMPTY) { inkvs.insert({ L"ExposedPath", inParams.ExposedPath }); }
if (inParams.ExposedRemotely.vt != VT_EMPTY) { inkvs.insert({ L"ExposedRemotely", inParams.ExposedRemotely }); }
if (inParams.HardwareAssisted.vt != VT_EMPTY) { inkvs.insert({ L"HardwareAssisted", inParams.HardwareAssisted }); }
if (inParams.ID.vt != VT_EMPTY) { inkvs.insert({ L"ID", inParams.ID }); }
if (inParams.Imported.vt != VT_EMPTY) { inkvs.insert({ L"Imported", inParams.Imported }); }
if (inParams.InstallDate.vt != VT_EMPTY) { inkvs.insert({ L"InstallDate", inParams.InstallDate }); }
if (inParams.Name.vt != VT_EMPTY) { inkvs.insert({ L"Name", inParams.Name }); }
if (inParams.NoAutoRelease.vt != VT_EMPTY) { inkvs.insert({ L"NoAutoRelease", inParams.NoAutoRelease }); }
if (inParams.NoWriters.vt != VT_EMPTY) { inkvs.insert({ L"NoWriters", inParams.NoWriters }); }
if (inParams.NotSurfaced.vt != VT_EMPTY) { inkvs.insert({ L"NotSurfaced", inParams.NotSurfaced }); }
if (inParams.OriginatingMachine.vt != VT_EMPTY) { inkvs.insert({ L"OriginatingMachine", inParams.OriginatingMachine }); }
if (inParams.Persistent.vt != VT_EMPTY) { inkvs.insert({ L"Persistent", inParams.Persistent }); }
if (inParams.Plex.vt != VT_EMPTY) { inkvs.insert({ L"Plex", inParams.Plex }); }
if (inParams.ProviderID.vt != VT_EMPTY) { inkvs.insert({ L"ProviderID", inParams.ProviderID }); }
if (inParams.ServiceMachine.vt != VT_EMPTY) { inkvs.insert({ L"ServiceMachine", inParams.ServiceMachine }); }
if (inParams.SetID.vt != VT_EMPTY) { inkvs.insert({ L"SetID", inParams.SetID }); }
if (inParams.State.vt != VT_EMPTY) { inkvs.insert({ L"State", inParams.State }); }
if (inParams.Status.vt != VT_EMPTY) { inkvs.insert({ L"Status", inParams.Status }); }
if (inParams.Transportable.vt != VT_EMPTY) { inkvs.insert({ L"Transportable", inParams.Transportable }); }
if (inParams.VolumeName.vt != VT_EMPTY) { inkvs.insert({ L"VolumeName", inParams.VolumeName }); }
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




////////////////////////// Method: Create ///////////////////////////
struct Create_InParams
{
CComVariant Context;
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
struct Create_OutResturns
{
CComVariant ReturnValue;
CComVariant ShadowID;
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
HRESULT Create(IWbemClassObject* obj, Create_InParams& inParams, Create_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.Context.vt != VT_EMPTY) { inkvs.insert({ L"Context", inParams.Context }); }
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

CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Create", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
if (outkvs[L"ShadowID"].vt != VT_EMPTY) { outReturns.ShadowID = outkvs[L"ShadowID"]; }
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


////////////////////////// Method: Revert ///////////////////////////
struct Revert_InParams
{
CComVariant ForceDismount;
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
struct Revert_OutResturns
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
HRESULT Revert(IWbemClassObject* obj, Revert_InParams& inParams, Revert_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.ForceDismount.vt != VT_EMPTY) { inkvs.insert({ L"ForceDismount", inParams.ForceDismount }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Revert", inkvs, outkvs, &spout);

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
