// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

//#import "C:\\Windows\\assembly\\GAC_MSIL\\ASCOM.DeviceInterfaces\\6.0.0.0__565de7938946fba7\\ASCOM.DeviceInterfaces.tlb" no_namespace
// CTrackingRates wrapper class
#define CACHE_DISPID(name) \
	static DISPID id;\
	if (id == NULL) {\
	CString ss = (name);\
	BSTR szMember = ss.AllocSysString();\
	m_lpDispatch->GetIDsOfNames(IID_NULL, &szMember, 1, LOCALE_USER_DEFAULT, &id);\
	SysFreeString(szMember);\
				}
class CTrackingRates : public COleDispatchDriver
{
public:
	CTrackingRates(){} // Calls COleDispatchDriver default constructor
	CTrackingRates(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTrackingRates(const CTrackingRates& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ITrackingRates methods
public:
	long get_Item(long index)
	{
		CACHE_DISPID(L"Item");
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, index);
		return result;
	}
	long get_Count()
	{
		CACHE_DISPID(L"Count");
		long result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPUNKNOWN GetEnumerator()
	{
		CACHE_DISPID(L"GetEnumerator");
		LPUNKNOWN result;
		InvokeHelper(id, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	void Dispose()
	{
		CACHE_DISPID(L"Dispose");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// ITrackingRates properties
public:

};
