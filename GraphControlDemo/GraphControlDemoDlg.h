
// GraphControlDemoDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CGraphControlDemoDlg ��ȭ ����
class CGraphControlDemoDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CGraphControlDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_GRAPHCONTROLDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_pictureBox;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnStnClickedPicturebox();
};
