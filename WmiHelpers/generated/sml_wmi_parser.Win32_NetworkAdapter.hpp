class SML_Win32_NetworkAdapter 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"Win32_NetworkAdapter" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: Win32_NetworkAdapter //////////////////////////
struct SML_Win32_NetworkAdapter_Props
{
CComVariant AdapterType;
CComVariant AdapterTypeId;
CComVariant AutoSense;
CComVariant Availability;
CComVariant Caption;
CComVariant ConfigManagerErrorCode;
CComVariant ConfigManagerUserConfig;
CComVariant CreationClassName;
CComVariant Description;
CComVariant DeviceID;
CComVariant ErrorCleared;
CComVariant ErrorDescription;
CComVariant GUID;
CComVariant Index;
CComVariant InstallDate;
CComVariant Installed;
CComVariant InterfaceIndex;
CComVariant LastErrorCode;
CComVariant MACAddress;
CComVariant Manufacturer;
CComVariant MaxNumberControlled;
CComVariant MaxSpeed;
CComVariant Name;
CComVariant NetConnectionID;
CComVariant NetConnectionStatus;
CComVariant NetEnabled;
CComVariant NetworkAddresses;
CComVariant PNPDeviceID;
CComVariant PermanentAddress;
CComVariant PhysicalAdapter;
CComVariant PowerManagementCapabilities;
CComVariant PowerManagementSupported;
CComVariant ProductName;
CComVariant ServiceName;
CComVariant Speed;
CComVariant Status;
CComVariant StatusInfo;
CComVariant SystemCreationClassName;
CComVariant SystemName;
CComVariant TimeOfLastReset;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_Win32_NetworkAdapter_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AdapterType"].vt != VT_EMPTY) { outReturns.AdapterType = outkvs[L"AdapterType"]; }
if (outkvs[L"AdapterTypeId"].vt != VT_EMPTY) { outReturns.AdapterTypeId = outkvs[L"AdapterTypeId"]; }
if (outkvs[L"AutoSense"].vt != VT_EMPTY) { outReturns.AutoSense = outkvs[L"AutoSense"]; }
if (outkvs[L"Availability"].vt != VT_EMPTY) { outReturns.Availability = outkvs[L"Availability"]; }
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"ConfigManagerErrorCode"].vt != VT_EMPTY) { outReturns.ConfigManagerErrorCode = outkvs[L"ConfigManagerErrorCode"]; }
if (outkvs[L"ConfigManagerUserConfig"].vt != VT_EMPTY) { outReturns.ConfigManagerUserConfig = outkvs[L"ConfigManagerUserConfig"]; }
if (outkvs[L"CreationClassName"].vt != VT_EMPTY) { outReturns.CreationClassName = outkvs[L"CreationClassName"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DeviceID"].vt != VT_EMPTY) { outReturns.DeviceID = outkvs[L"DeviceID"]; }
if (outkvs[L"ErrorCleared"].vt != VT_EMPTY) { outReturns.ErrorCleared = outkvs[L"ErrorCleared"]; }
if (outkvs[L"ErrorDescription"].vt != VT_EMPTY) { outReturns.ErrorDescription = outkvs[L"ErrorDescription"]; }
if (outkvs[L"GUID"].vt != VT_EMPTY) { outReturns.GUID = outkvs[L"GUID"]; }
if (outkvs[L"Index"].vt != VT_EMPTY) { outReturns.Index = outkvs[L"Index"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"Installed"].vt != VT_EMPTY) { outReturns.Installed = outkvs[L"Installed"]; }
if (outkvs[L"InterfaceIndex"].vt != VT_EMPTY) { outReturns.InterfaceIndex = outkvs[L"InterfaceIndex"]; }
if (outkvs[L"LastErrorCode"].vt != VT_EMPTY) { outReturns.LastErrorCode = outkvs[L"LastErrorCode"]; }
if (outkvs[L"MACAddress"].vt != VT_EMPTY) { outReturns.MACAddress = outkvs[L"MACAddress"]; }
if (outkvs[L"Manufacturer"].vt != VT_EMPTY) { outReturns.Manufacturer = outkvs[L"Manufacturer"]; }
if (outkvs[L"MaxNumberControlled"].vt != VT_EMPTY) { outReturns.MaxNumberControlled = outkvs[L"MaxNumberControlled"]; }
if (outkvs[L"MaxSpeed"].vt != VT_EMPTY) { outReturns.MaxSpeed = outkvs[L"MaxSpeed"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"NetConnectionID"].vt != VT_EMPTY) { outReturns.NetConnectionID = outkvs[L"NetConnectionID"]; }
if (outkvs[L"NetConnectionStatus"].vt != VT_EMPTY) { outReturns.NetConnectionStatus = outkvs[L"NetConnectionStatus"]; }
if (outkvs[L"NetEnabled"].vt != VT_EMPTY) { outReturns.NetEnabled = outkvs[L"NetEnabled"]; }
if (outkvs[L"NetworkAddresses"].vt != VT_EMPTY) { outReturns.NetworkAddresses = outkvs[L"NetworkAddresses"]; }
if (outkvs[L"PNPDeviceID"].vt != VT_EMPTY) { outReturns.PNPDeviceID = outkvs[L"PNPDeviceID"]; }
if (outkvs[L"PermanentAddress"].vt != VT_EMPTY) { outReturns.PermanentAddress = outkvs[L"PermanentAddress"]; }
if (outkvs[L"PhysicalAdapter"].vt != VT_EMPTY) { outReturns.PhysicalAdapter = outkvs[L"PhysicalAdapter"]; }
if (outkvs[L"PowerManagementCapabilities"].vt != VT_EMPTY) { outReturns.PowerManagementCapabilities = outkvs[L"PowerManagementCapabilities"]; }
if (outkvs[L"PowerManagementSupported"].vt != VT_EMPTY) { outReturns.PowerManagementSupported = outkvs[L"PowerManagementSupported"]; }
if (outkvs[L"ProductName"].vt != VT_EMPTY) { outReturns.ProductName = outkvs[L"ProductName"]; }
if (outkvs[L"ServiceName"].vt != VT_EMPTY) { outReturns.ServiceName = outkvs[L"ServiceName"]; }
if (outkvs[L"Speed"].vt != VT_EMPTY) { outReturns.Speed = outkvs[L"Speed"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"StatusInfo"].vt != VT_EMPTY) { outReturns.StatusInfo = outkvs[L"StatusInfo"]; }
if (outkvs[L"SystemCreationClassName"].vt != VT_EMPTY) { outReturns.SystemCreationClassName = outkvs[L"SystemCreationClassName"]; }
if (outkvs[L"SystemName"].vt != VT_EMPTY) { outReturns.SystemName = outkvs[L"SystemName"]; }
if (outkvs[L"TimeOfLastReset"].vt != VT_EMPTY) { outReturns.TimeOfLastReset = outkvs[L"TimeOfLastReset"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_Win32_NetworkAdapter_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AdapterType"].vt != VT_EMPTY) { outReturns.AdapterType = outkvs[L"AdapterType"]; }
if (outkvs[L"AdapterTypeId"].vt != VT_EMPTY) { outReturns.AdapterTypeId = outkvs[L"AdapterTypeId"]; }
if (outkvs[L"AutoSense"].vt != VT_EMPTY) { outReturns.AutoSense = outkvs[L"AutoSense"]; }
if (outkvs[L"Availability"].vt != VT_EMPTY) { outReturns.Availability = outkvs[L"Availability"]; }
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"ConfigManagerErrorCode"].vt != VT_EMPTY) { outReturns.ConfigManagerErrorCode = outkvs[L"ConfigManagerErrorCode"]; }
if (outkvs[L"ConfigManagerUserConfig"].vt != VT_EMPTY) { outReturns.ConfigManagerUserConfig = outkvs[L"ConfigManagerUserConfig"]; }
if (outkvs[L"CreationClassName"].vt != VT_EMPTY) { outReturns.CreationClassName = outkvs[L"CreationClassName"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DeviceID"].vt != VT_EMPTY) { outReturns.DeviceID = outkvs[L"DeviceID"]; }
if (outkvs[L"ErrorCleared"].vt != VT_EMPTY) { outReturns.ErrorCleared = outkvs[L"ErrorCleared"]; }
if (outkvs[L"ErrorDescription"].vt != VT_EMPTY) { outReturns.ErrorDescription = outkvs[L"ErrorDescription"]; }
if (outkvs[L"GUID"].vt != VT_EMPTY) { outReturns.GUID = outkvs[L"GUID"]; }
if (outkvs[L"Index"].vt != VT_EMPTY) { outReturns.Index = outkvs[L"Index"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"Installed"].vt != VT_EMPTY) { outReturns.Installed = outkvs[L"Installed"]; }
if (outkvs[L"InterfaceIndex"].vt != VT_EMPTY) { outReturns.InterfaceIndex = outkvs[L"InterfaceIndex"]; }
if (outkvs[L"LastErrorCode"].vt != VT_EMPTY) { outReturns.LastErrorCode = outkvs[L"LastErrorCode"]; }
if (outkvs[L"MACAddress"].vt != VT_EMPTY) { outReturns.MACAddress = outkvs[L"MACAddress"]; }
if (outkvs[L"Manufacturer"].vt != VT_EMPTY) { outReturns.Manufacturer = outkvs[L"Manufacturer"]; }
if (outkvs[L"MaxNumberControlled"].vt != VT_EMPTY) { outReturns.MaxNumberControlled = outkvs[L"MaxNumberControlled"]; }
if (outkvs[L"MaxSpeed"].vt != VT_EMPTY) { outReturns.MaxSpeed = outkvs[L"MaxSpeed"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"NetConnectionID"].vt != VT_EMPTY) { outReturns.NetConnectionID = outkvs[L"NetConnectionID"]; }
if (outkvs[L"NetConnectionStatus"].vt != VT_EMPTY) { outReturns.NetConnectionStatus = outkvs[L"NetConnectionStatus"]; }
if (outkvs[L"NetEnabled"].vt != VT_EMPTY) { outReturns.NetEnabled = outkvs[L"NetEnabled"]; }
if (outkvs[L"NetworkAddresses"].vt != VT_EMPTY) { outReturns.NetworkAddresses = outkvs[L"NetworkAddresses"]; }
if (outkvs[L"PNPDeviceID"].vt != VT_EMPTY) { outReturns.PNPDeviceID = outkvs[L"PNPDeviceID"]; }
if (outkvs[L"PermanentAddress"].vt != VT_EMPTY) { outReturns.PermanentAddress = outkvs[L"PermanentAddress"]; }
if (outkvs[L"PhysicalAdapter"].vt != VT_EMPTY) { outReturns.PhysicalAdapter = outkvs[L"PhysicalAdapter"]; }
if (outkvs[L"PowerManagementCapabilities"].vt != VT_EMPTY) { outReturns.PowerManagementCapabilities = outkvs[L"PowerManagementCapabilities"]; }
if (outkvs[L"PowerManagementSupported"].vt != VT_EMPTY) { outReturns.PowerManagementSupported = outkvs[L"PowerManagementSupported"]; }
if (outkvs[L"ProductName"].vt != VT_EMPTY) { outReturns.ProductName = outkvs[L"ProductName"]; }
if (outkvs[L"ServiceName"].vt != VT_EMPTY) { outReturns.ServiceName = outkvs[L"ServiceName"]; }
if (outkvs[L"Speed"].vt != VT_EMPTY) { outReturns.Speed = outkvs[L"Speed"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"StatusInfo"].vt != VT_EMPTY) { outReturns.StatusInfo = outkvs[L"StatusInfo"]; }
if (outkvs[L"SystemCreationClassName"].vt != VT_EMPTY) { outReturns.SystemCreationClassName = outkvs[L"SystemCreationClassName"]; }
if (outkvs[L"SystemName"].vt != VT_EMPTY) { outReturns.SystemName = outkvs[L"SystemName"]; }
if (outkvs[L"TimeOfLastReset"].vt != VT_EMPTY) { outReturns.TimeOfLastReset = outkvs[L"TimeOfLastReset"]; }
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

HRESULT NewObj(SML_Win32_NetworkAdapter_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.AdapterType.vt != VT_EMPTY) { inkvs.insert({ L"AdapterType", inParams.AdapterType }); }
if (inParams.AdapterTypeId.vt != VT_EMPTY) { inkvs.insert({ L"AdapterTypeId", inParams.AdapterTypeId }); }
if (inParams.AutoSense.vt != VT_EMPTY) { inkvs.insert({ L"AutoSense", inParams.AutoSense }); }
if (inParams.Availability.vt != VT_EMPTY) { inkvs.insert({ L"Availability", inParams.Availability }); }
if (inParams.Caption.vt != VT_EMPTY) { inkvs.insert({ L"Caption", inParams.Caption }); }
if (inParams.ConfigManagerErrorCode.vt != VT_EMPTY) { inkvs.insert({ L"ConfigManagerErrorCode", inParams.ConfigManagerErrorCode }); }
if (inParams.ConfigManagerUserConfig.vt != VT_EMPTY) { inkvs.insert({ L"ConfigManagerUserConfig", inParams.ConfigManagerUserConfig }); }
if (inParams.CreationClassName.vt != VT_EMPTY) { inkvs.insert({ L"CreationClassName", inParams.CreationClassName }); }
if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
if (inParams.DeviceID.vt != VT_EMPTY) { inkvs.insert({ L"DeviceID", inParams.DeviceID }); }
if (inParams.ErrorCleared.vt != VT_EMPTY) { inkvs.insert({ L"ErrorCleared", inParams.ErrorCleared }); }
if (inParams.ErrorDescription.vt != VT_EMPTY) { inkvs.insert({ L"ErrorDescription", inParams.ErrorDescription }); }
if (inParams.GUID.vt != VT_EMPTY) { inkvs.insert({ L"GUID", inParams.GUID }); }
if (inParams.Index.vt != VT_EMPTY) { inkvs.insert({ L"Index", inParams.Index }); }
if (inParams.InstallDate.vt != VT_EMPTY) { inkvs.insert({ L"InstallDate", inParams.InstallDate }); }
if (inParams.Installed.vt != VT_EMPTY) { inkvs.insert({ L"Installed", inParams.Installed }); }
if (inParams.InterfaceIndex.vt != VT_EMPTY) { inkvs.insert({ L"InterfaceIndex", inParams.InterfaceIndex }); }
if (inParams.LastErrorCode.vt != VT_EMPTY) { inkvs.insert({ L"LastErrorCode", inParams.LastErrorCode }); }
if (inParams.MACAddress.vt != VT_EMPTY) { inkvs.insert({ L"MACAddress", inParams.MACAddress }); }
if (inParams.Manufacturer.vt != VT_EMPTY) { inkvs.insert({ L"Manufacturer", inParams.Manufacturer }); }
if (inParams.MaxNumberControlled.vt != VT_EMPTY) { inkvs.insert({ L"MaxNumberControlled", inParams.MaxNumberControlled }); }
if (inParams.MaxSpeed.vt != VT_EMPTY) { inkvs.insert({ L"MaxSpeed", inParams.MaxSpeed }); }
if (inParams.Name.vt != VT_EMPTY) { inkvs.insert({ L"Name", inParams.Name }); }
if (inParams.NetConnectionID.vt != VT_EMPTY) { inkvs.insert({ L"NetConnectionID", inParams.NetConnectionID }); }
if (inParams.NetConnectionStatus.vt != VT_EMPTY) { inkvs.insert({ L"NetConnectionStatus", inParams.NetConnectionStatus }); }
if (inParams.NetEnabled.vt != VT_EMPTY) { inkvs.insert({ L"NetEnabled", inParams.NetEnabled }); }
if (inParams.NetworkAddresses.vt != VT_EMPTY) { inkvs.insert({ L"NetworkAddresses", inParams.NetworkAddresses }); }
if (inParams.PNPDeviceID.vt != VT_EMPTY) { inkvs.insert({ L"PNPDeviceID", inParams.PNPDeviceID }); }
if (inParams.PermanentAddress.vt != VT_EMPTY) { inkvs.insert({ L"PermanentAddress", inParams.PermanentAddress }); }
if (inParams.PhysicalAdapter.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalAdapter", inParams.PhysicalAdapter }); }
if (inParams.PowerManagementCapabilities.vt != VT_EMPTY) { inkvs.insert({ L"PowerManagementCapabilities", inParams.PowerManagementCapabilities }); }
if (inParams.PowerManagementSupported.vt != VT_EMPTY) { inkvs.insert({ L"PowerManagementSupported", inParams.PowerManagementSupported }); }
if (inParams.ProductName.vt != VT_EMPTY) { inkvs.insert({ L"ProductName", inParams.ProductName }); }
if (inParams.ServiceName.vt != VT_EMPTY) { inkvs.insert({ L"ServiceName", inParams.ServiceName }); }
if (inParams.Speed.vt != VT_EMPTY) { inkvs.insert({ L"Speed", inParams.Speed }); }
if (inParams.Status.vt != VT_EMPTY) { inkvs.insert({ L"Status", inParams.Status }); }
if (inParams.StatusInfo.vt != VT_EMPTY) { inkvs.insert({ L"StatusInfo", inParams.StatusInfo }); }
if (inParams.SystemCreationClassName.vt != VT_EMPTY) { inkvs.insert({ L"SystemCreationClassName", inParams.SystemCreationClassName }); }
if (inParams.SystemName.vt != VT_EMPTY) { inkvs.insert({ L"SystemName", inParams.SystemName }); }
if (inParams.TimeOfLastReset.vt != VT_EMPTY) { inkvs.insert({ L"TimeOfLastReset", inParams.TimeOfLastReset }); }
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




////////////////////////// Method: SetPowerState ///////////////////////////
struct SetPowerState_InParams
{
CComVariant PowerState;
CComVariant Time;
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
struct SetPowerState_OutResturns
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
HRESULT SetPowerState(IWbemClassObject* obj, SetPowerState_InParams& inParams, SetPowerState_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.PowerState.vt != VT_EMPTY) { inkvs.insert({ L"PowerState", inParams.PowerState }); }
if (inParams.Time.vt != VT_EMPTY) { inkvs.insert({ L"Time", inParams.Time }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"SetPowerState", inkvs, outkvs, &spout);

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


////////////////////////// Method: Reset ///////////////////////////
struct Reset_InParams
{
} ;
struct Reset_OutResturns
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
HRESULT Reset(IWbemClassObject* obj, Reset_InParams& inParams, Reset_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Reset", inkvs, outkvs, &spout);

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


////////////////////////// Method: Enable ///////////////////////////
struct Enable_InParams
{
} ;
struct Enable_OutResturns
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
HRESULT Enable(IWbemClassObject* obj, Enable_InParams& inParams, Enable_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Enable", inkvs, outkvs, &spout);

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


////////////////////////// Method: Disable ///////////////////////////
struct Disable_InParams
{
} ;
struct Disable_OutResturns
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
HRESULT Disable(IWbemClassObject* obj, Disable_InParams& inParams, Disable_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Disable", inkvs, outkvs, &spout);

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
