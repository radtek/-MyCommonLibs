class SML_MSFT_SmbConnection 
 { 
 public: 
 const LPCTSTR CLASS_NAME{ L"MSFT_SmbConnection" }; 
 SmartLib::counted_ptr<SmartLib::SmlWmi> _smlwmi; 


////////////////////////// Properties: MSFT_SmbConnection //////////////////////////
struct SML_MSFT_SmbConnection_Props
{
CComVariant ContinuouslyAvailable;
CComVariant Credential;
CComVariant Dialect;
CComVariant Encrypted;
CComVariant NumOpens;
CComVariant Redirected;
CComVariant ServerName;
CComVariant ShareName;
CComVariant Signed;
CComVariant SmbInstance;
CComVariant UserName;
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
HRESULT Enum(LPCTSTR wherecond, std::vector<CComPtr<IWbemClassObject>>& objects, std::vector<SML_MSFT_SmbConnection_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumInstances(CLASS_NAME, wherecond, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"ContinuouslyAvailable"].vt != VT_EMPTY) { outReturns.ContinuouslyAvailable = outkvs[L"ContinuouslyAvailable"]; }
if (outkvs[L"Credential"].vt != VT_EMPTY) { outReturns.Credential = outkvs[L"Credential"]; }
if (outkvs[L"Dialect"].vt != VT_EMPTY) { outReturns.Dialect = outkvs[L"Dialect"]; }
if (outkvs[L"Encrypted"].vt != VT_EMPTY) { outReturns.Encrypted = outkvs[L"Encrypted"]; }
if (outkvs[L"NumOpens"].vt != VT_EMPTY) { outReturns.NumOpens = outkvs[L"NumOpens"]; }
if (outkvs[L"Redirected"].vt != VT_EMPTY) { outReturns.Redirected = outkvs[L"Redirected"]; }
if (outkvs[L"ServerName"].vt != VT_EMPTY) { outReturns.ServerName = outkvs[L"ServerName"]; }
if (outkvs[L"ShareName"].vt != VT_EMPTY) { outReturns.ShareName = outkvs[L"ShareName"]; }
if (outkvs[L"Signed"].vt != VT_EMPTY) { outReturns.Signed = outkvs[L"Signed"]; }
if (outkvs[L"SmbInstance"].vt != VT_EMPTY) { outReturns.SmbInstance = outkvs[L"SmbInstance"]; }
if (outkvs[L"UserName"].vt != VT_EMPTY) { outReturns.UserName = outkvs[L"UserName"]; }
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

HRESULT EnumAssociators(LPCTSTR parentClass, LPCTSTR propName, LPCTSTR propValue, LPCTSTR assocClass, std::vector<CComPtr<IWbemClassObject> >& objects, std::vector<SML_MSFT_SmbConnection_Props>& props)
{
std::vector<::SmartLib::SmlWmi::KVSet> veckvs;
HRESULT hr = _smlwmi->EnumAssociators(parentClass, propName, propValue, assocClass, objects, veckvs);

props.resize(veckvs.size());
for (int ii = 0; ii< veckvs.size(); ++ ii)
{
auto& outkvs = veckvs[ii];
auto& outReturns = props[ii];
if (outkvs[L"ContinuouslyAvailable"].vt != VT_EMPTY) { outReturns.ContinuouslyAvailable = outkvs[L"ContinuouslyAvailable"]; }
if (outkvs[L"Credential"].vt != VT_EMPTY) { outReturns.Credential = outkvs[L"Credential"]; }
if (outkvs[L"Dialect"].vt != VT_EMPTY) { outReturns.Dialect = outkvs[L"Dialect"]; }
if (outkvs[L"Encrypted"].vt != VT_EMPTY) { outReturns.Encrypted = outkvs[L"Encrypted"]; }
if (outkvs[L"NumOpens"].vt != VT_EMPTY) { outReturns.NumOpens = outkvs[L"NumOpens"]; }
if (outkvs[L"Redirected"].vt != VT_EMPTY) { outReturns.Redirected = outkvs[L"Redirected"]; }
if (outkvs[L"ServerName"].vt != VT_EMPTY) { outReturns.ServerName = outkvs[L"ServerName"]; }
if (outkvs[L"ShareName"].vt != VT_EMPTY) { outReturns.ShareName = outkvs[L"ShareName"]; }
if (outkvs[L"Signed"].vt != VT_EMPTY) { outReturns.Signed = outkvs[L"Signed"]; }
if (outkvs[L"SmbInstance"].vt != VT_EMPTY) { outReturns.SmbInstance = outkvs[L"SmbInstance"]; }
if (outkvs[L"UserName"].vt != VT_EMPTY) { outReturns.UserName = outkvs[L"UserName"]; }
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

HRESULT NewObj(SML_MSFT_SmbConnection_Props & inParams, CComVariant & var)

{
::SmartLib::SmlWmi::KVSet inkvs;
if (inParams.ContinuouslyAvailable.vt != VT_EMPTY) { inkvs.insert({ L"ContinuouslyAvailable", inParams.ContinuouslyAvailable }); }
if (inParams.Credential.vt != VT_EMPTY) { inkvs.insert({ L"Credential", inParams.Credential }); }
if (inParams.Dialect.vt != VT_EMPTY) { inkvs.insert({ L"Dialect", inParams.Dialect }); }
if (inParams.Encrypted.vt != VT_EMPTY) { inkvs.insert({ L"Encrypted", inParams.Encrypted }); }
if (inParams.NumOpens.vt != VT_EMPTY) { inkvs.insert({ L"NumOpens", inParams.NumOpens }); }
if (inParams.Redirected.vt != VT_EMPTY) { inkvs.insert({ L"Redirected", inParams.Redirected }); }
if (inParams.ServerName.vt != VT_EMPTY) { inkvs.insert({ L"ServerName", inParams.ServerName }); }
if (inParams.ShareName.vt != VT_EMPTY) { inkvs.insert({ L"ShareName", inParams.ShareName }); }
if (inParams.Signed.vt != VT_EMPTY) { inkvs.insert({ L"Signed", inParams.Signed }); }
if (inParams.SmbInstance.vt != VT_EMPTY) { inkvs.insert({ L"SmbInstance", inParams.SmbInstance }); }
if (inParams.UserName.vt != VT_EMPTY) { inkvs.insert({ L"UserName", inParams.UserName }); }
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
