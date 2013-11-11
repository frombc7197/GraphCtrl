
// GraphControlDemoDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"


// CGraphControlDemoDlg 대화 상자
class CGraphControlDemoDlg : public CDialogEx
{
// 생성입니다.
public:
	CGraphControlDemoDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_GRAPHCONTROLDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
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
