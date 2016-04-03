// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

//#import "C:\\Windows\\assembly\\GAC_MSIL\\ASCOM.Utilities\\6.0.0.0__565de7938946fba7\\ASCOM.Utilities.tlb" no_namespace
// CChooser wrapper class

#define CACHE_DISPID(name) \
	static DISPID id;\
	if (id == NULL) {\
	CString ss = (name);\
	BSTR szMember = ss.AllocSysString();\
	m_lpDispatch->GetIDsOfNames(IID_NULL, &szMember, 1, LOCALE_USER_DEFAULT, &id);\
	SysFreeString(szMember);\
	}


class CChooser : public COleDispatchDriver
{
public:
	CChooser(){} // Calls COleDispatchDriver default constructor
	CChooser(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CChooser(const CChooser& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IChooser methods
public:
	CString get_DeviceType()
	{
		CACHE_DISPID(L"DeviceType");
		CString result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_DeviceType(LPCTSTR newValue)
	{
		CACHE_DISPID(L"DeviceType");
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString Choose(LPCTSTR DriverProgID)
	{
		CACHE_DISPID(L"Choose");
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(id, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, DriverProgID);
		return result;
	}

	// IChooser properties
public:

};
