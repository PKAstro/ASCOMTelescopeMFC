
// ASCOMTeleDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ASCOMTele.h"
#include "ASCOMTeleDlg.h"
#include "afxdialogex.h"
#include "CTelescopeV3.h"
#include "CChooser.h"
#include "CAxisRates.h"
#include "CRate.h"
#include "CTrackingRates.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CASCOMTeleDlg dialog



CASCOMTeleDlg::CASCOMTeleDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CASCOMTeleDlg::IDD, pParent)
	, m_sTelescopeID(_T(""))
	, m_sDescription(_T(""))
	, m_sRA(_T(""))
	, m_sDEC(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CASCOMTeleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NAME, m_sTelescopeID);
	DDX_Text(pDX, IDC_DESCRIPTION, m_sDescription);
	DDX_Text(pDX, IDC_EDIT1, m_sRA);
	DDX_Text(pDX, IDC_EDIT2, m_sDEC);
	DDX_Control(pDX, IDC_RARATE, m_cbRARate);
}

BEGIN_MESSAGE_MAP(CASCOMTeleDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHOOSE, &CASCOMTeleDlg::OnBnClickedChoose)
	ON_BN_CLICKED(IDC_DISCONNECT, &CASCOMTeleDlg::OnBnClickedDisconnect)
	ON_BN_CLICKED(IDC_CONNECT, &CASCOMTeleDlg::OnBnClickedConnect)
	ON_WM_TIMER()
	ON_CBN_SELCHANGE(IDC_COMBO1, &CASCOMTeleDlg::OnCbnSelchangeCombo1)
END_MESSAGE_MAP()


// CASCOMTeleDlg message handlers

BOOL CASCOMTeleDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CASCOMTeleDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CASCOMTeleDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CASCOMTeleDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CASCOMTeleDlg::OnBnClickedChoose()
{
	CChooser  ch;
	COleException err;

	if (!ch.CreateDispatch(L"ASCOM.Utilities.Chooser", &err))
	{
		CString msg;
		msg.Format(L"Cannot create Chooser object: 0x%x", err.m_sc);
		AfxMessageBox(msg);
		return;

	}
	ch.put_DeviceType(L"Telescope");
	CString s =  ch.Choose(m_sTelescopeID);
	if (s != "")
		m_sTelescopeID = s;
	
	UpdateData(FALSE);

}


void CASCOMTeleDlg::OnBnClickedDisconnect()
{
	if (m_Telescope != NULL && m_Telescope->get_Connected())
		m_Telescope->put_Connected(FALSE);
	KillTimer(1);
	m_sDescription = "";
	UpdateData(FALSE);
}


void CASCOMTeleDlg::OnBnClickedConnect()
{
	if (m_Telescope != NULL) delete m_Telescope;

	m_Telescope = new CTelescopeV3;
	COleException *err = new COleException;
	if (!m_Telescope->CreateDispatch(m_sTelescopeID, err))
		throw err;

	m_sDescription = m_Telescope->get_DriverInfo();

	m_Telescope->put_Connected(TRUE);

	SetTimer(1, 2000, NULL);	//refresh display

	m_cbRARate.Clear();

	///Populate Right Ascension rate combobox, and select the current rate
	LPDISPATCH trDisp = m_Telescope->get_TrackingRates();
	if (trDisp != NULL)
	{
		CTrackingRates tr;
		long currRate = m_Telescope->get_TrackingRate();	//current rate
		static CString RA_Rates[] = { L"Sideral", L"Lunar", L"Solar", L"King" };

		tr.AttachDispatch(trDisp);
		int rates = tr.get_Count();
		for (int i = 1; i <= rates; ++i)
		{
			long driverate = tr.get_Item(i);
			int idx = m_cbRARate.AddString(RA_Rates[driverate]);
			if (driverate == currRate)
				m_cbRARate.SetCurSel(idx);
		}		
	}
	UpdateData(FALSE);

}


void CASCOMTeleDlg::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 1)
	{
		if (m_Telescope != NULL && m_Telescope->get_Connected())
		{
			double ra, dec;
			ra = m_Telescope->get_RightAscension();
			dec = m_Telescope->get_Declination();
			m_sDEC.Format(L"%lf", dec);
			m_sRA.Format(L"%lf", ra);
			UpdateData(FALSE);
		}
	}

	CDialogEx::OnTimer(nIDEvent);
}


void CASCOMTeleDlg::OnCbnSelchangeCombo1()
{
	// TODO: Add your control notification handler code here
}
