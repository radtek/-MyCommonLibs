class SML_Msvm_CollectionSnapshotService 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"Msvm_CollectionSnapshotService" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: Msvm_CollectionSnapshotService //////////////////////////
struct SML_Msvm_CollectionSnapshotService_Props
{
CComVariant AvailableRequestedStates;
CComVariant Caption;
CComVariant CommunicationStatus;
CComVariant CreationClassName;
CComVariant Description;
CComVariant DetailedStatus;
CComVariant ElementName;
CComVariant EnabledDefault;
CComVariant EnabledState;
CComVariant HealthState;
CComVariant InstallDate;
CComVariant InstanceID;
CComVariant Name;
CComVariant OperatingStatus;
CComVariant OperationalStatus;
CComVariant OtherEnabledState;
CComVariant PrimaryOwnerContact;
CComVariant PrimaryOwnerName;
CComVariant PrimaryStatus;
CComVariant RequestedState;
CComVariant StartMode;
CComVariant Started;
CComVariant Status;
CComVariant StatusDescriptions;
CComVariant SystemCreationClassName;
CComVariant SystemName;
CComVariant TimeOfLastStateChange;
CComVariant TransitioningToState;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_Msvm_CollectionSnapshotService_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AvailableRequestedStates"].vt != VT_EMPTY) { outReturns.AvailableRequestedStates = outkvs[L"AvailableRequestedStates"]; }
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"CommunicationStatus"].vt != VT_EMPTY) { outReturns.CommunicationStatus = outkvs[L"CommunicationStatus"]; }
if (outkvs[L"CreationClassName"].vt != VT_EMPTY) { outReturns.CreationClassName = outkvs[L"CreationClassName"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DetailedStatus"].vt != VT_EMPTY) { outReturns.DetailedStatus = outkvs[L"DetailedStatus"]; }
if (outkvs[L"ElementName"].vt != VT_EMPTY) { outReturns.ElementName = outkvs[L"ElementName"]; }
if (outkvs[L"EnabledDefault"].vt != VT_EMPTY) { outReturns.EnabledDefault = outkvs[L"EnabledDefault"]; }
if (outkvs[L"EnabledState"].vt != VT_EMPTY) { outReturns.EnabledState = outkvs[L"EnabledState"]; }
if (outkvs[L"HealthState"].vt != VT_EMPTY) { outReturns.HealthState = outkvs[L"HealthState"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"InstanceID"].vt != VT_EMPTY) { outReturns.InstanceID = outkvs[L"InstanceID"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"OperatingStatus"].vt != VT_EMPTY) { outReturns.OperatingStatus = outkvs[L"OperatingStatus"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"OtherEnabledState"].vt != VT_EMPTY) { outReturns.OtherEnabledState = outkvs[L"OtherEnabledState"]; }
if (outkvs[L"PrimaryOwnerContact"].vt != VT_EMPTY) { outReturns.PrimaryOwnerContact = outkvs[L"PrimaryOwnerContact"]; }
if (outkvs[L"PrimaryOwnerName"].vt != VT_EMPTY) { outReturns.PrimaryOwnerName = outkvs[L"PrimaryOwnerName"]; }
if (outkvs[L"PrimaryStatus"].vt != VT_EMPTY) { outReturns.PrimaryStatus = outkvs[L"PrimaryStatus"]; }
if (outkvs[L"RequestedState"].vt != VT_EMPTY) { outReturns.RequestedState = outkvs[L"RequestedState"]; }
if (outkvs[L"StartMode"].vt != VT_EMPTY) { outReturns.StartMode = outkvs[L"StartMode"]; }
if (outkvs[L"Started"].vt != VT_EMPTY) { outReturns.Started = outkvs[L"Started"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"StatusDescriptions"].vt != VT_EMPTY) { outReturns.StatusDescriptions = outkvs[L"StatusDescriptions"]; }
if (outkvs[L"SystemCreationClassName"].vt != VT_EMPTY) { outReturns.SystemCreationClassName = outkvs[L"SystemCreationClassName"]; }
if (outkvs[L"SystemName"].vt != VT_EMPTY) { outReturns.SystemName = outkvs[L"SystemName"]; }
if (outkvs[L"TimeOfLastStateChange"].vt != VT_EMPTY) { outReturns.TimeOfLastStateChange = outkvs[L"TimeOfLastStateChange"]; }
if (outkvs[L"TransitioningToState"].vt != VT_EMPTY) { outReturns.TransitioningToState = outkvs[L"TransitioningToState"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_Msvm_CollectionSnapshotService_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"AvailableRequestedStates"].vt != VT_EMPTY) { outReturns.AvailableRequestedStates = outkvs[L"AvailableRequestedStates"]; }
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"CommunicationStatus"].vt != VT_EMPTY) { outReturns.CommunicationStatus = outkvs[L"CommunicationStatus"]; }
if (outkvs[L"CreationClassName"].vt != VT_EMPTY) { outReturns.CreationClassName = outkvs[L"CreationClassName"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"DetailedStatus"].vt != VT_EMPTY) { outReturns.DetailedStatus = outkvs[L"DetailedStatus"]; }
if (outkvs[L"ElementName"].vt != VT_EMPTY) { outReturns.ElementName = outkvs[L"ElementName"]; }
if (outkvs[L"EnabledDefault"].vt != VT_EMPTY) { outReturns.EnabledDefault = outkvs[L"EnabledDefault"]; }
if (outkvs[L"EnabledState"].vt != VT_EMPTY) { outReturns.EnabledState = outkvs[L"EnabledState"]; }
if (outkvs[L"HealthState"].vt != VT_EMPTY) { outReturns.HealthState = outkvs[L"HealthState"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"InstanceID"].vt != VT_EMPTY) { outReturns.InstanceID = outkvs[L"InstanceID"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"OperatingStatus"].vt != VT_EMPTY) { outReturns.OperatingStatus = outkvs[L"OperatingStatus"]; }
if (outkvs[L"OperationalStatus"].vt != VT_EMPTY) { outReturns.OperationalStatus = outkvs[L"OperationalStatus"]; }
if (outkvs[L"OtherEnabledState"].vt != VT_EMPTY) { outReturns.OtherEnabledState = outkvs[L"OtherEnabledState"]; }
if (outkvs[L"PrimaryOwnerContact"].vt != VT_EMPTY) { outReturns.PrimaryOwnerContact = outkvs[L"PrimaryOwnerContact"]; }
if (outkvs[L"PrimaryOwnerName"].vt != VT_EMPTY) { outReturns.PrimaryOwnerName = outkvs[L"PrimaryOwnerName"]; }
if (outkvs[L"PrimaryStatus"].vt != VT_EMPTY) { outReturns.PrimaryStatus = outkvs[L"PrimaryStatus"]; }
if (outkvs[L"RequestedState"].vt != VT_EMPTY) { outReturns.RequestedState = outkvs[L"RequestedState"]; }
if (outkvs[L"StartMode"].vt != VT_EMPTY) { outReturns.StartMode = outkvs[L"StartMode"]; }
if (outkvs[L"Started"].vt != VT_EMPTY) { outReturns.Started = outkvs[L"Started"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"StatusDescriptions"].vt != VT_EMPTY) { outReturns.StatusDescriptions = outkvs[L"StatusDescriptions"]; }
if (outkvs[L"SystemCreationClassName"].vt != VT_EMPTY) { outReturns.SystemCreationClassName = outkvs[L"SystemCreationClassName"]; }
if (outkvs[L"SystemName"].vt != VT_EMPTY) { outReturns.SystemName = outkvs[L"SystemName"]; }
if (outkvs[L"TimeOfLastStateChange"].vt != VT_EMPTY) { outReturns.TimeOfLastStateChange = outkvs[L"TimeOfLastStateChange"]; }
if (outkvs[L"TransitioningToState"].vt != VT_EMPTY) { outReturns.TransitioningToState = outkvs[L"TransitioningToState"]; }
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

HRESULT NewObj(SML_Msvm_CollectionSnapshotService_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.AvailableRequestedStates.vt != VT_EMPTY) { inkvs.insert({ L"AvailableRequestedStates", inParams.AvailableRequestedStates }); }
if (inParams.Caption.vt != VT_EMPTY) { inkvs.insert({ L"Caption", inParams.Caption }); }
if (inParams.CommunicationStatus.vt != VT_EMPTY) { inkvs.insert({ L"CommunicationStatus", inParams.CommunicationStatus }); }
if (inParams.CreationClassName.vt != VT_EMPTY) { inkvs.insert({ L"CreationClassName", inParams.CreationClassName }); }
if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
if (inParams.DetailedStatus.vt != VT_EMPTY) { inkvs.insert({ L"DetailedStatus", inParams.DetailedStatus }); }
if (inParams.ElementName.vt != VT_EMPTY) { inkvs.insert({ L"ElementName", inParams.ElementName }); }
if (inParams.EnabledDefault.vt != VT_EMPTY) { inkvs.insert({ L"EnabledDefault", inParams.EnabledDefault }); }
if (inParams.EnabledState.vt != VT_EMPTY) { inkvs.insert({ L"EnabledState", inParams.EnabledState }); }
if (inParams.HealthState.vt != VT_EMPTY) { inkvs.insert({ L"HealthState", inParams.HealthState }); }
if (inParams.InstallDate.vt != VT_EMPTY) { inkvs.insert({ L"InstallDate", inParams.InstallDate }); }
if (inParams.InstanceID.vt != VT_EMPTY) { inkvs.insert({ L"InstanceID", inParams.InstanceID }); }
if (inParams.Name.vt != VT_EMPTY) { inkvs.insert({ L"Name", inParams.Name }); }
if (inParams.OperatingStatus.vt != VT_EMPTY) { inkvs.insert({ L"OperatingStatus", inParams.OperatingStatus }); }
if (inParams.OperationalStatus.vt != VT_EMPTY) { inkvs.insert({ L"OperationalStatus", inParams.OperationalStatus }); }
if (inParams.OtherEnabledState.vt != VT_EMPTY) { inkvs.insert({ L"OtherEnabledState", inParams.OtherEnabledState }); }
if (inParams.PrimaryOwnerContact.vt != VT_EMPTY) { inkvs.insert({ L"PrimaryOwnerContact", inParams.PrimaryOwnerContact }); }
if (inParams.PrimaryOwnerName.vt != VT_EMPTY) { inkvs.insert({ L"PrimaryOwnerName", inParams.PrimaryOwnerName }); }
if (inParams.PrimaryStatus.vt != VT_EMPTY) { inkvs.insert({ L"PrimaryStatus", inParams.PrimaryStatus }); }
if (inParams.RequestedState.vt != VT_EMPTY) { inkvs.insert({ L"RequestedState", inParams.RequestedState }); }
if (inParams.StartMode.vt != VT_EMPTY) { inkvs.insert({ L"StartMode", inParams.StartMode }); }
if (inParams.Started.vt != VT_EMPTY) { inkvs.insert({ L"Started", inParams.Started }); }
if (inParams.Status.vt != VT_EMPTY) { inkvs.insert({ L"Status", inParams.Status }); }
if (inParams.StatusDescriptions.vt != VT_EMPTY) { inkvs.insert({ L"StatusDescriptions", inParams.StatusDescriptions }); }
if (inParams.SystemCreationClassName.vt != VT_EMPTY) { inkvs.insert({ L"SystemCreationClassName", inParams.SystemCreationClassName }); }
if (inParams.SystemName.vt != VT_EMPTY) { inkvs.insert({ L"SystemName", inParams.SystemName }); }
if (inParams.TimeOfLastStateChange.vt != VT_EMPTY) { inkvs.insert({ L"TimeOfLastStateChange", inParams.TimeOfLastStateChange }); }
if (inParams.TransitioningToState.vt != VT_EMPTY) { inkvs.insert({ L"TransitioningToState", inParams.TransitioningToState }); }
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




////////////////////////// Method: RequestStateChange ///////////////////////////
struct RequestStateChange_InParams
{
CComVariant RequestedState;
CComVariant TimeoutPeriod;
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
struct RequestStateChange_OutResturns
{
CComVariant Job;
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
HRESULT RequestStateChange(IWbemClassObject* obj, RequestStateChange_InParams& inParams, RequestStateChange_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.RequestedState.vt != VT_EMPTY) { inkvs.insert({ L"RequestedState", inParams.RequestedState }); }
if (inParams.TimeoutPeriod.vt != VT_EMPTY) { inkvs.insert({ L"TimeoutPeriod", inParams.TimeoutPeriod }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"RequestStateChange", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Job"].vt != VT_EMPTY) { outReturns.Job = outkvs[L"Job"]; }
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


////////////////////////// Method: StartService ///////////////////////////
struct StartService_InParams
{
} ;
struct StartService_OutResturns
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
HRESULT StartService(IWbemClassObject* obj, StartService_InParams& inParams, StartService_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"StartService", inkvs, outkvs, &spout);

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


////////////////////////// Method: StopService ///////////////////////////
struct StopService_InParams
{
} ;
struct StopService_OutResturns
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
HRESULT StopService(IWbemClassObject* obj, StopService_InParams& inParams, StopService_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;


CComPtr<IWbemClassObject> spout;
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"StopService", inkvs, outkvs, &spout);

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


////////////////////////// Method: CreateSnapshot ///////////////////////////
struct CreateSnapshot_InParams
{
CComVariant Collection;
CComVariant ResultingSnapshotCollection;
CComVariant SnapshotSettings;
CComVariant SnapshotType;
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
CComVariant Job;
CComVariant ResultingSnapshotCollection;
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

if (inParams.Collection.vt != VT_EMPTY) { inkvs.insert({ L"Collection", inParams.Collection }); }
if (inParams.ResultingSnapshotCollection.vt != VT_EMPTY) { inkvs.insert({ L"ResultingSnapshotCollection", inParams.ResultingSnapshotCollection }); }
if (inParams.SnapshotSettings.vt != VT_EMPTY) { inkvs.insert({ L"SnapshotSettings", inParams.SnapshotSettings }); }
if (inParams.SnapshotType.vt != VT_EMPTY) { inkvs.insert({ L"SnapshotType", inParams.SnapshotType }); }
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
if (outkvs[L"Job"].vt != VT_EMPTY) { outReturns.Job = outkvs[L"Job"]; }
if (outkvs[L"ResultingSnapshotCollection"].vt != VT_EMPTY) { outReturns.ResultingSnapshotCollection = outkvs[L"ResultingSnapshotCollection"]; }
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


////////////////////////// Method: DestroySnapshot ///////////////////////////
struct DestroySnapshot_InParams
{
CComVariant AffectedSnapshotCollection;
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
struct DestroySnapshot_OutResturns
{
CComVariant Job;
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
HRESULT DestroySnapshot(IWbemClassObject* obj, DestroySnapshot_InParams& inParams, DestroySnapshot_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AffectedSnapshotCollection.vt != VT_EMPTY) { inkvs.insert({ L"AffectedSnapshotCollection", inParams.AffectedSnapshotCollection }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"DestroySnapshot", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Job"].vt != VT_EMPTY) { outReturns.Job = outkvs[L"Job"]; }
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


////////////////////////// Method: ExportSnapshot ///////////////////////////
struct ExportSnapshot_InParams
{
CComVariant ExportDirectory;
CComVariant ExportSettingData;
CComVariant SnapshotCollection;
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
struct ExportSnapshot_OutResturns
{
CComVariant Job;
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
HRESULT ExportSnapshot(IWbemClassObject* obj, ExportSnapshot_InParams& inParams, ExportSnapshot_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.ExportDirectory.vt != VT_EMPTY) { inkvs.insert({ L"ExportDirectory", inParams.ExportDirectory }); }
if (inParams.ExportSettingData.vt != VT_EMPTY) { inkvs.insert({ L"ExportSettingData", inParams.ExportSettingData }); }
if (inParams.SnapshotCollection.vt != VT_EMPTY) { inkvs.insert({ L"SnapshotCollection", inParams.SnapshotCollection }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"ExportSnapshot", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Job"].vt != VT_EMPTY) { outReturns.Job = outkvs[L"Job"]; }
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


////////////////////////// Method: ApplySnapshot ///////////////////////////
struct ApplySnapshot_InParams
{
CComVariant SnapshotCollection;
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
struct ApplySnapshot_OutResturns
{
CComVariant Job;
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
HRESULT ApplySnapshot(IWbemClassObject* obj, ApplySnapshot_InParams& inParams, ApplySnapshot_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.SnapshotCollection.vt != VT_EMPTY) { inkvs.insert({ L"SnapshotCollection", inParams.SnapshotCollection }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"ApplySnapshot", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Job"].vt != VT_EMPTY) { outReturns.Job = outkvs[L"Job"]; }
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


////////////////////////// Method: ConvertToReferencePoint ///////////////////////////
struct ConvertToReferencePoint_InParams
{
CComVariant AffectedSnapshotCollection;
CComVariant ResultingReferencePointCollection;
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
struct ConvertToReferencePoint_OutResturns
{
CComVariant Job;
CComVariant ResultingReferencePointCollection;
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
HRESULT ConvertToReferencePoint(IWbemClassObject* obj, ConvertToReferencePoint_InParams& inParams, ConvertToReferencePoint_OutResturns& outReturns)
{
::SmartLib::SmlWmi::KVSet inkvs;
::SmartLib::SmlWmi::KVSet outkvs;

if (inParams.AffectedSnapshotCollection.vt != VT_EMPTY) { inkvs.insert({ L"AffectedSnapshotCollection", inParams.AffectedSnapshotCollection }); }
if (inParams.ResultingReferencePointCollection.vt != VT_EMPTY) { inkvs.insert({ L"ResultingReferencePointCollection", inParams.ResultingReferencePointCollection }); }
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
HRESULT hr = _smlwmi->InvokeMethod(obj, CLASS_NAME, L"ConvertToReferencePoint", inkvs, outkvs, &spout);

if (SUCCEEDED(hr))
{
if (outkvs[L"Job"].vt != VT_EMPTY) { outReturns.Job = outkvs[L"Job"]; }
if (outkvs[L"ResultingReferencePointCollection"].vt != VT_EMPTY) { outReturns.ResultingReferencePointCollection = outkvs[L"ResultingReferencePointCollection"]; }
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
