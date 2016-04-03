// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

//#import "C:\\Windows\\assembly\\GAC_MSIL\\ASCOM.DeviceInterfaces\\6.0.0.0__565de7938946fba7\\ASCOM.DeviceInterfaces.tlb" no_namespace
// CTelescopeV3 wrapper class

#define CACHE_DISPID(name) \
	static DISPID id;\
	if (id == NULL) {\
	CString ss = (name);\
	BSTR szMember = ss.AllocSysString();\
	m_lpDispatch->GetIDsOfNames(IID_NULL, &szMember, 1, LOCALE_USER_DEFAULT, &id);\
	SysFreeString(szMember);\
	}\


class CTelescopeV3 : public COleDispatchDriver
{
public:
	CTelescopeV3(){} // Calls COleDispatchDriver default constructor
	CTelescopeV3(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTelescopeV3(const CTelescopeV3& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// ITelescopeV3 methods
public:
	BOOL get_Connected()
	{
		CACHE_DISPID(L"Connected");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Connected(BOOL newValue)
	{
		CACHE_DISPID(L"Connected");
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Description()
	{
		CACHE_DISPID(L"Description");
		CString result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_DriverInfo()
	{
		CACHE_DISPID(L"DriverInfo");
		CString result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_DriverVersion()
	{
		CACHE_DISPID(L"DriverVersion");
		CString result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	short get_InterfaceVersion()
	{
		CACHE_DISPID(L"InterfaceVersion");
		short result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	CString get_Name()
	{
		CACHE_DISPID(L"Name");
		CString result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void SetupDialog()
	{
		CACHE_DISPID(L"SetupDialog");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString Action(LPCTSTR ActionName, LPCTSTR ActionParameters)
	{
		CACHE_DISPID(L"Action");
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(id, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ActionName, ActionParameters);
		return result;
	}
	LPDISPATCH get_SupportedActions()
	{
		CACHE_DISPID(L"SupportedActions");
		LPDISPATCH result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void CommandBlind(LPCTSTR Command, BOOL Raw)
	{
		CACHE_DISPID(L"CommandBlind");
		static BYTE parms[] = VTS_BSTR VTS_BOOL;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Command, Raw);
	}
	BOOL CommandBool(LPCTSTR Command, BOOL Raw)
	{
		CACHE_DISPID(L"CommandBool");
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BOOL;
		InvokeHelper(id, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Command, Raw);
		return result;
	}
	CString CommandString(LPCTSTR Command, BOOL Raw)
	{
		CACHE_DISPID(L"CommandString");
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BOOL;
		InvokeHelper(id, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, Command, Raw);
		return result;
	}
	void Dispose()
	{
		CACHE_DISPID(L"Dispose");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void AbortSlew()
	{
		CACHE_DISPID(L"AbortSlew");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_AlignmentMode()
	{
		CACHE_DISPID(L"AlignmentMode");
		long result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	double get_Altitude()
	{
		CACHE_DISPID(L"Altitude");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	double get_ApertureArea()
	{
		CACHE_DISPID(L"ApertureArea");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	double get_ApertureDiameter()
	{
		CACHE_DISPID(L"ApertureDiameter");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	BOOL get_AtHome()
	{
		CACHE_DISPID(L"AtHome");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_AtPark()
	{
		CACHE_DISPID(L"AtPark");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH AxisRates(long Axis)
	{
		CACHE_DISPID(L"AxisRates");
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(id, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Axis);
		return result;
	}
	double get_Azimuth()
	{
		CACHE_DISPID(L"Azimuth");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanFindHome()
	{
		CACHE_DISPID(L"CanFindHome");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL CanMoveAxis(long Axis)
	{
		CACHE_DISPID(L"CanMoveAxis");
		BOOL result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(id, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Axis);
		return result;
	}
	BOOL get_CanPark()
	{
		CACHE_DISPID(L"CanPark");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanPulseGuide()
	{
		CACHE_DISPID(L"CanPulseGuide");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSetDeclinationRate()
	{
		CACHE_DISPID(L"CanSetDeclinationRate");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSetGuideRates()
	{
		CACHE_DISPID(L"CanSetGuideRates");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSetPark()
	{
		CACHE_DISPID(L"CanSetPark");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSetPierSide()
	{
		CACHE_DISPID(L"CanSetPierSide");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSetRightAscensionRate()
	{
		CACHE_DISPID(L"CanSetRightAscensionRate");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSetTracking()
	{
		CACHE_DISPID(L"CanSetTracking");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSlew()
	{
		CACHE_DISPID(L"CanSlew");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSlewAltAz()
	{
		CACHE_DISPID(L"CanSlewAltAz");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSlewAltAzAsync()
	{
		CACHE_DISPID(L"CanSlewAltAzAsync");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSlewAsync()
	{
		CACHE_DISPID(L"CanSlewAsync");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSync()
	{
		CACHE_DISPID(L"CanSync");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanSyncAltAz()
	{
		CACHE_DISPID(L"CanSyncAltAz");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanUnpark()
	{
		CACHE_DISPID(L"CanUnpark");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	double get_Declination()
	{
		CACHE_DISPID(L"Declination");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	double get_DeclinationRate()
	{
		CACHE_DISPID(L"DeclinationRate");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_DeclinationRate(double newValue)
	{
		CACHE_DISPID(L"DeclinationRate");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long DestinationSideOfPier(double RightAscension, double Declination)
	{
		CACHE_DISPID(L"DestinationSideOfPier");
		long result;
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(id, DISPATCH_METHOD, VT_I4, (void*)&result, parms, RightAscension, Declination);
		return result;
	}
	BOOL get_DoesRefraction()
	{
		CACHE_DISPID(L"DoesRefraction");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DoesRefraction(BOOL newValue)
	{
		CACHE_DISPID(L"DoesRefraction");
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_EquatorialSystem()
	{
		CACHE_DISPID(L"EquatorialSystem");
		long result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void FindHome()
	{
		CACHE_DISPID(L"FindHome");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	double get_FocalLength()
	{
		CACHE_DISPID(L"FocalLength");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	double get_GuideRateDeclination()
	{
		CACHE_DISPID(L"GuideRateDeclination");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_GuideRateDeclination(double newValue)
	{
		CACHE_DISPID(L"GuideRateDeclination");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_GuideRateRightAscension()
	{
		CACHE_DISPID(L"GuideRateRightAscension");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_GuideRateRightAscension(double newValue)
	{
		CACHE_DISPID(L"GuideRateRightAscension");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_IsPulseGuiding()
	{
		CACHE_DISPID(L"IsPulseGuiding");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void MoveAxis(long Axis, double Rate)
	{
		CACHE_DISPID(L"MoveAxis");
		static BYTE parms[] = VTS_I4 VTS_R8;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Axis, Rate);
	}
	void Park()
	{
		CACHE_DISPID(L"Park");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void PulseGuide(long Direction, long Duration)
	{
		CACHE_DISPID(L"PulseGuide");
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Direction, Duration);
	}
	double get_RightAscension()
	{
		CACHE_DISPID(L"RightAscension");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	double get_RightAscensionRate()
	{
		CACHE_DISPID(L"RightAscensionRate");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_RightAscensionRate(double newValue)
	{
		CACHE_DISPID(L"RightAscensionRate");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void SetPark()
	{
		CACHE_DISPID(L"SetPark");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_SideOfPier()
	{
		CACHE_DISPID(L"SideOfPier");
		long result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SideOfPier(long newValue)
	{
		CACHE_DISPID(L"SideOfPier");
		static BYTE parms[] = VTS_I4;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_SiderealTime()
	{
		CACHE_DISPID(L"SiderealTime");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	double get_SiteElevation()
	{
		CACHE_DISPID(L"SiteElevation");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_SiteElevation(double newValue)
	{
		CACHE_DISPID(L"SiteElevation");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_SiteLatitude()
	{
		CACHE_DISPID(L"SiteLatitude");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_SiteLatitude(double newValue)
	{
		CACHE_DISPID(L"SiteLatitude");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_SiteLongitude()
	{
		CACHE_DISPID(L"SiteLongitude");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_SiteLongitude(double newValue)
	{
		CACHE_DISPID(L"SiteLongitude");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Slewing()
	{
		CACHE_DISPID(L"Slewing");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	short get_SlewSettleTime()
	{
		CACHE_DISPID(L"SlewSettleTime");
		short result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_SlewSettleTime(short newValue)
	{
		CACHE_DISPID(L"SlewSettleTime");
		static BYTE parms[] = VTS_I2;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void SlewToAltAz(double Azimuth, double Altitude)
	{
		CACHE_DISPID(L"SlewToAltAz");
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Azimuth, Altitude);
	}
	void SlewToAltAzAsync(double Azimuth, double Altitude)
	{
		CACHE_DISPID(L"SlewToAltAzAsync");
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Azimuth, Altitude);
	}
	void SlewToCoordinates(double RightAscension, double Declination)
	{
		CACHE_DISPID(L"SlewToCoordinates");
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RightAscension, Declination);
	}
	void SlewToCoordinatesAsync(double RightAscension, double Declination)
	{
		CACHE_DISPID(L"SlewToCoordinatesAsync");
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RightAscension, Declination);
	}
	void SlewToTarget()
	{
		CACHE_DISPID(L"SlewToTarget");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SlewToTargetAsync()
	{
		CACHE_DISPID(L"SlewToTargetAsync");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SyncToAltAz(double Azimuth, double Altitude)
	{
		CACHE_DISPID(L"SyncToAltAz");
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Azimuth, Altitude);
	}
	void SyncToCoordinates(double RightAscension, double Declination)
	{
		CACHE_DISPID(L"SyncToCoordinates");
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RightAscension, Declination);
	}
	void SyncToTarget()
	{
		CACHE_DISPID(L"SyncToTarget");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	double get_TargetDeclination()
	{
		CACHE_DISPID(L"TargetDeclination");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_TargetDeclination(double newValue)
	{
		CACHE_DISPID(L"TargetDeclination");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_TargetRightAscension()
	{
		CACHE_DISPID(L"TargetRightAscension");
		double result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_TargetRightAscension(double newValue)
	{
		CACHE_DISPID(L"TargetRightAscension");
		static BYTE parms[] = VTS_R8;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Tracking()
	{
		CACHE_DISPID(L"Tracking");
		BOOL result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Tracking(BOOL newValue)
	{
		CACHE_DISPID(L"Tracking");
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TrackingRate()
	{
		CACHE_DISPID(L"TrackingRate");
		long result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TrackingRate(long newValue)
	{
		CACHE_DISPID(L"TrackingRate");
		static BYTE parms[] = VTS_I4;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_TrackingRates()
	{
		CACHE_DISPID(L"TrackingRates");
		LPDISPATCH result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Unpark()
	{
		CACHE_DISPID(L"Unpark");
		InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	DATE get_UTCDate()
	{
		CACHE_DISPID(L"UTCDate");
		DATE result;
		InvokeHelper(id, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
		return result;
	}
	void put_UTCDate(DATE newValue)
	{
		CACHE_DISPID(L"UTCDate");
		static BYTE parms[] = VTS_DATE;
		InvokeHelper(id, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// ITelescopeV3 properties
public:

};
// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard
