
// GraphControlDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CGraphControlDemoApp:
// �� Ŭ������ ������ ���ؼ��� GraphControlDemo.cpp�� �����Ͻʽÿ�.
//

class CGraphControlDemoApp : public CWinApp
{
public:
	CGraphControlDemoApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CGraphControlDemoApp theApp;