class SML_MSFT_VirtualDisk 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"MSFT_VirtualDisk" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: MSFT_VirtualDisk //////////////////////////
struct SML_MSFT_VirtualDisk_Props
{
CComVariant Access;
CComVariant AllocatedSize;
CComVariant AllocationUnitSize;
CComVariant ColumnIsolation;
CComVariant DetachedReason;
CComVariant FaultDomainAwareness;
CComVariant FootprintOnPool;
CComVariant FriendlyName;
CComVariant HealthStatus;
CComVariant Interleave;
CComVariant IsDeduplicationEnabled;
CComVariant IsEnclosureAware;
CComVariant IsManualAttach;
CComVariant IsSnapshot;
CComVariant IsTiered;
CComVariant LogicalSectorSize;
CComVariant MediaType;
CComVariant Name;
CComVariant NameFormat;
CComVariant NumberOfAvailableCopies;
CComVariant NumberOfColumns;
CComVariant NumberOfDataCopies;
CComVariant NumberOfGroups;
CComVariant ObjectId;
CComVariant OperationalStatus;
CComVariant OtherOperationalStatusDescription;
CComVariant OtherUsageDescription;
CComVariant ParityLayout;
CComVariant PassThroughClass;
CComVariant PassThroughIds;
CComVariant PassThroughNamespace;
CComVariant PassThroughServer;
CComVariant PhysicalDiskRedundancy;
CComVariant PhysicalSectorSize;
CComVariant ProvisioningType;
CComVariant ReadCacheSize;
CComVariant RequestNoSinglePointOfFailure;
CComVariant ResiliencySettingName;
CComVariant Size;
CComVariant UniqueId;
CComVariant UniqueIdFormat;
CComVariant UniqueIdFormatDescription;
CComVariant Usage;
CComVariant WriteCacheSize;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_MSFT_VirtualDisk_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"Access"].vt != VT_EMPTY) { outReturns.Access = outkvs[L"Access"]; }
if (outkvs[L"AllocatedSize"].vt != VT_EMPTY) { outReturns.AllocatedSize = outkvs[L"AllocatedSize"]; }
if (outkvs[L"AllocationUnitSize"].vt != VT_EMPTY) { outReturns.AllocationUnitSize = outkvs[L"AllocationUnitSize"]; }
if (outkvs[L"ColumnIsolation"].vt != VT_EMPTY) { outReturns.ColumnIsolation = outkvs[L"ColumnIsolation"]; }
if (outkvs[L"DetachedReason"].vt != VT_EMPTY) { outReturns.DetachedReason = outkvs[L"DetachedReason"]; }
if (outkvs[L"FaultDomainAwareness"].vt != VT_EMPTY) { outReturns.FaultDomainAwareness = outkvs[L"FaultDomainAwareness"]; }
if (outkvs[L"FootprintOnPool"].vt != VT_EMPTY) { outReturns.FootprintOnPool = outkvs[L"FootprintOnPool"]; }
if (outkvs[L"FriendlyName"].vt != VT_EMPTY) { outReturns.FriendlyName = outkvs[L"FriendlyName"]; }
if (outkvs[L"HealthStatus"].vt != VT_EMPTY) { outReturns.HealthStatus = outkvs[L"HealthStatus"]; }
if (outkvs[L"Interleave"].vt != VT_EMPTY) { outReturns.Interleave = outkvs[L"Interleave"]; }
if (outkvs[L"IsDeduplicationEnabled"].vt != VT_EMPTY) { outReturns.IsDeduplicationEnabled = outkvs[L"IsDeduplicationEnabled"]; }
if (outkvs[L"IsEnclosureAware"].vt != VT_EMPTY) { outReturns.IsEnclosureAware = outkvs[L"IsEnclosureAware"]; }
if (outkvs[L"IsManualAttach"].vt != VT_EMPTY) { outReturns.IsManualAttach = outkvs[L"IsManualAttach"]; }
if (outkvs[L"IsSnapshot"].vt != VT_EMPTY) { outReturns.IsSnapshot = outkvs[L"IsSnapshot"]; }
if (outkvs[L"IsTiered"].vt != VT_EMPTY) { outReturns.IsTiered = outkvs[L"IsTiered"]; }
if (outkvs[L"LogicalSectorSize"].vt != VT_EMPTY) { outReturns.LogicalSectorSize = outkvs[L"LogicalSectorSize"]; }
if (outkvs[L"MediaType"].vt != VT_EMPTY) { outReturns.MediaType = outkvs[L"MediaType"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"NameFormat"].vt != VT_EMPTY) { outReturns.NameFormat = outkvs[L"NameFormat"]; }
if (outkvs[L"NumberOfAvailableCopies"].vt != VT_EMPTY) { outReturns.NumberOfAvailableCopies = outkvs[L"NumberOfAvailableCopies"]; }
if (outkvs[L"NumberOfColumns"].vt != VT_EMPTY) { outReturns.NumberOfColumns = outkvs[L"NumberOfColumns"]; }
if (outkvs[L"NumberOfDataCopies"].vt != VT_EMPTY) { outReturns.NumberOfDataCopies = outkvs[L"NumberOfDataCopies"]; }
if (outkvs[L"NumberOfGroups"].vt != VT_EMPTY) { outReturns.NumberOfGroups = outkvs[L"NumberOfGroups"]; }
if (outkvs[L"ObjectId"].vt != VT_EMPTY) { outReturns.ObjectId = outkvs[L"ObjectId"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"OtherOperationalStatusDescription"].vt != VT_EMPTY) { outReturns.OtherOperationalStatusDescription = outkvs[L"OtherOperationalStatusDescription"]; }
if (outkvs[L"OtherUsageDescription"].vt != VT_EMPTY) { outReturns.OtherUsageDescription = outkvs[L"OtherUsageDescription"]; }
if (outkvs[L"ParityLayout"].vt != VT_EMPTY) { outReturns.ParityLayout = outkvs[L"ParityLayout"]; }
if (outkvs[L"PassThroughClass"].vt != VT_EMPTY) { outReturns.PassThroughClass = outkvs[L"PassThroughClass"]; }
if (outkvs[L"PassThroughIds"].vt != VT_EMPTY) { outReturns.PassThroughIds = outkvs[L"PassThroughIds"]; }
if (outkvs[L"PassThroughNamespace"].vt != VT_EMPTY) { outReturns.PassThroughNamespace = outkvs[L"PassThroughNamespace"]; }
if (outkvs[L"PassThroughServer"].vt != VT_EMPTY) { outReturns.PassThroughServer = outkvs[L"PassThroughServer"]; }
if (outkvs[L"PhysicalDiskRedundancy"].vt != VT_EMPTY) { outReturns.PhysicalDiskRedundancy = outkvs[L"PhysicalDiskRedundancy"]; }
if (outkvs[L"PhysicalSectorSize"].vt != VT_EMPTY) { outReturns.PhysicalSectorSize = outkvs[L"PhysicalSectorSize"]; }
if (outkvs[L"ProvisioningType"].vt != VT_EMPTY) { outReturns.ProvisioningType = outkvs[L"ProvisioningType"]; }
if (outkvs[L"ReadCacheSize"].vt != VT_EMPTY) { outReturns.ReadCacheSize = outkvs[L"ReadCacheSize"]; }
if (outkvs[L"RequestNoSinglePointOfFailure"].vt != VT_EMPTY) { outReturns.RequestNoSinglePointOfFailure = outkvs[L"RequestNoSinglePointOfFailure"]; }
if (outkvs[L"ResiliencySettingName"].vt != VT_EMPTY) { outReturns.ResiliencySettingName = outkvs[L"ResiliencySettingName"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"UniqueId"].vt != VT_EMPTY) { outReturns.UniqueId = outkvs[L"UniqueId"]; }
if (outkvs[L"UniqueIdFormat"].vt != VT_EMPTY) { outReturns.UniqueIdFormat = outkvs[L"UniqueIdFormat"]; }
if (outkvs[L"UniqueIdFormatDescription"].vt != VT_EMPTY) { outReturns.UniqueIdFormatDescription = outkvs[L"UniqueIdFormatDescription"]; }
if (outkvs[L"Usage"].vt != VT_EMPTY) { outReturns.Usage = outkvs[L"Usage"]; }
if (outkvs[L"WriteCacheSize"].vt != VT_EMPTY) { outReturns.WriteCacheSize = outkvs[L"WriteCacheSize"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_MSFT_VirtualDisk_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"Access"].vt != VT_EMPTY) { outReturns.Access = outkvs[L"Access"]; }
if (outkvs[L"AllocatedSize"].vt != VT_EMPTY) { outReturns.AllocatedSize = outkvs[L"AllocatedSize"]; }
if (outkvs[L"AllocationUnitSize"].vt != VT_EMPTY) { outReturns.AllocationUnitSize = outkvs[L"AllocationUnitSize"]; }
if (outkvs[L"ColumnIsolation"].vt != VT_EMPTY) { outReturns.ColumnIsolation = outkvs[L"ColumnIsolation"]; }
if (outkvs[L"DetachedReason"].vt != VT_EMPTY) { outReturns.DetachedReason = outkvs[L"DetachedReason"]; }
if (outkvs[L"FaultDomainAwareness"].vt != VT_EMPTY) { outReturns.FaultDomainAwareness = outkvs[L"FaultDomainAwareness"]; }
if (outkvs[L"FootprintOnPool"].vt != VT_EMPTY) { outReturns.FootprintOnPool = outkvs[L"FootprintOnPool"]; }
if (outkvs[L"FriendlyName"].vt != VT_EMPTY) { outReturns.FriendlyName = outkvs[L"FriendlyName"]; }
if (outkvs[L"HealthStatus"].vt != VT_EMPTY) { outReturns.HealthStatus = outkvs[L"HealthStatus"]; }
if (outkvs[L"Interleave"].vt != VT_EMPTY) { outReturns.Interleave = outkvs[L"Interleave"]; }
if (outkvs[L"IsDeduplicationEnabled"].vt != VT_EMPTY) { outReturns.IsDeduplicationEnabled = outkvs[L"IsDeduplicationEnabled"]; }
if (outkvs[L"IsEnclosureAware"].vt != VT_EMPTY) { outReturns.IsEnclosureAware = outkvs[L"IsEnclosureAware"]; }
if (outkvs[L"IsManualAttach"].vt != VT_EMPTY) { outReturns.IsManualAttach = outkvs[L"IsManualAttach"]; }
if (outkvs[L"IsSnapshot"].vt != VT_EMPTY) { outReturns.IsSnapshot = outkvs[L"IsSnapshot"]; }
if (outkvs[L"IsTiered"].vt != VT_EMPTY) { outReturns.IsTiered = outkvs[L"IsTiered"]; }
if (outkvs[L"LogicalSectorSize"].vt != VT_EMPTY) { outReturns.LogicalSectorSize = outkvs[L"LogicalSectorSize"]; }
if (outkvs[L"MediaType"].vt != VT_EMPTY) { outReturns.MediaType = outkvs[L"MediaType"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"NameFormat"].vt != VT_EMPTY) { outReturns.NameFormat = outkvs[L"NameFormat"]; }
if (outkvs[L"NumberOfAvailableCopies"].vt != VT_EMPTY) { outReturns.NumberOfAvailableCopies = outkvs[L"NumberOfAvailableCopies"]; }
if (outkvs[L"NumberOfColumns"].vt != VT_EMPTY) { outReturns.NumberOfColumns = outkvs[L"NumberOfColumns"]; }
if (outkvs[L"NumberOfDataCopies"].vt != VT_EMPTY) { outReturns.NumberOfDataCopies = outkvs[L"NumberOfDataCopies"]; }
if (outkvs[L"NumberOfGroups"].vt != VT_EMPTY) { outReturns.NumberOfGroups = outkvs[L"NumberOfGroups"]; }
if (outkvs[L"ObjectId"].vt != VT_EMPTY) { outReturns.ObjectId = outkvs[L"ObjectId"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"OtherOperationalStatusDescription"].vt != VT_EMPTY) { outReturns.OtherOperationalStatusDescription = outkvs[L"OtherOperationalStatusDescription"]; }
if (outkvs[L"OtherUsageDescription"].vt != VT_EMPTY) { outReturns.OtherUsageDescription = outkvs[L"OtherUsageDescription"]; }
if (outkvs[L"ParityLayout"].vt != VT_EMPTY) { outReturns.ParityLayout = outkvs[L"ParityLayout"]; }
if (outkvs[L"PassThroughClass"].vt != VT_EMPTY) { outReturns.PassThroughClass = outkvs[L"PassThroughClass"]; }
if (outkvs[L"PassThroughIds"].vt != VT_EMPTY) { outReturns.PassThroughIds = outkvs[L"PassThroughIds"]; }
if (outkvs[L"PassThroughNamespace"].vt != VT_EMPTY) { outReturns.PassThroughNamespace = outkvs[L"PassThroughNamespace"]; }
if (outkvs[L"PassThroughServer"].vt != VT_EMPTY) { outReturns.PassThroughServer = outkvs[L"PassThroughServer"]; }
if (outkvs[L"PhysicalDiskRedundancy"].vt != VT_EMPTY) { outReturns.PhysicalDiskRedundancy = outkvs[L"PhysicalDiskRedundancy"]; }
if (outkvs[L"PhysicalSectorSize"].vt != VT_EMPTY) { outReturns.PhysicalSectorSize = outkvs[L"PhysicalSectorSize"]; }
if (outkvs[L"ProvisioningType"].vt != VT_EMPTY) { outReturns.ProvisioningType = outkvs[L"ProvisioningType"]; }
if (outkvs[L"ReadCacheSize"].vt != VT_EMPTY) { outReturns.ReadCacheSize = outkvs[L"ReadCacheSize"]; }
if (outkvs[L"RequestNoSinglePointOfFailure"].vt != VT_EMPTY) { outReturns.RequestNoSinglePointOfFailure = outkvs[L"RequestNoSinglePointOfFailure"]; }
if (outkvs[L"ResiliencySettingName"].vt != VT_EMPTY) { outReturns.ResiliencySettingName = outkvs[L"ResiliencySettingName"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"UniqueId"].vt != VT_EMPTY) { outReturns.UniqueId = outkvs[L"UniqueId"]; }
if (outkvs[L"UniqueIdFormat"].vt != VT_EMPTY) { outReturns.UniqueIdFormat = outkvs[L"UniqueIdFormat"]; }
if (outkvs[L"UniqueIdFormatDescription"].vt != VT_EMPTY) { outReturns.UniqueIdFormatDescription = outkvs[L"UniqueIdFormatDescription"]; }
if (outkvs[L"Usage"].vt != VT_EMPTY) { outReturns.Usage = outkvs[L"Usage"]; }
if (outkvs[L"WriteCacheSize"].vt != VT_EMPTY) { outReturns.WriteCacheSize = outkvs[L"WriteCacheSize"]; }
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

HRESULT NewObj(SML_MSFT_VirtualDisk_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.Access.vt != VT_EMPTY) { inkvs.insert({ L"Access", inParams.Access }); }
if (inParams.AllocatedSize.vt != VT_EMPTY) { inkvs.insert({ L"AllocatedSize", inParams.AllocatedSize }); }
if (inParams.AllocationUnitSize.vt != VT_EMPTY) { inkvs.insert({ L"AllocationUnitSize", inParams.AllocationUnitSize }); }
if (inParams.ColumnIsolation.vt != VT_EMPTY) { inkvs.insert({ L"ColumnIsolation", inParams.ColumnIsolation }); }
if (inParams.DetachedReason.vt != VT_EMPTY) { inkvs.insert({ L"DetachedReason", inParams.DetachedReason }); }
if (inParams.FaultDomainAwareness.vt != VT_EMPTY) { inkvs.insert({ L"FaultDomainAwareness", inParams.FaultDomainAwareness }); }
if (inParams.FootprintOnPool.vt != VT_EMPTY) { inkvs.insert({ L"FootprintOnPool", inParams.FootprintOnPool }); }
if (inParams.FriendlyName.vt != VT_EMPTY) { inkvs.insert({ L"FriendlyName", inParams.FriendlyName }); }
if (inParams.HealthStatus.vt != VT_EMPTY) { inkvs.insert({ L"HealthStatus", inParams.HealthStatus }); }
if (inParams.Interleave.vt != VT_EMPTY) { inkvs.insert({ L"Interleave", inParams.Interleave }); }
if (inParams.IsDeduplicationEnabled.vt != VT_EMPTY) { inkvs.insert({ L"IsDeduplicationEnabled", inParams.IsDeduplicationEnabled }); }
if (inParams.IsEnclosureAware.vt != VT_EMPTY) { inkvs.insert({ L"IsEnclosureAware", inParams.IsEnclosureAware }); }
if (inParams.IsManualAttach.vt != VT_EMPTY) { inkvs.insert({ L"IsManualAttach", inParams.IsManualAttach }); }
if (inParams.IsSnapshot.vt != VT_EMPTY) { inkvs.insert({ L"IsSnapshot", inParams.IsSnapshot }); }
if (inParams.IsTiered.vt != VT_EMPTY) { inkvs.insert({ L"IsTiered", inParams.IsTiered }); }
if (inParams.LogicalSectorSize.vt != VT_EMPTY) { inkvs.insert({ L"LogicalSectorSize", inParams.LogicalSectorSize }); }
if (inParams.MediaType.vt != VT_EMPTY) { inkvs.insert({ L"MediaType", inParams.MediaType }); }
if (inParams.Name.vt != VT_EMPTY) { inkvs.insert({ L"Name", inParams.Name }); }
if (inParams.NameFormat.vt != VT_EMPTY) { inkvs.insert({ L"NameFormat", inParams.NameFormat }); }
if (inParams.NumberOfAvailableCopies.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfAvailableCopies", inParams.NumberOfAvailableCopies }); }
if (inParams.NumberOfColumns.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfColumns", inParams.NumberOfColumns }); }
if (inParams.NumberOfDataCopies.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfDataCopies", inParams.NumberOfDataCopies }); }
if (inParams.NumberOfGroups.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfGroups", inParams.NumberOfGroups }); }
if (inParams.ObjectId.vt != VT_EMPTY) { inkvs.insert({ L"ObjectId", inParams.ObjectId }); }
if (inParams.OperationalStatus.vt != VT_EMPTY) { inkvs.insert({ L"OperationalStatus", inParams.OperationalStatus }); }
if (inParams.OtherOperationalStatusDescription.vt != VT_EMPTY) { inkvs.insert({ L"OtherOperationalStatusDescription", inParams.OtherOperationalStatusDescription }); }
if (inParams.OtherUsageDescription.vt != VT_EMPTY) { inkvs.insert({ L"OtherUsageDescription", inParams.OtherUsageDescription }); }
if (inParams.ParityLayout.vt != VT_EMPTY) { inkvs.insert({ L"ParityLayout", inParams.ParityLayout }); }
if (inParams.PassThroughClass.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughClass", inParams.PassThroughClass }); }
if (inParams.PassThroughIds.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughIds", inParams.PassThroughIds }); }
if (inParams.PassThroughNamespace.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughNamespace", inParams.PassThroughNamespace }); }
if (inParams.PassThroughServer.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughServer", inParams.PassThroughServer }); }
if (inParams.PhysicalDiskRedundancy.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalDiskRedundancy", inParams.PhysicalDiskRedundancy }); }
if (inParams.PhysicalSectorSize.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalSectorSize", inParams.PhysicalSectorSize }); }
if (inParams.ProvisioningType.vt != VT_EMPTY) { inkvs.insert({ L"ProvisioningType", inParams.ProvisioningType }); }
if (inParams.ReadCacheSize.vt != VT_EMPTY) { inkvs.insert({ L"ReadCacheSize", inParams.ReadCacheSize }); }
if (inParams.RequestNoSinglePointOfFailure.vt != VT_EMPTY) { inkvs.insert({ L"RequestNoSinglePointOfFailure", inParams.RequestNoSinglePointOfFailure }); }
if (inParams.ResiliencySettingName.vt != VT_EMPTY) { inkvs.insert({ L"ResiliencySettingName", inParams.ResiliencySettingName }); }
if (inParams.Size.vt != VT_EMPTY) { inkvs.insert({ L"Size", inParams.Size }); }
if (inParams.UniqueId.vt != VT_EMPTY) { inkvs.insert({ L"UniqueId", inParams.UniqueId }); }
if (inParams.UniqueIdFormat.vt != VT_EMPTY) { inkvs.insert({ L"UniqueIdFormat", inParams.UniqueIdFormat }); }
if (inParams.UniqueIdFormatDescription.vt != VT_EMPTY) { inkvs.insert({ L"UniqueIdFormatDescription", inParams.UniqueIdFormatDescription }); }
if (inParams.Usage.vt != VT_EMPTY) { inkvs.insert({ L"Usage", inParams.Usage }); }
if (inParams.WriteCacheSize.vt != VT_EMPTY) { inkvs.insert({ L"WriteCacheSize", inParams.WriteCacheSize }); }
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


////////////////////////// Method: DeleteObject ///////////////////////////
struct DeleteObject_InParams
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
struct DeleteObject_OutResturns
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
HRESULT DeleteObject(IWbemClassObject* obj, DeleteObject_InParams& inParams, DeleteObject_OutResturns& outReturns)
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"DeleteObject", inkvs, outkvs, &spout);

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


////////////////////////// Method: Show ///////////////////////////
struct Show_InParams
{
CComVariant HostType;
CComVariant InitiatorAddress;
CComVariant RunAsJob;
CComVariant TargetPortAddresses;
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
struct Show_OutResturns
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
HRESULT Show(IWbemClassObject* obj, Show_InParams& inParams, Show_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.HostType.vt != VT_EMPTY) { inkvs.insert({ L"HostType", inParams.HostType }); }
if (inParams.InitiatorAddress.vt != VT_EMPTY) { inkvs.insert({ L"InitiatorAddress", inParams.InitiatorAddress }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.TargetPortAddresses.vt != VT_EMPTY) { inkvs.insert({ L"TargetPortAddresses", inParams.TargetPortAddresses }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Show", inkvs, outkvs, &spout);

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


////////////////////////// Method: Hide ///////////////////////////
struct Hide_InParams
{
CComVariant InitiatorAddress;
CComVariant RunAsJob;
CComVariant TargetPortAddresses;
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
struct Hide_OutResturns
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
HRESULT Hide(IWbemClassObject* obj, Hide_InParams& inParams, Hide_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.InitiatorAddress.vt != VT_EMPTY) { inkvs.insert({ L"InitiatorAddress", inParams.InitiatorAddress }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.TargetPortAddresses.vt != VT_EMPTY) { inkvs.insert({ L"TargetPortAddresses", inParams.TargetPortAddresses }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Hide", inkvs, outkvs, &spout);

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


////////////////////////// Method: CreateSnapshot ///////////////////////////
struct CreateSnapshot_InParams
{
CComVariant FriendlyName;
CComVariant RunAsJob;
CComVariant TargetStoragePoolName;
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
struct CreateSnapshot_OutResturns
{
CComVariant CreatedStorageJob;
CComVariant CreatedVirtualDisk;
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
HRESULT CreateSnapshot(IWbemClassObject* obj, CreateSnapshot_InParams& inParams, CreateSnapshot_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.FriendlyName.vt != VT_EMPTY) { inkvs.insert({ L"FriendlyName", inParams.FriendlyName }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.TargetStoragePoolName.vt != VT_EMPTY) { inkvs.insert({ L"TargetStoragePoolName", inParams.TargetStoragePoolName }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"CreateSnapshot", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedStorageJob"].vt != VT_EMPTY) { outReturns.CreatedStorageJob = outkvs[L"CreatedStorageJob"]; }
if (outkvs[L"CreatedVirtualDisk"].vt != VT_EMPTY) { outReturns.CreatedVirtualDisk = outkvs[L"CreatedVirtualDisk"]; }
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


////////////////////////// Method: CreateClone ///////////////////////////
struct CreateClone_InParams
{
CComVariant FriendlyName;
CComVariant RunAsJob;
CComVariant TargetStoragePoolName;
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
struct CreateClone_OutResturns
{
CComVariant CreatedStorageJob;
CComVariant CreatedVirtualDisk;
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
HRESULT CreateClone(IWbemClassObject* obj, CreateClone_InParams& inParams, CreateClone_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.FriendlyName.vt != VT_EMPTY) { inkvs.insert({ L"FriendlyName", inParams.FriendlyName }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.TargetStoragePoolName.vt != VT_EMPTY) { inkvs.insert({ L"TargetStoragePoolName", inParams.TargetStoragePoolName }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"CreateClone", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedStorageJob"].vt != VT_EMPTY) { outReturns.CreatedStorageJob = outkvs[L"CreatedStorageJob"]; }
if (outkvs[L"CreatedVirtualDisk"].vt != VT_EMPTY) { outReturns.CreatedVirtualDisk = outkvs[L"CreatedVirtualDisk"]; }
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


////////////////////////// Method: Resize ///////////////////////////
struct Resize_InParams
{
CComVariant RunAsJob;
CComVariant Size;
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
struct Resize_OutResturns
{
CComVariant CreatedStorageJob;
CComVariant ExtendedStatus;
CComVariant ReturnValue;
CComVariant Size;
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
HRESULT Resize(IWbemClassObject* obj, Resize_InParams& inParams, Resize_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.Size.vt != VT_EMPTY) { inkvs.insert({ L"Size", inParams.Size }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Resize", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedStorageJob"].vt != VT_EMPTY) { outReturns.CreatedStorageJob = outkvs[L"CreatedStorageJob"]; }
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
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


////////////////////////// Method: Repair ///////////////////////////
struct Repair_InParams
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
struct Repair_OutResturns
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
HRESULT Repair(IWbemClassObject* obj, Repair_InParams& inParams, Repair_OutResturns& outReturns)
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Repair", inkvs, outkvs, &spout);

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


////////////////////////// Method: GetSecurityDescriptor ///////////////////////////
struct GetSecurityDescriptor_InParams
{
} ;
struct GetSecurityDescriptor_OutResturns
{
CComVariant ExtendedStatus;
CComVariant ReturnValue;
CComVariant SecurityDescriptor;
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
HRESULT GetSecurityDescriptor(IWbemClassObject* obj, GetSecurityDescriptor_InParams& inParams, GetSecurityDescriptor_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"GetSecurityDescriptor", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
if (outkvs[L"SecurityDescriptor"].vt != VT_EMPTY) { outReturns.SecurityDescriptor = outkvs[L"SecurityDescriptor"]; }
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


////////////////////////// Method: SetSecurityDescriptor ///////////////////////////
struct SetSecurityDescriptor_InParams
{
CComVariant SecurityDescriptor;
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
struct SetSecurityDescriptor_OutResturns
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
HRESULT SetSecurityDescriptor(IWbemClassObject* obj, SetSecurityDescriptor_InParams& inParams, SetSecurityDescriptor_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.SecurityDescriptor.vt != VT_EMPTY) { inkvs.insert({ L"SecurityDescriptor", inParams.SecurityDescriptor }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"SetSecurityDescriptor", inkvs, outkvs, &spout);

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


////////////////////////// Method: SetUsage ///////////////////////////
struct SetUsage_InParams
{
CComVariant OtherUsageDescription;
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

if (inParams.OtherUsageDescription.vt != VT_EMPTY) { inkvs.insert({ L"OtherUsageDescription", inParams.OtherUsageDescription }); }
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
CComVariant Access;
CComVariant IsManualAttach;
CComVariant StorageNodeName;
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

if (inParams.Access.vt != VT_EMPTY) { inkvs.insert({ L"Access", inParams.Access }); }
if (inParams.IsManualAttach.vt != VT_EMPTY) { inkvs.insert({ L"IsManualAttach", inParams.IsManualAttach }); }
if (inParams.StorageNodeName.vt != VT_EMPTY) { inkvs.insert({ L"StorageNodeName", inParams.StorageNodeName }); }
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


////////////////////////// Method: SetProperties ///////////////////////////
struct SetProperties_InParams
{
CComVariant AllocationUnitSize;
CComVariant ColumnIsolation;
CComVariant FaultDomainAwareness;
CComVariant Interleave;
CComVariant MediaType;
CComVariant NumberOfColumns;
CComVariant NumberOfDataCopies;
CComVariant NumberOfGroups;
CComVariant PhysicalDiskRedundancy;
CComVariant ProvisioningType;
CComVariant ResiliencySettingName;
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
struct SetProperties_OutResturns
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
HRESULT SetProperties(IWbemClassObject* obj, SetProperties_InParams& inParams, SetProperties_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AllocationUnitSize.vt != VT_EMPTY) { inkvs.insert({ L"AllocationUnitSize", inParams.AllocationUnitSize }); }
if (inParams.ColumnIsolation.vt != VT_EMPTY) { inkvs.insert({ L"ColumnIsolation", inParams.ColumnIsolation }); }
if (inParams.FaultDomainAwareness.vt != VT_EMPTY) { inkvs.insert({ L"FaultDomainAwareness", inParams.FaultDomainAwareness }); }
if (inParams.Interleave.vt != VT_EMPTY) { inkvs.insert({ L"Interleave", inParams.Interleave }); }
if (inParams.MediaType.vt != VT_EMPTY) { inkvs.insert({ L"MediaType", inParams.MediaType }); }
if (inParams.NumberOfColumns.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfColumns", inParams.NumberOfColumns }); }
if (inParams.NumberOfDataCopies.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfDataCopies", inParams.NumberOfDataCopies }); }
if (inParams.NumberOfGroups.vt != VT_EMPTY) { inkvs.insert({ L"NumberOfGroups", inParams.NumberOfGroups }); }
if (inParams.PhysicalDiskRedundancy.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalDiskRedundancy", inParams.PhysicalDiskRedundancy }); }
if (inParams.ProvisioningType.vt != VT_EMPTY) { inkvs.insert({ L"ProvisioningType", inParams.ProvisioningType }); }
if (inParams.ResiliencySettingName.vt != VT_EMPTY) { inkvs.insert({ L"ResiliencySettingName", inParams.ResiliencySettingName }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"SetProperties", inkvs, outkvs, &spout);

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


////////////////////////// Method: Attach ///////////////////////////
struct Attach_InParams
{
CComVariant StorageNodeName;
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
struct Attach_OutResturns
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
HRESULT Attach(IWbemClassObject* obj, Attach_InParams& inParams, Attach_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.StorageNodeName.vt != VT_EMPTY) { inkvs.insert({ L"StorageNodeName", inParams.StorageNodeName }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Attach", inkvs, outkvs, &spout);

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


////////////////////////// Method: Detach ///////////////////////////
struct Detach_InParams
{
CComVariant StorageNodeName;
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
struct Detach_OutResturns
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
HRESULT Detach(IWbemClassObject* obj, Detach_InParams& inParams, Detach_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.StorageNodeName.vt != VT_EMPTY) { inkvs.insert({ L"StorageNodeName", inParams.StorageNodeName }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"Detach", inkvs, outkvs, &spout);

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


////////////////////////// Method: AddPhysicalDisk ///////////////////////////
struct AddPhysicalDisk_InParams
{
CComVariant PhysicalDisks;
CComVariant RunAsJob;
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
struct AddPhysicalDisk_OutResturns
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
HRESULT AddPhysicalDisk(IWbemClassObject* obj, AddPhysicalDisk_InParams& inParams, AddPhysicalDisk_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.PhysicalDisks.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalDisks", inParams.PhysicalDisks }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"AddPhysicalDisk", inkvs, outkvs, &spout);

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


////////////////////////// Method: RemovePhysicalDisk ///////////////////////////
struct RemovePhysicalDisk_InParams
{
CComVariant PhysicalDisks;
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
struct RemovePhysicalDisk_OutResturns
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
HRESULT RemovePhysicalDisk(IWbemClassObject* obj, RemovePhysicalDisk_InParams& inParams, RemovePhysicalDisk_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.PhysicalDisks.vt != VT_EMPTY) { inkvs.insert({ L"PhysicalDisks", inParams.PhysicalDisks }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"RemovePhysicalDisk", inkvs, outkvs, &spout);

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


////////////////////////// Method: AddStorageFaultDomain ///////////////////////////
struct AddStorageFaultDomain_InParams
{
CComVariant RunAsJob;
CComVariant StorageFaultDomains;
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
struct AddStorageFaultDomain_OutResturns
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
HRESULT AddStorageFaultDomain(IWbemClassObject* obj, AddStorageFaultDomain_InParams& inParams, AddStorageFaultDomain_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.StorageFaultDomains.vt != VT_EMPTY) { inkvs.insert({ L"StorageFaultDomains", inParams.StorageFaultDomains }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"AddStorageFaultDomain", inkvs, outkvs, &spout);

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


////////////////////////// Method: RemoveStorageFaultDomain ///////////////////////////
struct RemoveStorageFaultDomain_InParams
{
CComVariant RunAsJob;
CComVariant StorageFaultDomains;
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
struct RemoveStorageFaultDomain_OutResturns
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
HRESULT RemoveStorageFaultDomain(IWbemClassObject* obj, RemoveStorageFaultDomain_InParams& inParams, RemoveStorageFaultDomain_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.StorageFaultDomains.vt != VT_EMPTY) { inkvs.insert({ L"StorageFaultDomains", inParams.StorageFaultDomains }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"RemoveStorageFaultDomain", inkvs, outkvs, &spout);

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


////////////////////////// Method: CreateReplica ///////////////////////////
struct CreateReplica_InParams
{
CComVariant FriendlyName;
CComVariant RecoveryPointObjective;
CComVariant ReplicationSettings;
CComVariant RunAsJob;
CComVariant SyncType;
CComVariant TargetStoragePoolObjectId;
CComVariant TargetStorageSubsystem;
CComVariant TargetVirtualDiskObjectId;
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
struct CreateReplica_OutResturns
{
CComVariant CreatedReplicaPeer;
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
HRESULT CreateReplica(IWbemClassObject* obj, CreateReplica_InParams& inParams, CreateReplica_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.FriendlyName.vt != VT_EMPTY) { inkvs.insert({ L"FriendlyName", inParams.FriendlyName }); }
if (inParams.RecoveryPointObjective.vt != VT_EMPTY) { inkvs.insert({ L"RecoveryPointObjective", inParams.RecoveryPointObjective }); }
if (inParams.ReplicationSettings.vt != VT_EMPTY) { inkvs.insert({ L"ReplicationSettings", inParams.ReplicationSettings }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.SyncType.vt != VT_EMPTY) { inkvs.insert({ L"SyncType", inParams.SyncType }); }
if (inParams.TargetStoragePoolObjectId.vt != VT_EMPTY) { inkvs.insert({ L"TargetStoragePoolObjectId", inParams.TargetStoragePoolObjectId }); }
if (inParams.TargetStorageSubsystem.vt != VT_EMPTY) { inkvs.insert({ L"TargetStorageSubsystem", inParams.TargetStorageSubsystem }); }
if (inParams.TargetVirtualDiskObjectId.vt != VT_EMPTY) { inkvs.insert({ L"TargetVirtualDiskObjectId", inParams.TargetVirtualDiskObjectId }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"CreateReplica", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"CreatedReplicaPeer"].vt != VT_EMPTY) { outReturns.CreatedReplicaPeer = outkvs[L"CreatedReplicaPeer"]; }
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


////////////////////////// Method: SetReplicationRelationship ///////////////////////////
struct SetReplicationRelationship_InParams
{
CComVariant Operation;
CComVariant RunAsJob;
CComVariant VirtualDiskReplicaPeer;
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
struct SetReplicationRelationship_OutResturns
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
HRESULT SetReplicationRelationship(IWbemClassObject* obj, SetReplicationRelationship_InParams& inParams, SetReplicationRelationship_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.Operation.vt != VT_EMPTY) { inkvs.insert({ L"Operation", inParams.Operation }); }
if (inParams.RunAsJob.vt != VT_EMPTY) { inkvs.insert({ L"RunAsJob", inParams.RunAsJob }); }
if (inParams.VirtualDiskReplicaPeer.vt != VT_EMPTY) { inkvs.insert({ L"VirtualDiskReplicaPeer", inParams.VirtualDiskReplicaPeer }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"SetReplicationRelationship", inkvs, outkvs, &spout);

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
