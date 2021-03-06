class SML_MSFT_Disk 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"MSFT_Disk" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: MSFT_Disk //////////////////////////
struct SML_MSFT_Disk_Props
{
CComVariant AdapterSerialNumber;
CComVariant AllocatedSize;
CComVariant BootFromDisk;
CComVariant BusType;
CComVariant FirmwareVersion;
CComVariant FriendlyName;
CComVariant Guid;
CComVariant HealthStatus;
CComVariant IsBoot;
CComVariant IsClustered;
CComVariant IsHighlyAvailable;
CComVariant IsOffline;
CComVariant IsReadOnly;
CComVariant IsScaleOut;
CComVariant IsSystem;
CComVariant LargestFreeExtent;
CComVariant Location;
CComVariant LogicalSectorSize;
CComVariant Manufacturer;
CComVariant Model;
CComVariant Number;
CComVariant NumberOfPartitions;
CComVariant ObjectId;
CComVariant OfflineReason;
CComVariant OperationalStatus;
CComVariant PartitionStyle;
CComVariant PassThroughClass;
CComVariant PassThroughIds;
CComVariant PassThroughNamespace;
CComVariant PassThroughServer;
CComVariant Path;
CComVariant PhysicalSectorSize;
CComVariant ProvisioningType;
CComVariant SerialNumber;
CComVariant Signature;
CComVariant Size;
CComVariant UniqueId;
CComVariant UniqueIdFormat;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_MSFT_Disk_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AdapterSerialNumber"].vt != VT_EMPTY) { outReturns.AdapterSerialNumber = outkvs[L"AdapterSerialNumber"]; }
if (outkvs[L"AllocatedSize"].vt != VT_EMPTY) { outReturns.AllocatedSize = outkvs[L"AllocatedSize"]; }
if (outkvs[L"BootFromDisk"].vt != VT_EMPTY) { outReturns.BootFromDisk = outkvs[L"BootFromDisk"]; }
if (outkvs[L"BusType"].vt != VT_EMPTY) { outReturns.BusType = outkvs[L"BusType"]; }
if (outkvs[L"FirmwareVersion"].vt != VT_EMPTY) { outReturns.FirmwareVersion = outkvs[L"FirmwareVersion"]; }
if (outkvs[L"FriendlyName"].vt != VT_EMPTY) { outReturns.FriendlyName = outkvs[L"FriendlyName"]; }
if (outkvs[L"Guid"].vt != VT_EMPTY) { outReturns.Guid = outkvs[L"Guid"]; }
if (outkvs[L"HealthStatus"].vt != VT_EMPTY) { outReturns.HealthStatus = outkvs[L"HealthStatus"]; }
if (outkvs[L"IsBoot"].vt != VT_EMPTY) { outReturns.IsBoot = outkvs[L"IsBoot"]; }
if (outkvs[L"IsClustered"].vt != VT_EMPTY) { outReturns.IsClustered = outkvs[L"IsClustered"]; }
if (outkvs[L"IsHighlyAvailable"].vt != VT_EMPTY) { outReturns.IsHighlyAvailable = outkvs[L"IsHighlyAvailable"]; }
if (outkvs[L"IsOffline"].vt != VT_EMPTY) { outReturns.IsOffline = outkvs[L"IsOffline"]; }
if (outkvs[L"IsReadOnly"].vt != VT_EMPTY) { outReturns.IsReadOnly = outkvs[L"IsReadOnly"]; }
if (outkvs[L"IsScaleOut"].vt != VT_EMPTY) { outReturns.IsScaleOut = outkvs[L"IsScaleOut"]; }
if (outkvs[L"IsSystem"].vt != VT_EMPTY) { outReturns.IsSystem = outkvs[L"IsSystem"]; }
if (outkvs[L"LargestFreeExtent"].vt != VT_EMPTY) { outReturns.LargestFreeExtent = outkvs[L"LargestFreeExtent"]; }
if (outkvs[L"Location"].vt != VT_EMPTY) { outReturns.Location = outkvs[L"Location"]; }
if (outkvs[L"LogicalSectorSize"].vt != VT_EMPTY) { outReturns.LogicalSectorSize = outkvs[L"LogicalSectorSize"]; }
if (outkvs[L"Manufacturer"].vt != VT_EMPTY) { outReturns.Manufacturer = outkvs[L"Manufacturer"]; }
if (outkvs[L"Model"].vt != VT_EMPTY) { outReturns.Model = outkvs[L"Model"]; }
if (outkvs[L"Number"].vt != VT_EMPTY) { outReturns.Number = outkvs[L"Number"]; }
if (outkvs[L"NumberOfPartitions"].vt != VT_EMPTY) { outReturns.NumberOfPartitions = outkvs[L"NumberOfPartitions"]; }
if (outkvs[L"ObjectId"].vt != VT_EMPTY) { outReturns.ObjectId = outkvs[L"ObjectId"]; }
if (outkvs[L"OfflineReason"].vt != VT_EMPTY) { outReturns.OfflineReason = outkvs[L"OfflineReason"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"PartitionStyle"].vt != VT_EMPTY) { outReturns.PartitionStyle = outkvs[L"PartitionStyle"]; }
if (outkvs[L"PassThroughClass"].vt != VT_EMPTY) { outReturns.PassThroughClass = outkvs[L"PassThroughClass"]; }
if (outkvs[L"PassThroughIds"].vt != VT_EMPTY) { outReturns.PassThroughIds = outkvs[L"PassThroughIds"]; }
if (outkvs[L"PassThroughNamespace"].vt != VT_EMPTY) { outReturns.PassThroughNamespace = outkvs[L"PassThroughNamespace"]; }
if (outkvs[L"PassThroughServer"].vt != VT_EMPTY) { outReturns.PassThroughServer = outkvs[L"PassThroughServer"]; }
if (outkvs[L"Path"].vt != VT_EMPTY) { outReturns.Path = outkvs[L"Path"]; }
if (outkvs[L"PhysicalSectorSize"].vt != VT_EMPTY) { outReturns.PhysicalSectorSize = outkvs[L"PhysicalSectorSize"]; }
if (outkvs[L"ProvisioningType"].vt != VT_EMPTY) { outReturns.ProvisioningType = outkvs[L"ProvisioningType"]; }
if (outkvs[L"SerialNumber"].vt != VT_EMPTY) { outReturns.SerialNumber = outkvs[L"SerialNumber"]; }
if (outkvs[L"Signature"].vt != VT_EMPTY) { outReturns.Signature = outkvs[L"Signature"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"UniqueId"].vt != VT_EMPTY) { outReturns.UniqueId = outkvs[L"UniqueId"]; }
if (outkvs[L"UniqueIdFormat"].vt != VT_EMPTY) { outReturns.UniqueIdFormat = outkvs[L"UniqueIdFormat"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_MSFT_Disk_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AdapterSerialNumber"].vt != VT_EMPTY) { outReturns.AdapterSerialNumber = outkvs[L"AdapterSerialNumber"]; }
if (outkvs[L"AllocatedSize"].vt != VT_EMPTY) { outReturns.AllocatedSize = outkvs[L"AllocatedSize"]; }
if (outkvs[L"BootFromDisk"].vt != VT_EMPTY) { outReturns.BootFromDisk = outkvs[L"BootFromDisk"]; }
if (outkvs[L"BusType"].vt != VT_EMPTY) { outReturns.BusType = outkvs[L"BusType"]; }
if (outkvs[L"FirmwareVersion"].vt != VT_EMPTY) { outReturns.FirmwareVersion = outkvs[L"FirmwareVersion"]; }
if (outkvs[L"FriendlyName"].vt != VT_EMPTY) { outReturns.FriendlyName = outkvs[L"FriendlyName"]; }
if (outkvs[L"Guid"].vt != VT_EMPTY) { outReturns.Guid = outkvs[L"Guid"]; }
if (outkvs[L"HealthStatus"].vt != VT_EMPTY) { outReturns.HealthStatus = outkvs[L"HealthStatus"]; }
if (outkvs[L"IsBoot"].vt != VT_EMPTY) { outReturns.IsBoot = outkvs[L"IsBoot"]; }
if (outkvs[L"IsClustered"].vt != VT_EMPTY) { outReturns.IsClustered = outkvs[L"IsClustered"]; }
if (outkvs[L"IsHighlyAvailable"].vt != VT_EMPTY) { outReturns.IsHighlyAvailable = outkvs[L"IsHighlyAvailable"]; }
if (outkvs[L"IsOffline"].vt != VT_EMPTY) { outReturns.IsOffline = outkvs[L"IsOffline"]; }
if (outkvs[L"IsReadOnly"].vt != VT_EMPTY) { outReturns.IsReadOnly = outkvs[L"IsReadOnly"]; }
if (outkvs[L"IsScaleOut"].vt != VT_EMPTY) { outReturns.IsScaleOut = outkvs[L"IsScaleOut"]; }
if (outkvs[L"IsSystem"].vt != VT_EMPTY) { outReturns.IsSystem = outkvs[L"IsSystem"]; }
if (outkvs[L"LargestFreeExtent"].vt != VT_EMPTY) { outReturns.LargestFreeExtent = outkvs[L"LargestFreeExtent"]; }
if (outkvs[L"Location"].vt != VT_EMPTY) { outReturns.Location = outkvs[L"Location"]; }
if (outkvs[L"LogicalSectorSize"].vt != VT_EMPTY) { outReturns.LogicalSectorSize = outkvs[L"LogicalSectorSize"]; }
if (outkvs[L"Manufacturer"].vt != VT_EMPTY) { outReturns.Manufacturer = outkvs[L"Manufacturer"]; }
if (outkvs[L"Model"].vt != VT_EMPTY) { outReturns.Model = outkvs[L"Model"]; }
if (outkvs[L"Number"].vt != VT_EMPTY) { outReturns.Number = outkvs[L"Number"]; }
if (outkvs[L"NumberOfPartitions"].vt != VT_EMPTY) { outReturns.NumberOfPartitions = outkvs[L"NumberOfPartitions"]; }
if (outkvs[L"ObjectId"].vt != VT_EMPTY) { outReturns.ObjectId = outkvs[L"ObjectId"]; }
if (outkvs[L"OfflineReason"].vt != VT_EMPTY) { outReturns.OfflineReason = outkvs[L"OfflineReason"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"PartitionStyle"].vt != VT_EMPTY) { outReturns.PartitionStyle = outkvs[L"PartitionStyle"]; }
if (outkvs[L"PassThroughClass"].vt != VT_EMPTY) { outReturns.PassThroughClass = outkvs[L"PassThroughClass"]; }
if (outkvs[L"PassThroughIds"].vt != VT_EMPTY) { outReturns.PassThroughIds = outkvs[L"PassThroughIds"]; }
if (outkvs[L"PassThroughNamespace"].vt != VT_EMPTY) { outReturns.PassThroughNamespace = outkvs[L"PassThroughNamespace"]; }
if (outkvs[L"PassThroughServer"].vt != VT_EMPTY) { outReturns.PassThroughServer = outkvs[L"PassThroughServer"]; }
if (outkvs[L"Path"].vt != VT_EMPTY) { outReturns.Path = outkvs[L"Path"]; }
if (outkvs[L"PhysicalSectorSize"].vt != VT_EMPTY) { outReturns.PhysicalSectorSize = outkvs[L"PhysicalSectorSize"]; }
if (outkvs[L"ProvisioningType"].vt != VT_EMPTY) { outReturns.ProvisioningType = outkvs[L"ProvisioningType"]; }
if (outkvs[L"SerialNumber"].vt != VT_EMPTY) { outReturns.SerialNumber = outkvs[L"SerialNumber"]; }
if (outkvs[L"Signature"].vt != VT_EMPTY) { outReturns.Signature = outkvs[L"Signature"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"UniqueId"].vt != VT_EMPTY) { outReturns.UniqueId = outkvs[L"UniqueId"]; }
if (outkvs[L"UniqueIdFormat"].vt != VT_EMPTY) { outReturns.UniqueIdFormat = outkvs[L"UniqueIdFormat"]; }
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

HRESULT NewObj(SML_MSFT_Disk_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.AdapterSerialNumber.vt != VT_EMPTY) { inkvs.insert({ L"AdapterSerialNumber", inParams.AdapterSerialNumber }); }
if (inParams.AllocatedSize.vt != VT_EMPTY) { inkvs.insert({ L"AllocatedSize", inParams.AllocatedSize }); }
if (inParams.BootFromDisk.vt != VT_EMPTY) { inkvs.insert({ L"BootFromDisk", inParams.BootFromDisk }); }
if (inParams.BusType.vt != VT_EMPTY) { inkvs.insert({ L"BusType", inParams.BusType }); }
if (inParams.FirmwareVersion.vt != VT_EMPTY) { inkvs.insert({ L"FirmwareVersion", inParams.FirmwareVersion }); }
if (inParams.FriendlyName.vt != VT_EMPTY) { inkvs.insert({ L"FriendlyName", inParams.FriendlyName }); }
if (inParams.Guid.vt != VT_EMPTY) { inkvs.insert({ L"Guid", inParams.Guid }); }
if (inParams.HealthStatus.vt != VT_EMPTY) { inkvs.insert({ L"HealthStatus", inParams.HealthStatus }); }
if (inParams.IsBoot.vt != VT_EMPTY) { inkvs.insert({ L"IsBoot", inParams.IsBoot }); }
if (inParams.IsClustered.vt != VT_EMPTY) { inkvs.insert({ L"IsClustered", inParams.IsClustered }); }
if (inParams.IsHighlyAvailable.vt != VT_EMPTY) { inkvs.insert({ L"IsHighlyAvailable", inParams.IsHighlyAvailable }); }
if (inParams.IsOffline.vt != VT_EMPTY) { inkvs.insert({ L"IsOffline", inParams.IsOffline }); }
if (inParams.IsReadOnly.vt != VT_EMPTY) { inkvs.insert({ L"IsReadOnly", inParams.IsReadOnly }); }
if (inParams.IsScaleOut.vt != VT_EMPTY) { inkvs.insert({ L"IsScaleOut", inParams.IsScaleOut }); }
if (inParams.IsSystem.vt != VT_EMPTY) { inkvs.insert({ L"IsSystem", inParams.IsSystem }); }
if (inParams.LargestFreeExtent.vt != VT_EMPTY) { inkvs.insert({ L"LargestFreeExtent", inParams.LargestFreeExtent }); }
if (inParams.Location.vt != VT_EMPTY) { inkvs.insert({ L"Location", inParams.Location }); }
if (inParams.LogicalSectorSize.vt != VT_EMPTY) { inkvs.insert({ L"LogicalSectorSize", inParams.LogicalSectorSize }); }
if (inParams.Manufacturer.vt != VT_EMPTY) { inkvs.insert({ L"Manufacturer", inParams.Manufacturer }); }
if (inParams.Model.vt != VT_EMPTY) { inkvs.insert({ L"Model", inParams.Model }); }
if (inParams.Number.vt != VT_EMPTY) { inkvs.insert({ L"Number", inParams.Number }); }
if (inParams.NumberOfPartitions.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfPartitions", inParams.NumberOfPartitions }); }
if (inParams.ObjectId.vt != VT_EMPTY) { inkvs.insert({ L"ObjectId", inParams.ObjectId }); }
if (inParams.OfflineReason.vt != VT_EMPTY) { inkvs.insert({ L"OfflineReason", inParams.OfflineReason }); }
if (inParams.OperationalStatus.vt != VT_EMPTY) { inkvs.insert({ L"OperationalStatus", inParams.OperationalStatus }); }
if (inParams.PartitionStyle.vt != VT_EMPTY) { inkvs.insert({ L"PartitionStyle", inParams.PartitionStyle }); }
if (inParams.PassThroughClass.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughClass", inParams.PassThroughClass }); }
if (inParams.PassThroughIds.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughIds", inParams.PassThroughIds }); }
if (inParams.PassThroughNamespace.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughNamespace", inParams.PassThroughNamespace }); }
if (inParams.PassThroughServer.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughServer", inParams.PassThroughServer }); }
if (inParams.Path.vt != VT_EMPTY) { inkvs.insert({ L"Path", inParams.Path }); }
if (inParams.PhysicalSectorSize.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalSectorSize", inParams.PhysicalSectorSize }); }
if (inParams.ProvisioningType.vt != VT_EMPTY) { inkvs.insert({ L"ProvisioningType", inParams.ProvisioningType }); }
if (inParams.SerialNumber.vt != VT_EMPTY) { inkvs.insert({ L"SerialNumber", inParams.SerialNumber }); }
if (inParams.Signature.vt != VT_EMPTY) { inkvs.insert({ L"Signature", inParams.Signature }); }
if (inParams.Size.vt != VT_EMPTY) { inkvs.insert({ L"Size", inParams.Size }); }
if (inParams.UniqueId.vt != VT_EMPTY) { inkvs.insert({ L"UniqueId", inParams.UniqueId }); }
if (inParams.UniqueIdFormat.vt != VT_EMPTY) { inkvs.insert({ L"UniqueIdFormat", inParams.UniqueIdFormat }); }
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




////////////////////////// Method: CreatePartition ///////////////////////////
struct CreatePartition_InParams
{
CComVariant Alignment;
CComVariant AssignDriveLetter;
CComVariant DriveLetter;
CComVariant GptType;
CComVariant IsActive;
CComVariant IsHidden;
CComVariant MbrType;
CComVariant Offset;
CComVariant Size;
CComVariant UseMaximumSize;
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
struct CreatePartition_OutResturns
{
CComVariant CreatedPartition;
CComVariant ExtendedStatus;
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
HRESULT CreatePartition(IWbemClassObject* obj, CreatePartition_InParams& inParams, CreatePartition_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.Alignment.vt != VT_EMPTY) { inkvs.insert({ L"Alignment", inParams.Alignment }); }
if (inParams.AssignDriveLetter.vt != VT_EMPTY) { inkvs.insert({ L"AssignDriveLetter", inParams.AssignDriveLetter }); }
if (inParams.DriveLetter.vt != VT_EMPTY) { inkvs.insert({ L"DriveLetter", inParams.DriveLetter }); }
if (inParams.GptType.vt != VT_EMPTY) { inkvs.insert({ L"GptType", inParams.GptType }); }
if (inParams.IsActive.vt != VT_EMPTY) { inkvs.insert({ L"IsActive", inParams.IsActive }); }
if (inParams.IsHidden.vt != VT_EMPTY) { inkvs.insert({ L"IsHidden", inParams.IsHidden }); }
if (inParams.MbrType.vt != VT_EMPTY) { inkvs.insert({ L"MbrType", inParams.MbrType }); }
if (inParams.Offset.vt != VT_EMPTY) { inkvs.insert({ L"Offset", inParams.Offset }); }
if (inParams.Size.vt != VT_EMPTY) { inkvs.insert({ L"Size", inParams.Size }); }
if (inParams.UseMaximumSize.vt != VT_EMPTY) { inkvs.insert({ L"UseMaximumSize", inParams.UseMaximumSize }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"CreatePartition", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedPartition"].vt != VT_EMPTY) { outReturns.CreatedPartition = outkvs[L"CreatedPartition"]; }
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: Initialize ///////////////////////////
struct Initialize_InParams
{
CComVariant PartitionStyle;
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
struct Initialize_OutResturns
{
CComVariant ExtendedStatus;
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
HRESULT Initialize(IWbemClassObject* obj, Initialize_InParams& inParams, Initialize_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.PartitionStyle.vt != VT_EMPTY) { inkvs.insert({ L"PartitionStyle", inParams.PartitionStyle }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Initialize", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: Clear ///////////////////////////
struct Clear_InParams
{
CComVariant RemoveData;
CComVariant RemoveOEM;
CComVariant RunAsJob;
CComVariant Sanitize;
CComVariant ZeroOutEntireDisk;
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
struct Clear_OutResturns
{
CComVariant CreatedStorageJob;
CComVariant ExtendedStatus;
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
HRESULT Clear(IWbemClassObject* obj, Clear_InParams& inParams, Clear_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.RemoveData.vt != VT_EMPTY) { inkvs.insert({ L"RemoveData", inParams.RemoveData }); }
if (inParams.RemoveOEM.vt != VT_EMPTY) { inkvs.insert({ L"RemoveOEM", inParams.RemoveOEM }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.Sanitize.vt != VT_EMPTY) { inkvs.insert({ L"Sanitize", inParams.Sanitize }); }
if (inParams.ZeroOutEntireDisk.vt != VT_EMPTY) { inkvs.insert({ L"ZeroOutEntireDisk", inParams.ZeroOutEntireDisk }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Clear", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedStorageJob"].vt != VT_EMPTY) { outReturns.CreatedStorageJob = outkvs[L"CreatedStorageJob"]; }
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: ConvertStyle ///////////////////////////
struct ConvertStyle_InParams
{
CComVariant PartitionStyle;
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
struct ConvertStyle_OutResturns
{
CComVariant ExtendedStatus;
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
HRESULT ConvertStyle(IWbemClassObject* obj, ConvertStyle_InParams& inParams, ConvertStyle_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.PartitionStyle.vt != VT_EMPTY) { inkvs.insert({ L"PartitionStyle", inParams.PartitionStyle }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"ConvertStyle", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: Offline ///////////////////////////
struct Offline_InParams
{
} ;
struct Offline_OutResturns
{
CComVariant ExtendedStatus;
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
HRESULT Offline(IWbemClassObject* obj, Offline_InParams& inParams, Offline_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Offline", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: Online ///////////////////////////
struct Online_InParams
{
} ;
struct Online_OutResturns
{
CComVariant ExtendedStatus;
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
HRESULT Online(IWbemClassObject* obj, Online_InParams& inParams, Online_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Online", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: SetAttributes ///////////////////////////
struct SetAttributes_InParams
{
CComVariant Guid;
CComVariant IsReadOnly;
CComVariant Signature;
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
struct SetAttributes_OutResturns
{
CComVariant ExtendedStatus;
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
HRESULT SetAttributes(IWbemClassObject* obj, SetAttributes_InParams& inParams, SetAttributes_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.Guid.vt != VT_EMPTY) { inkvs.insert({ L"Guid", inParams.Guid }); }
if (inParams.IsReadOnly.vt != VT_EMPTY) { inkvs.insert({ L"IsReadOnly", inParams.IsReadOnly }); }
if (inParams.Signature.vt != VT_EMPTY) { inkvs.insert({ L"Signature", inParams.Signature }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"SetAttributes", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: Refresh ///////////////////////////
struct Refresh_InParams
{
} ;
struct Refresh_OutResturns
{
CComVariant ExtendedStatus;
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
HRESULT Refresh(IWbemClassObject* obj, Refresh_InParams& inParams, Refresh_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Refresh", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: CreateVolume ///////////////////////////
struct CreateVolume_InParams
{
CComVariant AccessPath;
CComVariant AllocationUnitSize;
CComVariant FileSystem;
CComVariant FriendlyName;
CComVariant RunAsJob;
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
struct CreateVolume_OutResturns
{
CComVariant CreatedStorageJob;
CComVariant CreatedVolume;
CComVariant ExtendedStatus;
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
HRESULT CreateVolume(IWbemClassObject* obj, CreateVolume_InParams& inParams, CreateVolume_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AccessPath.vt != VT_EMPTY) { inkvs.insert({ L"AccessPath", inParams.AccessPath }); }
if (inParams.AllocationUnitSize.vt != VT_EMPTY) { inkvs.insert({ L"AllocationUnitSize", inParams.AllocationUnitSize }); }
if (inParams.FileSystem.vt != VT_EMPTY) { inkvs.insert({ L"FileSystem", inParams.FileSystem }); }
if (inParams.FriendlyName.vt != VT_EMPTY) { inkvs.insert({ L"FriendlyName", inParams.FriendlyName }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"CreateVolume", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedStorageJob"].vt != VT_EMPTY) { outReturns.CreatedStorageJob = outkvs[L"CreatedStorageJob"]; }
if (outkvs[L"CreatedVolume"].vt != VT_EMPTY) { outReturns.CreatedVolume = outkvs[L"CreatedVolume"]; }
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: EnableHighAvailability ///////////////////////////
struct EnableHighAvailability_InParams
{
CComVariant RunAsJob;
CComVariant ScaleOut;
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
struct EnableHighAvailability_OutResturns
{
CComVariant CreatedStorageJob;
CComVariant ExtendedStatus;
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
HRESULT EnableHighAvailability(IWbemClassObject* obj, EnableHighAvailability_InParams& inParams, EnableHighAvailability_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.ScaleOut.vt != VT_EMPTY) { inkvs.insert({ L"ScaleOut", inParams.ScaleOut }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"EnableHighAvailability", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedStorageJob"].vt != VT_EMPTY) { outReturns.CreatedStorageJob = outkvs[L"CreatedStorageJob"]; }
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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


////////////////////////// Method: DisableHighAvailability ///////////////////////////
struct DisableHighAvailability_InParams
{
CComVariant RunAsJob;
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
struct DisableHighAvailability_OutResturns
{
CComVariant CreatedStorageJob;
CComVariant ExtendedStatus;
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
HRESULT DisableHighAvailability(IWbemClassObject* obj, DisableHighAvailability_InParams& inParams, DisableHighAvailability_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"DisableHighAvailability", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedStorageJob"].vt != VT_EMPTY) { outReturns.CreatedStorageJob = outkvs[L"CreatedStorageJob"]; }
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
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
