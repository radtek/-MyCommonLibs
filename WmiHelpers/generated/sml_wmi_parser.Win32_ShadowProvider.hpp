class SML_Win32_ShadowProvider 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"Win32_ShadowProvider" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: Win32_ShadowProvider //////////////////////////
struct SML_Win32_ShadowProvider_Props
{
CComVariant CLSID;
CComVariant Caption;
CComVariant Description;
CComVariant ID;
CComVariant InstallDate;
CComVariant Name;
CComVariant Status;
CComVariant Type;
CComVariant Version;
CComVariant VersionID;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_Win32_ShadowProvider_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"CLSID"].vt != VT_EMPTY) { outReturns.CLSID = outkvs[L"CLSID"]; }
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"ID"].vt != VT_EMPTY) { outReturns.ID = outkvs[L"ID"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"Type"].vt != VT_EMPTY) { outReturns.Type = outkvs[L"Type"]; }
if (outkvs[L"Version"].vt != VT_EMPTY) { outReturns.Version = outkvs[L"Version"]; }
if (outkvs[L"VersionID"].vt != VT_EMPTY) { outReturns.VersionID = outkvs[L"VersionID"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_Win32_ShadowProvider_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"CLSID"].vt != VT_EMPTY) { outReturns.CLSID = outkvs[L"CLSID"]; }
if (outkvs[L"Caption"].vt != VT_EMPTY) { outReturns.Caption = outkvs[L"Caption"]; }
if (outkvs[L"Description"].vt != VT_EMPTY) { outReturns.Description = outkvs[L"Description"]; }
if (outkvs[L"ID"].vt != VT_EMPTY) { outReturns.ID = outkvs[L"ID"]; }
if (outkvs[L"InstallDate"].vt != VT_EMPTY) { outReturns.InstallDate = outkvs[L"InstallDate"]; }
if (outkvs[L"Name"].vt != VT_EMPTY) { outReturns.Name = outkvs[L"Name"]; }
if (outkvs[L"Status"].vt != VT_EMPTY) { outReturns.Status = outkvs[L"Status"]; }
if (outkvs[L"Type"].vt != VT_EMPTY) { outReturns.Type = outkvs[L"Type"]; }
if (outkvs[L"Version"].vt != VT_EMPTY) { outReturns.Version = outkvs[L"Version"]; }
if (outkvs[L"VersionID"].vt != VT_EMPTY) { outReturns.VersionID = outkvs[L"VersionID"]; }
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

HRESULT NewObj(SML_Win32_ShadowProvider_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.CLSID.vt != VT_EMPTY) { inkvs.insert({ L"CLSID", inParams.CLSID }); }
if (inParams.Caption.vt != VT_EMPTY) { inkvs.insert({ L"Caption", inParams.Caption }); }
if (inParams.Description.vt != VT_EMPTY) { inkvs.insert({ L"Description", inParams.Description }); }
if (inParams.ID.vt != VT_EMPTY) { inkvs.insert({ L"ID", inParams.ID }); }
if (inParams.InstallDate.vt != VT_EMPTY) { inkvs.insert({ L"InstallDate", inParams.InstallDate }); }
if (inParams.Name.vt != VT_EMPTY) { inkvs.insert({ L"Name", inParams.Name }); }
if (inParams.Status.vt != VT_EMPTY) { inkvs.insert({ L"Status", inParams.Status }); }
if (inParams.Type.vt != VT_EMPTY) { inkvs.insert({ L"Type", inParams.Type }); }
if (inParams.Version.vt != VT_EMPTY) { inkvs.insert({ L"Version", inParams.Version }); }
if (inParams.VersionID.vt != VT_EMPTY) { inkvs.insert({ L"VersionID", inParams.VersionID }); }
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
