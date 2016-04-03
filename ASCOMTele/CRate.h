// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

//#import "C:\\Windows\\assembly\\GAC_MSIL\\ASCOM.DeviceInterfaces\\6.0.0.0__565de7938946fba7\\ASCOM.DeviceInterfaces.tlb" no_namespace
// CRate wrapper class

#define CACHE_DISPID(name) \
	static DISPID id;\
	if (id == NULL) {\
	CString ss = (name);\
	BSTR szMember = ss.AllocSysString();\
	m_lpDispatch->GetIDsOfNames(IID_NULL, &szMember, 1, LOCALE_USER_DEFAULT, &id);\
	SysFreeString(szMember);\
		}



class CRate : public COleDispatchDriver
{
public:
	CRate(){} // Calls COleDispatchDriver default constructor
	CRate(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRate(const CRate& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IRate methods
public:
	void Dispose()
	{
		CACHE_DISPID(L"Dispose");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	double get_Maximum()
	{
		CACHE_DISPID(L"Maximum");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Maximum(double newValue)
	{
		CACHE_DISPID(L"Maximum");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_Minimum()
	{
		CACHE_DISPID(L"Minimum");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Minimum(double newValue)
	{
		CACHE_DISPID(L"Minimum");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IRate properties
public:

};
