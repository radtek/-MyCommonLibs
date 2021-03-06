class SML_MSFT_PhysicalDisk 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"MSFT_PhysicalDisk" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: MSFT_PhysicalDisk //////////////////////////
struct SML_MSFT_PhysicalDisk_Props
{
CComVariant AdapterSerialNumber;
CComVariant AllocatedSize;
CComVariant BusType;
CComVariant CanPool;
CComVariant CannotPoolReason;
CComVariant Description;
CComVariant DeviceId;
CComVariant EnclosureNumber;
CComVariant FirmwareVersion;
CComVariant FriendlyName;
CComVariant HealthStatus;
CComVariant IsIndicationEnabled;
CComVariant IsPartial;
CComVariant LogicalSectorSize;
CComVariant Manufacturer;
CComVariant MediaType;
CComVariant Model;
CComVariant ObjectId;
CComVariant OperationalDetails;
CComVariant OperationalStatus;
CComVariant OtherCannotPoolReasonDescription;
CComVariant PartNumber;
CComVariant PassThroughClass;
CComVariant PassThroughIds;
CComVariant PassThroughNamespace;
CComVariant PassThroughServer;
CComVariant PhysicalLocation;
CComVariant PhysicalSectorSize;
CComVariant SerialNumber;
CComVariant Size;
CComVariant SlotNumber;
CComVariant SoftwareVersion;
CComVariant SpindleSpeed;
CComVariant StoragePoolUniqueId;
CComVariant SupportedUsages;
CComVariant UniqueId;
CComVariant UniqueIdFormat;
CComVariant Usage;
CComVariant VirtualDiskFootprint;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_MSFT_PhysicalDisk_Props>& props)
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
if (outkvs[L"BusType"].vt != VT_EMPTY) { outReturns.BusType = outkvs[L"BusType"]; }
if (outkvs[L"CanPool"].vt != VT_EMPTY) { outReturns.CanPool = outkvs[L"CanPool"]; }
if (outkvs[L"CannotPoolReason"].vt != VT_EMPTY) { outReturns.CannotPoolReason = outkvs[L"CannotPoolReason"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DeviceId"].vt != VT_EMPTY) { outReturns.DeviceId = outkvs[L"DeviceId"]; }
if (outkvs[L"EnclosureNumber"].vt != VT_EMPTY) { outReturns.EnclosureNumber = outkvs[L"EnclosureNumber"]; }
if (outkvs[L"FirmwareVersion"].vt != VT_EMPTY) { outReturns.FirmwareVersion = outkvs[L"FirmwareVersion"]; }
if (outkvs[L"FriendlyName"].vt != VT_EMPTY) { outReturns.FriendlyName = outkvs[L"FriendlyName"]; }
if (outkvs[L"HealthStatus"].vt != VT_EMPTY) { outReturns.HealthStatus = outkvs[L"HealthStatus"]; }
if (outkvs[L"IsIndicationEnabled"].vt != VT_EMPTY) { outReturns.IsIndicationEnabled = outkvs[L"IsIndicationEnabled"]; }
if (outkvs[L"IsPartial"].vt != VT_EMPTY) { outReturns.IsPartial = outkvs[L"IsPartial"]; }
if (outkvs[L"LogicalSectorSize"].vt != VT_EMPTY) { outReturns.LogicalSectorSize = outkvs[L"LogicalSectorSize"]; }
if (outkvs[L"Manufacturer"].vt != VT_EMPTY) { outReturns.Manufacturer = outkvs[L"Manufacturer"]; }
if (outkvs[L"MediaType"].vt != VT_EMPTY) { outReturns.MediaType = outkvs[L"MediaType"]; }
if (outkvs[L"Model"].vt != VT_EMPTY) { outReturns.Model = outkvs[L"Model"]; }
if (outkvs[L"ObjectId"].vt != VT_EMPTY) { outReturns.ObjectId = outkvs[L"ObjectId"]; }
if (outkvs[L"OperationalDetails"].vt != VT_EMPTY) { outReturns.OperationalDetails = outkvs[L"OperationalDetails"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"OtherCannotPoolReasonDescription"].vt != VT_EMPTY) { outReturns.OtherCannotPoolReasonDescription = outkvs[L"OtherCannotPoolReasonDescription"]; }
if (outkvs[L"PartNumber"].vt != VT_EMPTY) { outReturns.PartNumber = outkvs[L"PartNumber"]; }
if (outkvs[L"PassThroughClass"].vt != VT_EMPTY) { outReturns.PassThroughClass = outkvs[L"PassThroughClass"]; }
if (outkvs[L"PassThroughIds"].vt != VT_EMPTY) { outReturns.PassThroughIds = outkvs[L"PassThroughIds"]; }
if (outkvs[L"PassThroughNamespace"].vt != VT_EMPTY) { outReturns.PassThroughNamespace = outkvs[L"PassThroughNamespace"]; }
if (outkvs[L"PassThroughServer"].vt != VT_EMPTY) { outReturns.PassThroughServer = outkvs[L"PassThroughServer"]; }
if (outkvs[L"PhysicalLocation"].vt != VT_EMPTY) { outReturns.PhysicalLocation = outkvs[L"PhysicalLocation"]; }
if (outkvs[L"PhysicalSectorSize"].vt != VT_EMPTY) { outReturns.PhysicalSectorSize = outkvs[L"PhysicalSectorSize"]; }
if (outkvs[L"SerialNumber"].vt != VT_EMPTY) { outReturns.SerialNumber = outkvs[L"SerialNumber"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"SlotNumber"].vt != VT_EMPTY) { outReturns.SlotNumber = outkvs[L"SlotNumber"]; }
if (outkvs[L"SoftwareVersion"].vt != VT_EMPTY) { outReturns.SoftwareVersion = outkvs[L"SoftwareVersion"]; }
if (outkvs[L"SpindleSpeed"].vt != VT_EMPTY) { outReturns.SpindleSpeed = outkvs[L"SpindleSpeed"]; }
if (outkvs[L"StoragePoolUniqueId"].vt != VT_EMPTY) { outReturns.StoragePoolUniqueId = outkvs[L"StoragePoolUniqueId"]; }
if (outkvs[L"SupportedUsages"].vt != VT_EMPTY) { outReturns.SupportedUsages = outkvs[L"SupportedUsages"]; }
if (outkvs[L"UniqueId"].vt != VT_EMPTY) { outReturns.UniqueId = outkvs[L"UniqueId"]; }
if (outkvs[L"UniqueIdFormat"].vt != VT_EMPTY) { outReturns.UniqueIdFormat = outkvs[L"UniqueIdFormat"]; }
if (outkvs[L"Usage"].vt != VT_EMPTY) { outReturns.Usage = outkvs[L"Usage"]; }
if (outkvs[L"VirtualDiskFootprint"].vt != VT_EMPTY) { outReturns.VirtualDiskFootprint = outkvs[L"VirtualDiskFootprint"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_MSFT_PhysicalDisk_Props>& props)
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
if (outkvs[L"BusType"].vt != VT_EMPTY) { outReturns.BusType = outkvs[L"BusType"]; }
if (outkvs[L"CanPool"].vt != VT_EMPTY) { outReturns.CanPool = outkvs[L"CanPool"]; }
if (outkvs[L"CannotPoolReason"].vt != VT_EMPTY) { outReturns.CannotPoolReason = outkvs[L"CannotPoolReason"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DeviceId"].vt != VT_EMPTY) { outReturns.DeviceId = outkvs[L"DeviceId"]; }
if (outkvs[L"EnclosureNumber"].vt != VT_EMPTY) { outReturns.EnclosureNumber = outkvs[L"EnclosureNumber"]; }
if (outkvs[L"FirmwareVersion"].vt != VT_EMPTY) { outReturns.FirmwareVersion = outkvs[L"FirmwareVersion"]; }
if (outkvs[L"FriendlyName"].vt != VT_EMPTY) { outReturns.FriendlyName = outkvs[L"FriendlyName"]; }
if (outkvs[L"HealthStatus"].vt != VT_EMPTY) { outReturns.HealthStatus = outkvs[L"HealthStatus"]; }
if (outkvs[L"IsIndicationEnabled"].vt != VT_EMPTY) { outReturns.IsIndicationEnabled = outkvs[L"IsIndicationEnabled"]; }
if (outkvs[L"IsPartial"].vt != VT_EMPTY) { outReturns.IsPartial = outkvs[L"IsPartial"]; }
if (outkvs[L"LogicalSectorSize"].vt != VT_EMPTY) { outReturns.LogicalSectorSize = outkvs[L"LogicalSectorSize"]; }
if (outkvs[L"Manufacturer"].vt != VT_EMPTY) { outReturns.Manufacturer = outkvs[L"Manufacturer"]; }
if (outkvs[L"MediaType"].vt != VT_EMPTY) { outReturns.MediaType = outkvs[L"MediaType"]; }
if (outkvs[L"Model"].vt != VT_EMPTY) { outReturns.Model = outkvs[L"Model"]; }
if (outkvs[L"ObjectId"].vt != VT_EMPTY) { outReturns.ObjectId = outkvs[L"ObjectId"]; }
if (outkvs[L"OperationalDetails"].vt != VT_EMPTY) { outReturns.OperationalDetails = outkvs[L"OperationalDetails"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"OtherCannotPoolReasonDescription"].vt != VT_EMPTY) { outReturns.OtherCannotPoolReasonDescription = outkvs[L"OtherCannotPoolReasonDescription"]; }
if (outkvs[L"PartNumber"].vt != VT_EMPTY) { outReturns.PartNumber = outkvs[L"PartNumber"]; }
if (outkvs[L"PassThroughClass"].vt != VT_EMPTY) { outReturns.PassThroughClass = outkvs[L"PassThroughClass"]; }
if (outkvs[L"PassThroughIds"].vt != VT_EMPTY) { outReturns.PassThroughIds = outkvs[L"PassThroughIds"]; }
if (outkvs[L"PassThroughNamespace"].vt != VT_EMPTY) { outReturns.PassThroughNamespace = outkvs[L"PassThroughNamespace"]; }
if (outkvs[L"PassThroughServer"].vt != VT_EMPTY) { outReturns.PassThroughServer = outkvs[L"PassThroughServer"]; }
if (outkvs[L"PhysicalLocation"].vt != VT_EMPTY) { outReturns.PhysicalLocation = outkvs[L"PhysicalLocation"]; }
if (outkvs[L"PhysicalSectorSize"].vt != VT_EMPTY) { outReturns.PhysicalSectorSize = outkvs[L"PhysicalSectorSize"]; }
if (outkvs[L"SerialNumber"].vt != VT_EMPTY) { outReturns.SerialNumber = outkvs[L"SerialNumber"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"SlotNumber"].vt != VT_EMPTY) { outReturns.SlotNumber = outkvs[L"SlotNumber"]; }
if (outkvs[L"SoftwareVersion"].vt != VT_EMPTY) { outReturns.SoftwareVersion = outkvs[L"SoftwareVersion"]; }
if (outkvs[L"SpindleSpeed"].vt != VT_EMPTY) { outReturns.SpindleSpeed = outkvs[L"SpindleSpeed"]; }
if (outkvs[L"StoragePoolUniqueId"].vt != VT_EMPTY) { outReturns.StoragePoolUniqueId = outkvs[L"StoragePoolUniqueId"]; }
if (outkvs[L"SupportedUsages"].vt != VT_EMPTY) { outReturns.SupportedUsages = outkvs[L"SupportedUsages"]; }
if (outkvs[L"UniqueId"].vt != VT_EMPTY) { outReturns.UniqueId = outkvs[L"UniqueId"]; }
if (outkvs[L"UniqueIdFormat"].vt != VT_EMPTY) { outReturns.UniqueIdFormat = outkvs[L"UniqueIdFormat"]; }
if (outkvs[L"Usage"].vt != VT_EMPTY) { outReturns.Usage = outkvs[L"Usage"]; }
if (outkvs[L"VirtualDiskFootprint"].vt != VT_EMPTY) { outReturns.VirtualDiskFootprint = outkvs[L"VirtualDiskFootprint"]; }
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

HRESULT NewObj(SML_MSFT_PhysicalDisk_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.AdapterSerialNumber.vt != VT_EMPTY) { inkvs.insert({ L"AdapterSerialNumber", inParams.AdapterSerialNumber }); }
if (inParams.AllocatedSize.vt != VT_EMPTY) { inkvs.insert({ L"AllocatedSize", inParams.AllocatedSize }); }
if (inParams.BusType.vt != VT_EMPTY) { inkvs.insert({ L"BusType", inParams.BusType }); }
if (inParams.CanPool.vt != VT_EMPTY) { inkvs.insert({ L"CanPool", inParams.CanPool }); }
if (inParams.CannotPoolReason.vt != VT_EMPTY) { inkvs.insert({ L"CannotPoolReason", inParams.CannotPoolReason }); }
if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
if (inParams.DeviceId.vt != VT_EMPTY) { inkvs.insert({ L"DeviceId", inParams.DeviceId }); }
if (inParams.EnclosureNumber.vt != VT_EMPTY) { inkvs.insert({ L"EnclosureNumber", inParams.EnclosureNumber }); }
if (inParams.FirmwareVersion.vt != VT_EMPTY) { inkvs.insert({ L"FirmwareVersion", inParams.FirmwareVersion }); }
if (inParams.FriendlyName.vt != VT_EMPTY) { inkvs.insert({ L"FriendlyName", inParams.FriendlyName }); }
if (inParams.HealthStatus.vt != VT_EMPTY) { inkvs.insert({ L"HealthStatus", inParams.HealthStatus }); }
if (inParams.IsIndicationEnabled.vt != VT_EMPTY) { inkvs.insert({ L"IsIndicationEnabled", inParams.IsIndicationEnabled }); }
if (inParams.IsPartial.vt != VT_EMPTY) { inkvs.insert({ L"IsPartial", inParams.IsPartial }); }
if (inParams.LogicalSectorSize.vt != VT_EMPTY) { inkvs.insert({ L"LogicalSectorSize", inParams.LogicalSectorSize }); }
if (inParams.Manufacturer.vt != VT_EMPTY) { inkvs.insert({ L"Manufacturer", inParams.Manufacturer }); }
if (inParams.MediaType.vt != VT_EMPTY) { inkvs.insert({ L"MediaType", inParams.MediaType }); }
if (inParams.Model.vt != VT_EMPTY) { inkvs.insert({ L"Model", inParams.Model }); }
if (inParams.ObjectId.vt != VT_EMPTY) { inkvs.insert({ L"ObjectId", inParams.ObjectId }); }
if (inParams.OperationalDetails.vt != VT_EMPTY) { inkvs.insert({ L"OperationalDetails", inParams.OperationalDetails }); }
if (inParams.OperationalStatus.vt != VT_EMPTY) { inkvs.insert({ L"OperationalStatus", inParams.OperationalStatus }); }
if (inParams.OtherCannotPoolReasonDescription.vt != VT_EMPTY) { inkvs.insert({ L"OtherCannotPoolReasonDescription", inParams.OtherCannotPoolReasonDescription }); }
if (inParams.PartNumber.vt != VT_EMPTY) { inkvs.insert({ L"PartNumber", inParams.PartNumber }); }
if (inParams.PassThroughClass.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughClass", inParams.PassThroughClass }); }
if (inParams.PassThroughIds.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughIds", inParams.PassThroughIds }); }
if (inParams.PassThroughNamespace.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughNamespace", inParams.PassThroughNamespace }); }
if (inParams.PassThroughServer.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughServer", inParams.PassThroughServer }); }
if (inParams.PhysicalLocation.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalLocation", inParams.PhysicalLocation }); }
if (inParams.PhysicalSectorSize.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalSectorSize", inParams.PhysicalSectorSize }); }
if (inParams.SerialNumber.vt != VT_EMPTY) { inkvs.insert({ L"SerialNumber", inParams.SerialNumber }); }
if (inParams.Size.vt != VT_EMPTY) { inkvs.insert({ L"Size", inParams.Size }); }
if (inParams.SlotNumber.vt != VT_EMPTY) { inkvs.insert({ L"SlotNumber", inParams.SlotNumber }); }
if (inParams.SoftwareVersion.vt != VT_EMPTY) { inkvs.insert({ L"SoftwareVersion", inParams.SoftwareVersion }); }
if (inParams.SpindleSpeed.vt != VT_EMPTY) { inkvs.insert({ L"SpindleSpeed", inParams.SpindleSpeed }); }
if (inParams.StoragePoolUniqueId.vt != VT_EMPTY) { inkvs.insert({ L"StoragePoolUniqueId", inParams.StoragePoolUniqueId }); }
if (inParams.SupportedUsages.vt != VT_EMPTY) { inkvs.insert({ L"SupportedUsages", inParams.SupportedUsages }); }
if (inParams.UniqueId.vt != VT_EMPTY) { inkvs.insert({ L"UniqueId", inParams.UniqueId }); }
if (inParams.UniqueIdFormat.vt != VT_EMPTY) { inkvs.insert({ L"UniqueIdFormat", inParams.UniqueIdFormat }); }
if (inParams.Usage.vt != VT_EMPTY) { inkvs.insert({ L"Usage", inParams.Usage }); }
if (inParams.VirtualDiskFootprint.vt != VT_EMPTY) { inkvs.insert({ L"VirtualDiskFootprint", inParams.VirtualDiskFootprint }); }
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




////////////////////////// Method: GetPhysicalExtent ///////////////////////////
struct GetPhysicalExtent_InParams
{
} ;
struct GetPhysicalExtent_OutResturns
{
CComVariant ExtendedStatus;
CComVariant PhysicalExtents;
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
HRESULT GetPhysicalExtent(IWbemClassObject* obj, GetPhysicalExtent_InParams& inParams, GetPhysicalExtent_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"GetPhysicalExtent", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
if (outkvs[L"PhysicalExtents"].vt != VT_EMPTY) { outReturns.PhysicalExtents = outkvs[L"PhysicalExtents"]; }
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


////////////////////////// Method: Maintenance ///////////////////////////
struct Maintenance_InParams
{
CComVariant EnableIndication;
CComVariant EnableMaintenanceMode;
CComVariant IgnoreDetachedVirtualDisks;
CComVariant Timeout;
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
struct Maintenance_OutResturns
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
HRESULT Maintenance(IWbemClassObject* obj, Maintenance_InParams& inParams, Maintenance_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.EnableIndication.vt != VT_EMPTY) { inkvs.insert({ L"EnableIndication", inParams.EnableIndication }); }
if (inParams.EnableMaintenanceMode.vt != VT_EMPTY) { inkvs.insert({ L"EnableMaintenanceMode", inParams.EnableMaintenanceMode }); }
if (inParams.IgnoreDetachedVirtualDisks.vt != VT_EMPTY) { inkvs.insert({ L"IgnoreDetachedVirtualDisks", inParams.IgnoreDetachedVirtualDisks }); }
if (inParams.Timeout.vt != VT_EMPTY) { inkvs.insert({ L"Timeout", inParams.Timeout }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Maintenance", inkvs, outkvs, &spout);

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


////////////////////////// Method: Reset ///////////////////////////
struct Reset_InParams
{
} ;
struct Reset_OutResturns
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
HRESULT Reset(IWbemClassObject* obj, Reset_InParams& inParams, Reset_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Reset", inkvs, outkvs, &spout);

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


////////////////////////// Method: SetFriendlyName ///////////////////////////
struct SetFriendlyName_InParams
{
CComVariant FriendlyName;
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
struct SetFriendlyName_OutResturns
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
HRESULT SetFriendlyName(IWbemClassObject* obj, SetFriendlyName_InParams& inParams, SetFriendlyName_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.FriendlyName.vt != VT_EMPTY) { inkvs.insert({ L"FriendlyName", inParams.FriendlyName }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"SetFriendlyName", inkvs, outkvs, &spout);

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


////////////////////////// Method: SetDescription ///////////////////////////
struct SetDescription_InParams
{
CComVariant Description;
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
struct SetDescription_OutResturns
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
HRESULT SetDescription(IWbemClassObject* obj, SetDescription_InParams& inParams, SetDescription_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"SetDescription", inkvs, outkvs, &spout);

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


////////////////////////// Method: SetUsage ///////////////////////////
struct SetUsage_InParams
{
CComVariant Usage;
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
struct SetUsage_OutResturns
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
HRESULT SetUsage(IWbemClassObject* obj, SetUsage_InParams& inParams, SetUsage_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.Usage.vt != VT_EMPTY) { inkvs.insert({ L"Usage", inParams.Usage }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"SetUsage", inkvs, outkvs, &spout);

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
CComVariant MediaType;
CComVariant StorageEnclosureId;
CComVariant StorageScaleUnitId;
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

if (inParams.MediaType.vt != VT_EMPTY) { inkvs.insert({ L"MediaType", inParams.MediaType }); }
if (inParams.StorageEnclosureId.vt != VT_EMPTY) { inkvs.insert({ L"StorageEnclosureId", inParams.StorageEnclosureId }); }
if (inParams.StorageScaleUnitId.vt != VT_EMPTY) { inkvs.insert({ L"StorageScaleUnitId", inParams.StorageScaleUnitId }); }
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


////////////////////////// Method: IsDeviceCacheEnabled ///////////////////////////
struct IsDeviceCacheEnabled_InParams
{
} ;
struct IsDeviceCacheEnabled_OutResturns
{
CComVariant ExtendedStatus;
CComVariant IsDeviceCacheEnabled;
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
HRESULT IsDeviceCacheEnabled(IWbemClassObject* obj, IsDeviceCacheEnabled_InParams& inParams, IsDeviceCacheEnabled_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"IsDeviceCacheEnabled", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
if (outkvs[L"IsDeviceCacheEnabled"].vt != VT_EMPTY) { outReturns.IsDeviceCacheEnabled = outkvs[L"IsDeviceCacheEnabled"]; }
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


////////////////////////// Method: IsPowerProtected ///////////////////////////
struct IsPowerProtected_InParams
{
} ;
struct IsPowerProtected_OutResturns
{
CComVariant ExtendedStatus;
CComVariant IsPowerProtected;
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
HRESULT IsPowerProtected(IWbemClassObject* obj, IsPowerProtected_InParams& inParams, IsPowerProtected_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"IsPowerProtected", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
if (outkvs[L"IsPowerProtected"].vt != VT_EMPTY) { outReturns.IsPowerProtected = outkvs[L"IsPowerProtected"]; }
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


////////////////////////// Method: GetFirmwareInformation ///////////////////////////
struct GetFirmwareInformation_InParams
{
} ;
struct GetFirmwareInformation_OutResturns
{
CComVariant ActiveSlotNumber;
CComVariant ExtendedStatus;
CComVariant FirmwareVersionInSlot;
CComVariant IsSlotWritable;
CComVariant NumberOfSlots;
CComVariant ReturnValue;
CComVariant SlotNumber;
CComVariant SupportsUpdate;
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
HRESULT GetFirmwareInformation(IWbemClassObject* obj, GetFirmwareInformation_InParams& inParams, GetFirmwareInformation_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"GetFirmwareInformation", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ActiveSlotNumber"].vt != VT_EMPTY) { outReturns.ActiveSlotNumber = outkvs[L"ActiveSlotNumber"]; }
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
if (outkvs[L"FirmwareVersionInSlot"].vt != VT_EMPTY) { outReturns.FirmwareVersionInSlot = outkvs[L"FirmwareVersionInSlot"]; }
if (outkvs[L"IsSlotWritable"].vt != VT_EMPTY) { outReturns.IsSlotWritable = outkvs[L"IsSlotWritable"]; }
if (outkvs[L"NumberOfSlots"].vt != VT_EMPTY) { outReturns.NumberOfSlots = outkvs[L"NumberOfSlots"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
if (outkvs[L"SlotNumber"].vt != VT_EMPTY) { outReturns.SlotNumber = outkvs[L"SlotNumber"]; }
if (outkvs[L"SupportsUpdate"].vt != VT_EMPTY) { outReturns.SupportsUpdate = outkvs[L"SupportsUpdate"]; }
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


////////////////////////// Method: UpdateFirmware ///////////////////////////
struct UpdateFirmware_InParams
{
CComVariant ImagePath;
CComVariant SlotNumber;
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
struct UpdateFirmware_OutResturns
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
HRESULT UpdateFirmware(IWbemClassObject* obj, UpdateFirmware_InParams& inParams, UpdateFirmware_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.ImagePath.vt != VT_EMPTY) { inkvs.insert({ L"ImagePath", inParams.ImagePath }); }
if (inParams.SlotNumber.vt != VT_EMPTY) { inkvs.insert({ L"SlotNumber", inParams.SlotNumber }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"UpdateFirmware", inkvs, outkvs, &spout);

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


};
