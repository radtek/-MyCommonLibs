class SML_MSFT_Partition 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"MSFT_Partition" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: MSFT_Partition //////////////////////////
struct SML_MSFT_Partition_Props
{
CComVariant AccessPaths;
CComVariant DiskId;
CComVariant DiskNumber;
CComVariant DriveLetter;
CComVariant GptType;
CComVariant Guid;
CComVariant IsActive;
CComVariant IsBoot;
CComVariant IsDAX;
CComVariant IsHidden;
CComVariant IsOffline;
CComVariant IsReadOnly;
CComVariant IsShadowCopy;
CComVariant IsSystem;
CComVariant MbrType;
CComVariant NoDefaultDriveLetter;
CComVariant ObjectId;
CComVariant Offset;
CComVariant OperationalStatus;
CComVariant PartitionNumber;
CComVariant PassThroughClass;
CComVariant PassThroughIds;
CComVariant PassThroughNamespace;
CComVariant PassThroughServer;
CComVariant Size;
CComVariant TransitionState;
CComVariant UniqueId;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_MSFT_Partition_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AccessPaths"].vt != VT_EMPTY) { outReturns.AccessPaths = outkvs[L"AccessPaths"]; }
if (outkvs[L"DiskId"].vt != VT_EMPTY) { outReturns.DiskId = outkvs[L"DiskId"]; }
if (outkvs[L"DiskNumber"].vt != VT_EMPTY) { outReturns.DiskNumber = outkvs[L"DiskNumber"]; }
if (outkvs[L"DriveLetter"].vt != VT_EMPTY) { outReturns.DriveLetter = outkvs[L"DriveLetter"]; }
if (outkvs[L"GptType"].vt != VT_EMPTY) { outReturns.GptType = outkvs[L"GptType"]; }
if (outkvs[L"Guid"].vt != VT_EMPTY) { outReturns.Guid = outkvs[L"Guid"]; }
if (outkvs[L"IsActive"].vt != VT_EMPTY) { outReturns.IsActive = outkvs[L"IsActive"]; }
if (outkvs[L"IsBoot"].vt != VT_EMPTY) { outReturns.IsBoot = outkvs[L"IsBoot"]; }
if (outkvs[L"IsDAX"].vt != VT_EMPTY) { outReturns.IsDAX = outkvs[L"IsDAX"]; }
if (outkvs[L"IsHidden"].vt != VT_EMPTY) { outReturns.IsHidden = outkvs[L"IsHidden"]; }
if (outkvs[L"IsOffline"].vt != VT_EMPTY) { outReturns.IsOffline = outkvs[L"IsOffline"]; }
if (outkvs[L"IsReadOnly"].vt != VT_EMPTY) { outReturns.IsReadOnly = outkvs[L"IsReadOnly"]; }
if (outkvs[L"IsShadowCopy"].vt != VT_EMPTY) { outReturns.IsShadowCopy = outkvs[L"IsShadowCopy"]; }
if (outkvs[L"IsSystem"].vt != VT_EMPTY) { outReturns.IsSystem = outkvs[L"IsSystem"]; }
if (outkvs[L"MbrType"].vt != VT_EMPTY) { outReturns.MbrType = outkvs[L"MbrType"]; }
if (outkvs[L"NoDefaultDriveLetter"].vt != VT_EMPTY) { outReturns.NoDefaultDriveLetter = outkvs[L"NoDefaultDriveLetter"]; }
if (outkvs[L"ObjectId"].vt != VT_EMPTY) { outReturns.ObjectId = outkvs[L"ObjectId"]; }
if (outkvs[L"Offset"].vt != VT_EMPTY) { outReturns.Offset = outkvs[L"Offset"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"PartitionNumber"].vt != VT_EMPTY) { outReturns.PartitionNumber = outkvs[L"PartitionNumber"]; }
if (outkvs[L"PassThroughClass"].vt != VT_EMPTY) { outReturns.PassThroughClass = outkvs[L"PassThroughClass"]; }
if (outkvs[L"PassThroughIds"].vt != VT_EMPTY) { outReturns.PassThroughIds = outkvs[L"PassThroughIds"]; }
if (outkvs[L"PassThroughNamespace"].vt != VT_EMPTY) { outReturns.PassThroughNamespace = outkvs[L"PassThroughNamespace"]; }
if (outkvs[L"PassThroughServer"].vt != VT_EMPTY) { outReturns.PassThroughServer = outkvs[L"PassThroughServer"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"TransitionState"].vt != VT_EMPTY) { outReturns.TransitionState = outkvs[L"TransitionState"]; }
if (outkvs[L"UniqueId"].vt != VT_EMPTY) { outReturns.UniqueId = outkvs[L"UniqueId"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_MSFT_Partition_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AccessPaths"].vt != VT_EMPTY) { outReturns.AccessPaths = outkvs[L"AccessPaths"]; }
if (outkvs[L"DiskId"].vt != VT_EMPTY) { outReturns.DiskId = outkvs[L"DiskId"]; }
if (outkvs[L"DiskNumber"].vt != VT_EMPTY) { outReturns.DiskNumber = outkvs[L"DiskNumber"]; }
if (outkvs[L"DriveLetter"].vt != VT_EMPTY) { outReturns.DriveLetter = outkvs[L"DriveLetter"]; }
if (outkvs[L"GptType"].vt != VT_EMPTY) { outReturns.GptType = outkvs[L"GptType"]; }
if (outkvs[L"Guid"].vt != VT_EMPTY) { outReturns.Guid = outkvs[L"Guid"]; }
if (outkvs[L"IsActive"].vt != VT_EMPTY) { outReturns.IsActive = outkvs[L"IsActive"]; }
if (outkvs[L"IsBoot"].vt != VT_EMPTY) { outReturns.IsBoot = outkvs[L"IsBoot"]; }
if (outkvs[L"IsDAX"].vt != VT_EMPTY) { outReturns.IsDAX = outkvs[L"IsDAX"]; }
if (outkvs[L"IsHidden"].vt != VT_EMPTY) { outReturns.IsHidden = outkvs[L"IsHidden"]; }
if (outkvs[L"IsOffline"].vt != VT_EMPTY) { outReturns.IsOffline = outkvs[L"IsOffline"]; }
if (outkvs[L"IsReadOnly"].vt != VT_EMPTY) { outReturns.IsReadOnly = outkvs[L"IsReadOnly"]; }
if (outkvs[L"IsShadowCopy"].vt != VT_EMPTY) { outReturns.IsShadowCopy = outkvs[L"IsShadowCopy"]; }
if (outkvs[L"IsSystem"].vt != VT_EMPTY) { outReturns.IsSystem = outkvs[L"IsSystem"]; }
if (outkvs[L"MbrType"].vt != VT_EMPTY) { outReturns.MbrType = outkvs[L"MbrType"]; }
if (outkvs[L"NoDefaultDriveLetter"].vt != VT_EMPTY) { outReturns.NoDefaultDriveLetter = outkvs[L"NoDefaultDriveLetter"]; }
if (outkvs[L"ObjectId"].vt != VT_EMPTY) { outReturns.ObjectId = outkvs[L"ObjectId"]; }
if (outkvs[L"Offset"].vt != VT_EMPTY) { outReturns.Offset = outkvs[L"Offset"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"PartitionNumber"].vt != VT_EMPTY) { outReturns.PartitionNumber = outkvs[L"PartitionNumber"]; }
if (outkvs[L"PassThroughClass"].vt != VT_EMPTY) { outReturns.PassThroughClass = outkvs[L"PassThroughClass"]; }
if (outkvs[L"PassThroughIds"].vt != VT_EMPTY) { outReturns.PassThroughIds = outkvs[L"PassThroughIds"]; }
if (outkvs[L"PassThroughNamespace"].vt != VT_EMPTY) { outReturns.PassThroughNamespace = outkvs[L"PassThroughNamespace"]; }
if (outkvs[L"PassThroughServer"].vt != VT_EMPTY) { outReturns.PassThroughServer = outkvs[L"PassThroughServer"]; }
if (outkvs[L"Size"].vt != VT_EMPTY) { outReturns.Size = outkvs[L"Size"]; }
if (outkvs[L"TransitionState"].vt != VT_EMPTY) { outReturns.TransitionState = outkvs[L"TransitionState"]; }
if (outkvs[L"UniqueId"].vt != VT_EMPTY) { outReturns.UniqueId = outkvs[L"UniqueId"]; }
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

HRESULT NewObj(SML_MSFT_Partition_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.AccessPaths.vt != VT_EMPTY) { inkvs.insert({ L"AccessPaths", inParams.AccessPaths }); }
if (inParams.DiskId.vt != VT_EMPTY) { inkvs.insert({ L"DiskId", inParams.DiskId }); }
if (inParams.DiskNumber.vt != VT_EMPTY) { inkvs.insert({ L"DiskNumber", inParams.DiskNumber }); }
if (inParams.DriveLetter.vt != VT_EMPTY) { inkvs.insert({ L"DriveLetter", inParams.DriveLetter }); }
if (inParams.GptType.vt != VT_EMPTY) { inkvs.insert({ L"GptType", inParams.GptType }); }
if (inParams.Guid.vt != VT_EMPTY) { inkvs.insert({ L"Guid", inParams.Guid }); }
if (inParams.IsActive.vt != VT_EMPTY) { inkvs.insert({ L"IsActive", inParams.IsActive }); }
if (inParams.IsBoot.vt != VT_EMPTY) { inkvs.insert({ L"IsBoot", inParams.IsBoot }); }
if (inParams.IsDAX.vt != VT_EMPTY) { inkvs.insert({ L"IsDAX", inParams.IsDAX }); }
if (inParams.IsHidden.vt != VT_EMPTY) { inkvs.insert({ L"IsHidden", inParams.IsHidden }); }
if (inParams.IsOffline.vt != VT_EMPTY) { inkvs.insert({ L"IsOffline", inParams.IsOffline }); }
if (inParams.IsReadOnly.vt != VT_EMPTY) { inkvs.insert({ L"IsReadOnly", inParams.IsReadOnly }); }
if (inParams.IsShadowCopy.vt != VT_EMPTY) { inkvs.insert({ L"IsShadowCopy", inParams.IsShadowCopy }); }
if (inParams.IsSystem.vt != VT_EMPTY) { inkvs.insert({ L"IsSystem", inParams.IsSystem }); }
if (inParams.MbrType.vt != VT_EMPTY) { inkvs.insert({ L"MbrType", inParams.MbrType }); }
if (inParams.NoDefaultDriveLetter.vt != VT_EMPTY) { inkvs.insert({ L"NoDefaultDriveLetter", inParams.NoDefaultDriveLetter }); }
if (inParams.ObjectId.vt != VT_EMPTY) { inkvs.insert({ L"ObjectId", inParams.ObjectId }); }
if (inParams.Offset.vt != VT_EMPTY) { inkvs.insert({ L"Offset", inParams.Offset }); }
if (inParams.OperationalStatus.vt != VT_EMPTY) { inkvs.insert({ L"OperationalStatus", inParams.OperationalStatus }); }
if (inParams.PartitionNumber.vt != VT_EMPTY) { inkvs.insert({ L"PartitionNumber", inParams.PartitionNumber }); }
if (inParams.PassThroughClass.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughClass", inParams.PassThroughClass }); }
if (inParams.PassThroughIds.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughIds", inParams.PassThroughIds }); }
if (inParams.PassThroughNamespace.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughNamespace", inParams.PassThroughNamespace }); }
if (inParams.PassThroughServer.vt != VT_EMPTY) { inkvs.insert({ L"PassThroughServer", inParams.PassThroughServer }); }
if (inParams.Size.vt != VT_EMPTY) { inkvs.insert({ L"Size", inParams.Size }); }
if (inParams.TransitionState.vt != VT_EMPTY) { inkvs.insert({ L"TransitionState", inParams.TransitionState }); }
if (inParams.UniqueId.vt != VT_EMPTY) { inkvs.insert({ L"UniqueId", inParams.UniqueId }); }
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




////////////////////////// Method: DeleteObject ///////////////////////////
struct DeleteObject_InParams
{
} ;
struct DeleteObject_OutResturns
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
HRESULT DeleteObject(IWbemClassObject* obj, DeleteObject_InParams& inParams, DeleteObject_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"DeleteObject", inkvs, outkvs, &spout);

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


////////////////////////// Method: GetAccessPaths ///////////////////////////
struct GetAccessPaths_InParams
{
} ;
struct GetAccessPaths_OutResturns
{
CComVariant AccessPaths;
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
HRESULT GetAccessPaths(IWbemClassObject* obj, GetAccessPaths_InParams& inParams, GetAccessPaths_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"GetAccessPaths", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"AccessPaths"].vt != VT_EMPTY) { outReturns.AccessPaths = outkvs[L"AccessPaths"]; }
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


////////////////////////// Method: AddAccessPath ///////////////////////////
struct AddAccessPath_InParams
{
CComVariant AccessPath;
CComVariant AssignDriveLetter;
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
struct AddAccessPath_OutResturns
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
HRESULT AddAccessPath(IWbemClassObject* obj, AddAccessPath_InParams& inParams, AddAccessPath_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AccessPath.vt != VT_EMPTY) { inkvs.insert({ L"AccessPath", inParams.AccessPath }); }
if (inParams.AssignDriveLetter.vt != VT_EMPTY) { inkvs.insert({ L"AssignDriveLetter", inParams.AssignDriveLetter }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"AddAccessPath", inkvs, outkvs, &spout);

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


////////////////////////// Method: RemoveAccessPath ///////////////////////////
struct RemoveAccessPath_InParams
{
CComVariant AccessPath;
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
struct RemoveAccessPath_OutResturns
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
HRESULT RemoveAccessPath(IWbemClassObject* obj, RemoveAccessPath_InParams& inParams, RemoveAccessPath_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AccessPath.vt != VT_EMPTY) { inkvs.insert({ L"AccessPath", inParams.AccessPath }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"RemoveAccessPath", inkvs, outkvs, &spout);

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


////////////////////////// Method: Resize ///////////////////////////
struct Resize_InParams
{
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
HRESULT Resize(IWbemClassObject* obj, Resize_InParams& inParams, Resize_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

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


////////////////////////// Method: GetSupportedSize ///////////////////////////
struct GetSupportedSize_InParams
{
} ;
struct GetSupportedSize_OutResturns
{
CComVariant ExtendedStatus;
CComVariant ReturnValue;
CComVariant SizeMax;
CComVariant SizeMin;
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
HRESULT GetSupportedSize(IWbemClassObject* obj, GetSupportedSize_InParams& inParams, GetSupportedSize_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"GetSupportedSize", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"ExtendedStatus"].vt != VT_EMPTY) { outReturns.ExtendedStatus = outkvs[L"ExtendedStatus"]; }
if (outkvs[L"ReturnValue"].vt != VT_EMPTY) { outReturns.ReturnValue = outkvs[L"ReturnValue"]; }
if (outkvs[L"SizeMax"].vt != VT_EMPTY) { outReturns.SizeMax = outkvs[L"SizeMax"]; }
if (outkvs[L"SizeMin"].vt != VT_EMPTY) { outReturns.SizeMin = outkvs[L"SizeMin"]; }
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


////////////////////////// Method: SetAttributes ///////////////////////////
struct SetAttributes_InParams
{
CComVariant GptType;
CComVariant IsActive;
CComVariant IsDAX;
CComVariant IsHidden;
CComVariant IsReadOnly;
CComVariant IsShadowCopy;
CComVariant MbrType;
CComVariant NoDefaultDriveLetter;
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

if (inParams.GptType.vt != VT_EMPTY) { inkvs.insert({ L"GptType", inParams.GptType }); }
if (inParams.IsActive.vt != VT_EMPTY) { inkvs.insert({ L"IsActive", inParams.IsActive }); }
if (inParams.IsDAX.vt != VT_EMPTY) { inkvs.insert({ L"IsDAX", inParams.IsDAX }); }
if (inParams.IsHidden.vt != VT_EMPTY) { inkvs.insert({ L"IsHidden", inParams.IsHidden }); }
if (inParams.IsReadOnly.vt != VT_EMPTY) { inkvs.insert({ L"IsReadOnly", inParams.IsReadOnly }); }
if (inParams.IsShadowCopy.vt != VT_EMPTY) { inkvs.insert({ L"IsShadowCopy", inParams.IsShadowCopy }); }
if (inParams.MbrType.vt != VT_EMPTY) { inkvs.insert({ L"MbrType", inParams.MbrType }); }
if (inParams.NoDefaultDriveLetter.vt != VT_EMPTY) { inkvs.insert({ L"NoDefaultDriveLetter", inParams.NoDefaultDriveLetter }); }
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


};
