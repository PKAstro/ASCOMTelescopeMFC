
// ASCOMTeleDlg.h : header file
//

#pragma once
#include "afxwin.h"

class CTelescopeV3;	//forward reference to class

// CASCOMTeleDlg dialog
class CASCOMTeleDlg : public CDialogEx
{
// Construction
public:
	CASCOMTeleDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ASCOMTELE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	/////////////////
	CTelescopeV3 *m_Telescope;

public:
	afx_msg void OnBnClickedChoose();
	CString m_sTelescopeID;
	afx_msg void OnBnClickedDisconnect();
	afx_msg void OnBnClickedConnect();
	CString m_sDescription;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CString m_sRA;
	CString m_sDEC;
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox m_cbRARate;
};
