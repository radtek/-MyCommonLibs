class SML_Win32_DiskDrive 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"Win32_DiskDrive" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: Win32_DiskDrive //////////////////////////
struct SML_Win32_DiskDrive_Props
{
CComVariant Availability;
CComVariant BytesPerSector;
CComVariant Capabilities;
CComVariant CapabilityDescriptions;
CComVariant Caption;
CComVariant CompressionMethod;
CComVariant ConfigManagerErrorCode;
CComVariant ConfigManagerUserConfig;
CComVariant CreationClassName;
CComVariant DefaultBlockSize;
CComVariant Description;
CComVariant DeviceID;
CComVariant ErrorCleared;
CComVariant ErrorDescription;
CComVariant ErrorMethodology;
CComVariant FirmwareRevision;
CComVariant Index;
CComVariant InstallDate;
CComVariant InterfaceType;
CComVariant LastErrorCode;
CComVariant Manufacturer;
CComVariant MaxBlockSize;
CComVariant MaxMediaSize;
CComVariant MediaLoaded;
CComVariant MediaType;
CComVariant MinBlockSize;
CComVariant Model;
CComVariant Name;
CComVariant NeedsCleaning;
CComVariant NumberOfMediaSupported;
CComVariant PNPDeviceID;
CComVariant Partitions;
CComVariant PowerManagementCapabilities;
CComVariant PowerManagementSupported;
CComVariant SCSIBus;
CComVariant SCSILogicalUnit;
CComVariant SCSIPort;
CComVariant SCSITargetId;
CComVariant SectorsPerTrack;
CComVariant SerialNumber;
CComVariant Signature;
CComVariant Size;
CComVariant Status;
CComVariant StatusInfo;
CComVariant SystemCreationClassName;
CComVariant SystemName;
CComVariant TotalCylinders;
CComVariant TotalHeads;
CComVariant TotalSectors;
CComVariant TotalTracks;
CComVariant TracksPerCylinder;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_Win32_DiskDrive_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"Availability"].vt != VT_EMPTY) { outReturns.Availability = outkvs[L"Availability"]; }
if (outkvs[L"BytesPerSector"].vt != VT_EMPTY) { outReturns.BytesPerSector = outkvs[L"BytesPerSector"]; }
if (outkvs[L"Capabilities"].vt != VT_EMPTY) { outReturns.Capabilities = outkvs[L"Capabilities"]; }
if (outkvs[L"CapabilityDescriptions"].vt != VT_EMPTY) { outReturns.CapabilityDescriptions = outkvs[L"CapabilityDescriptions"]; }
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"CompressionMethod"].vt != VT_EMPTY) { outReturns.CompressionMethod = outkvs[L"CompressionMethod"]; }
if (outkvs[L"ConfigManagerErrorCode"].vt != VT_EMPTY) { outReturns.ConfigManagerErrorCode = outkvs[L"ConfigManagerErrorCode"]; }
if (outkvs[L"ConfigManagerUserConfig"].vt != VT_EMPTY) { outReturns.ConfigManagerUserConfig = outkvs[L"ConfigManagerUserConfig"]; }
if (outkvs[L"CreationClassName"].vt != VT_EMPTY) { outReturns.CreationClassName = outkvs[L"CreationClassName"]; }
if (outkvs[L"DefaultBlockSize"].vt != VT_EMPTY) { outReturns.DefaultBlockSize = outkvs[L"DefaultBlockSize"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DeviceID"].vt != VT_EMPTY) { outReturns.DeviceID = outkvs[L"DeviceID"]; }
if (outkvs[L"ErrorCleared"].vt != VT_EMPTY) { outReturns.ErrorCleared = outkvs[L"ErrorCleared"]; }
if (outkvs[L"ErrorDescription"].vt != VT_EMPTY) { outReturns.ErrorDescription = outkvs[L"ErrorDescription"]; }
if (outkvs[L"ErrorMethodology"].vt != VT_EMPTY) { outReturns.ErrorMethodology = outkvs[L"ErrorMethodology"]; }
if (outkvs[L"FirmwareRevision"].vt != VT_EMPTY) { outReturns.FirmwareRevision = outkvs[L"FirmwareRevision"]; }
if (outkvs[L"Index"].vt != VT_EMPTY) { outReturns.Index = outkvs[L"Index"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"InterfaceType"].vt != VT_EMPTY) { outReturns.InterfaceType = outkvs[L"InterfaceType"]; }
if (outkvs[L"LastErrorCode"].vt != VT_EMPTY) { outReturns.LastErrorCode = outkvs[L"LastErrorCode"]; }
if (outkvs[L"Manufacturer"].vt != VT_EMPTY) { outReturns.Manufacturer = outkvs[L"Manufacturer"]; }
if (outkvs[L"MaxBlockSize"].vt != VT_EMPTY) { outReturns.MaxBlockSize = outkvs[L"MaxBlockSize"]; }
if (outkvs[L"MaxMediaSize"].vt != VT_EMPTY) { outReturns.MaxMediaSize = outkvs[L"MaxMediaSize"]; }
if (outkvs[L"MediaLoaded"].vt != VT_EMPTY) { outReturns.MediaLoaded = outkvs[L"MediaLoaded"]; }
if (outkvs[L"MediaType"].vt != VT_EMPTY) { outReturns.MediaType = outkvs[L"MediaType"]; }
if (outkvs[L"MinBlockSize"].vt != VT_EMPTY) { outReturns.MinBlockSize = outkvs[L"MinBlockSize"]; }
if (outkvs[L"Model"].vt != VT_EMPTY) { outReturns.Model = outkvs[L"Model"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"NeedsCleaning"].vt != VT_EMPTY) { outReturns.NeedsCleaning = outkvs[L"NeedsCleaning"]; }
if (outkvs[L"NumberOfMediaSupported"].vt != VT_EMPTY) { outReturns.NumberOfMediaSupported = outkvs[L"NumberOfMediaSupported"]; }
if (outkvs[L"PNPDeviceID"].vt != VT_EMPTY) { outReturns.PNPDeviceID = outkvs[L"PNPDeviceID"]; }
if (outkvs[L"Partitions"].vt != VT_EMPTY) { outReturns.Partitions = outkvs[L"Partitions"]; }
if (outkvs[L"PowerManagementCapabilities"].vt != VT_EMPTY) { outReturns.PowerManagementCapabilities = outkvs[L"PowerManagementCapabilities"]; }
if (outkvs[L"PowerManagementSupported"].vt != VT_EMPTY) { outReturns.PowerManagementSupported = outkvs[L"PowerManagementSupported"]; }
if (outkvs[L"SCSIBus"].vt != VT_EMPTY) { outReturns.SCSIBus = outkvs[L"SCSIBus"]; }
if (outkvs[L"SCSILogicalUnit"].vt != VT_EMPTY) { outReturns.SCSILogicalUnit = outkvs[L"SCSILogicalUnit"]; }
if (outkvs[L"SCSIPort"].vt != VT_EMPTY) { outReturns.SCSIPort = outkvs[L"SCSIPort"]; }
if (outkvs[L"SCSITargetId"].vt != VT_EMPTY) { outReturns.SCSITargetId = outkvs[L"SCSITargetId"]; }
if (outkvs[L"SectorsPerTrack"].vt != VT_EMPTY) { outReturns.SectorsPerTrack = outkvs[L"SectorsPerTrack"]; }
if (outkvs[L"SerialNumber"].vt != VT_EMPTY) { outReturns.SerialNumber = outkvs[L"SerialNumber"]; }
if (outkvs[L"Signature"].vt != VT_EMPTY) { outReturns.Signature = outkvs[L"Signature"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"StatusInfo"].vt != VT_EMPTY) { outReturns.StatusInfo = outkvs[L"StatusInfo"]; }
if (outkvs[L"SystemCreationClassName"].vt != VT_EMPTY) { outReturns.SystemCreationClassName = outkvs[L"SystemCreationClassName"]; }
if (outkvs[L"SystemName"].vt != VT_EMPTY) { outReturns.SystemName = outkvs[L"SystemName"]; }
if (outkvs[L"TotalCylinders"].vt != VT_EMPTY) { outReturns.TotalCylinders = outkvs[L"TotalCylinders"]; }
if (outkvs[L"TotalHeads"].vt != VT_EMPTY) { outReturns.TotalHeads = outkvs[L"TotalHeads"]; }
if (outkvs[L"TotalSectors"].vt != VT_EMPTY) { outReturns.TotalSectors = outkvs[L"TotalSectors"]; }
if (outkvs[L"TotalTracks"].vt != VT_EMPTY) { outReturns.TotalTracks = outkvs[L"TotalTracks"]; }
if (outkvs[L"TracksPerCylinder"].vt != VT_EMPTY) { outReturns.TracksPerCylinder = outkvs[L"TracksPerCylinder"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_Win32_DiskDrive_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"Availability"].vt != VT_EMPTY) { outReturns.Availability = outkvs[L"Availability"]; }
if (outkvs[L"BytesPerSector"].vt != VT_EMPTY) { outReturns.BytesPerSector = outkvs[L"BytesPerSector"]; }
if (outkvs[L"Capabilities"].vt != VT_EMPTY) { outReturns.Capabilities = outkvs[L"Capabilities"]; }
if (outkvs[L"CapabilityDescriptions"].vt != VT_EMPTY) { outReturns.CapabilityDescriptions = outkvs[L"CapabilityDescriptions"]; }
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"CompressionMethod"].vt != VT_EMPTY) { outReturns.CompressionMethod = outkvs[L"CompressionMethod"]; }
if (outkvs[L"ConfigManagerErrorCode"].vt != VT_EMPTY) { outReturns.ConfigManagerErrorCode = outkvs[L"ConfigManagerErrorCode"]; }
if (outkvs[L"ConfigManagerUserConfig"].vt != VT_EMPTY) { outReturns.ConfigManagerUserConfig = outkvs[L"ConfigManagerUserConfig"]; }
if (outkvs[L"CreationClassName"].vt != VT_EMPTY) { outReturns.CreationClassName = outkvs[L"CreationClassName"]; }
if (outkvs[L"DefaultBlockSize"].vt != VT_EMPTY) { outReturns.DefaultBlockSize = outkvs[L"DefaultBlockSize"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DeviceID"].vt != VT_EMPTY) { outReturns.DeviceID = outkvs[L"DeviceID"]; }
if (outkvs[L"ErrorCleared"].vt != VT_EMPTY) { outReturns.ErrorCleared = outkvs[L"ErrorCleared"]; }
if (outkvs[L"ErrorDescription"].vt != VT_EMPTY) { outReturns.ErrorDescription = outkvs[L"ErrorDescription"]; }
if (outkvs[L"ErrorMethodology"].vt != VT_EMPTY) { outReturns.ErrorMethodology = outkvs[L"ErrorMethodology"]; }
if (outkvs[L"FirmwareRevision"].vt != VT_EMPTY) { outReturns.FirmwareRevision = outkvs[L"FirmwareRevision"]; }
if (outkvs[L"Index"].vt != VT_EMPTY) { outReturns.Index = outkvs[L"Index"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"InterfaceType"].vt != VT_EMPTY) { outReturns.InterfaceType = outkvs[L"InterfaceType"]; }
if (outkvs[L"LastErrorCode"].vt != VT_EMPTY) { outReturns.LastErrorCode = outkvs[L"LastErrorCode"]; }
if (outkvs[L"Manufacturer"].vt != VT_EMPTY) { outReturns.Manufacturer = outkvs[L"Manufacturer"]; }
if (outkvs[L"MaxBlockSize"].vt != VT_EMPTY) { outReturns.MaxBlockSize = outkvs[L"MaxBlockSize"]; }
if (outkvs[L"MaxMediaSize"].vt != VT_EMPTY) { outReturns.MaxMediaSize = outkvs[L"MaxMediaSize"]; }
if (outkvs[L"MediaLoaded"].vt != VT_EMPTY) { outReturns.MediaLoaded = outkvs[L"MediaLoaded"]; }
if (outkvs[L"MediaType"].vt != VT_EMPTY) { outReturns.MediaType = outkvs[L"MediaType"]; }
if (outkvs[L"MinBlockSize"].vt != VT_EMPTY) { outReturns.MinBlockSize = outkvs[L"MinBlockSize"]; }
if (outkvs[L"Model"].vt != VT_EMPTY) { outReturns.Model = outkvs[L"Model"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"NeedsCleaning"].vt != VT_EMPTY) { outReturns.NeedsCleaning = outkvs[L"NeedsCleaning"]; }
if (outkvs[L"NumberOfMediaSupported"].vt != VT_EMPTY) { outReturns.NumberOfMediaSupported = outkvs[L"NumberOfMediaSupported"]; }
if (outkvs[L"PNPDeviceID"].vt != VT_EMPTY) { outReturns.PNPDeviceID = outkvs[L"PNPDeviceID"]; }
if (outkvs[L"Partitions"].vt != VT_EMPTY) { outReturns.Partitions = outkvs[L"Partitions"]; }
if (outkvs[L"PowerManagementCapabilities"].vt != VT_EMPTY) { outReturns.PowerManagementCapabilities = outkvs[L"PowerManagementCapabilities"]; }
if (outkvs[L"PowerManagementSupported"].vt != VT_EMPTY) { outReturns.PowerManagementSupported = outkvs[L"PowerManagementSupported"]; }
if (outkvs[L"SCSIBus"].vt != VT_EMPTY) { outReturns.SCSIBus = outkvs[L"SCSIBus"]; }
if (outkvs[L"SCSILogicalUnit"].vt != VT_EMPTY) { outReturns.SCSILogicalUnit = outkvs[L"SCSILogicalUnit"]; }
if (outkvs[L"SCSIPort"].vt != VT_EMPTY) { outReturns.SCSIPort = outkvs[L"SCSIPort"]; }
if (outkvs[L"SCSITargetId"].vt != VT_EMPTY) { outReturns.SCSITargetId = outkvs[L"SCSITargetId"]; }
if (outkvs[L"SectorsPerTrack"].vt != VT_EMPTY) { outReturns.SectorsPerTrack = outkvs[L"SectorsPerTrack"]; }
if (outkvs[L"SerialNumber"].vt != VT_EMPTY) { outReturns.SerialNumber = outkvs[L"SerialNumber"]; }
if (outkvs[L"Signature"].vt != VT_EMPTY) { outReturns.Signature = outkvs[L"Signature"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"StatusInfo"].vt != VT_EMPTY) { outReturns.StatusInfo = outkvs[L"StatusInfo"]; }
if (outkvs[L"SystemCreationClassName"].vt != VT_EMPTY) { outReturns.SystemCreationClassName = outkvs[L"SystemCreationClassName"]; }
if (outkvs[L"SystemName"].vt != VT_EMPTY) { outReturns.SystemName = outkvs[L"SystemName"]; }
if (outkvs[L"TotalCylinders"].vt != VT_EMPTY) { outReturns.TotalCylinders = outkvs[L"TotalCylinders"]; }
if (outkvs[L"TotalHeads"].vt != VT_EMPTY) { outReturns.TotalHeads = outkvs[L"TotalHeads"]; }
if (outkvs[L"TotalSectors"].vt != VT_EMPTY) { outReturns.TotalSectors = outkvs[L"TotalSectors"]; }
if (outkvs[L"TotalTracks"].vt != VT_EMPTY) { outReturns.TotalTracks = outkvs[L"TotalTracks"]; }
if (outkvs[L"TracksPerCylinder"].vt != VT_EMPTY) { outReturns.TracksPerCylinder = outkvs[L"TracksPerCylinder"]; }
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

HRESULT NewObj(SML_Win32_DiskDrive_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.Availability.vt != VT_EMPTY) { inkvs.insert({ L"Availability", inParams.Availability }); }
if (inParams.BytesPerSector.vt != VT_EMPTY) { inkvs.insert({ L"BytesPerSector", inParams.BytesPerSector }); }
if (inParams.Capabilities.vt != VT_EMPTY) { inkvs.insert({ L"Capabilities", inParams.Capabilities }); }
if (inParams.CapabilityDescriptions.vt != VT_EMPTY) { inkvs.insert({ L"CapabilityDescriptions", inParams.CapabilityDescriptions }); }
if (inParams.Caption.vt != VT_EMPTY) { inkvs.insert({ L"Caption", inParams.Caption }); }
if (inParams.CompressionMethod.vt != VT_EMPTY) { inkvs.insert({ L"CompressionMethod", inParams.CompressionMethod }); }
if (inParams.ConfigManagerErrorCode.vt != VT_EMPTY) { inkvs.insert({ L"ConfigManagerErrorCode", inParams.ConfigManagerErrorCode }); }
if (inParams.ConfigManagerUserConfig.vt != VT_EMPTY) { inkvs.insert({ L"ConfigManagerUserConfig", inParams.ConfigManagerUserConfig }); }
if (inParams.CreationClassName.vt != VT_EMPTY) { inkvs.insert({ L"CreationClassName", inParams.CreationClassName }); }
if (inParams.DefaultBlockSize.vt != VT_EMPTY) { inkvs.insert({ L"DefaultBlockSize", inParams.DefaultBlockSize }); }
if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
if (inParams.DeviceID.vt != VT_EMPTY) { inkvs.insert({ L"DeviceID", inParams.DeviceID }); }
if (inParams.ErrorCleared.vt != VT_EMPTY) { inkvs.insert({ L"ErrorCleared", inParams.ErrorCleared }); }
if (inParams.ErrorDescription.vt != VT_EMPTY) { inkvs.insert({ L"ErrorDescription", inParams.ErrorDescription }); }
if (inParams.ErrorMethodology.vt != VT_EMPTY) { inkvs.insert({ L"ErrorMethodology", inParams.ErrorMethodology }); }
if (inParams.FirmwareRevision.vt != VT_EMPTY) { inkvs.insert({ L"FirmwareRevision", inParams.FirmwareRevision }); }
if (inParams.Index.vt != VT_EMPTY) { inkvs.insert({ L"Index", inParams.Index }); }
if (inParams.InstallDate.vt != VT_EMPTY) { inkvs.insert({ L"InstallDate", inParams.InstallDate }); }
if (inParams.InterfaceType.vt != VT_EMPTY) { inkvs.insert({ L"InterfaceType", inParams.InterfaceType }); }
if (inParams.LastErrorCode.vt != VT_EMPTY) { inkvs.insert({ L"LastErrorCode", inParams.LastErrorCode }); }
if (inParams.Manufacturer.vt != VT_EMPTY) { inkvs.insert({ L"Manufacturer", inParams.Manufacturer }); }
if (inParams.MaxBlockSize.vt != VT_EMPTY) { inkvs.insert({ L"MaxBlockSize", inParams.MaxBlockSize }); }
if (inParams.MaxMediaSize.vt != VT_EMPTY) { inkvs.insert({ L"MaxMediaSize", inParams.MaxMediaSize }); }
if (inParams.MediaLoaded.vt != VT_EMPTY) { inkvs.insert({ L"MediaLoaded", inParams.MediaLoaded }); }
if (inParams.MediaType.vt != VT_EMPTY) { inkvs.insert({ L"MediaType", inParams.MediaType }); }
if (inParams.MinBlockSize.vt != VT_EMPTY) { inkvs.insert({ L"MinBlockSize", inParams.MinBlockSize }); }
if (inParams.Model.vt != VT_EMPTY) { inkvs.insert({ L"Model", inParams.Model }); }
if (inParams.Name.vt != VT_EMPTY) { inkvs.insert({ L"Name", inParams.Name }); }
if (inParams.NeedsCleaning.vt != VT_EMPTY) { inkvs.insert({ L"NeedsCleaning", inParams.NeedsCleaning }); }
if (inParams.NumberOfMediaSupported.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfMediaSupported", inParams.NumberOfMediaSupported }); }
if (inParams.PNPDeviceID.vt != VT_EMPTY) { inkvs.insert({ L"PNPDeviceID", inParams.PNPDeviceID }); }
if (inParams.Partitions.vt != VT_EMPTY) { inkvs.insert({ L"Partitions", inParams.Partitions }); }
if (inParams.PowerManagementCapabilities.vt != VT_EMPTY) { inkvs.insert({ L"PowerManagementCapabilities", inParams.PowerManagementCapabilities }); }
if (inParams.PowerManagementSupported.vt != VT_EMPTY) { inkvs.insert({ L"PowerManagementSupported", inParams.PowerManagementSupported }); }
if (inParams.SCSIBus.vt != VT_EMPTY) { inkvs.insert({ L"SCSIBus", inParams.SCSIBus }); }
if (inParams.SCSILogicalUnit.vt != VT_EMPTY) { inkvs.insert({ L"SCSILogicalUnit", inParams.SCSILogicalUnit }); }
if (inParams.SCSIPort.vt != VT_EMPTY) { inkvs.insert({ L"SCSIPort", inParams.SCSIPort }); }
if (inParams.SCSITargetId.vt != VT_EMPTY) { inkvs.insert({ L"SCSITargetId", inParams.SCSITargetId }); }
if (inParams.SectorsPerTrack.vt != VT_EMPTY) { inkvs.insert({ L"SectorsPerTrack", inParams.SectorsPerTrack }); }
if (inParams.SerialNumber.vt != VT_EMPTY) { inkvs.insert({ L"SerialNumber", inParams.SerialNumber }); }
if (inParams.Signature.vt != VT_EMPTY) { inkvs.insert({ L"Signature", inParams.Signature }); }
if (inParams.Size.vt != VT_EMPTY) { inkvs.insert({ L"Size", inParams.Size }); }
if (inParams.Status.vt != VT_EMPTY) { inkvs.insert({ L"Status", inParams.Status }); }
if (inParams.StatusInfo.vt != VT_EMPTY) { inkvs.insert({ L"StatusInfo", inParams.StatusInfo }); }
if (inParams.SystemCreationClassName.vt != VT_EMPTY) { inkvs.insert({ L"SystemCreationClassName", inParams.SystemCreationClassName }); }
if (inParams.SystemName.vt != VT_EMPTY) { inkvs.insert({ L"SystemName", inParams.SystemName }); }
if (inParams.TotalCylinders.vt != VT_EMPTY) { inkvs.insert({ L"TotalCylinders", inParams.TotalCylinders }); }
if (inParams.TotalHeads.vt != VT_EMPTY) { inkvs.insert({ L"TotalHeads", inParams.TotalHeads }); }
if (inParams.TotalSectors.vt != VT_EMPTY) { inkvs.insert({ L"TotalSectors", inParams.TotalSectors }); }
if (inParams.TotalTracks.vt != VT_EMPTY) { inkvs.insert({ L"TotalTracks", inParams.TotalTracks }); }
if (inParams.TracksPerCylinder.vt != VT_EMPTY) { inkvs.insert({ L"TracksPerCylinder", inParams.TracksPerCylinder }); }
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


};
