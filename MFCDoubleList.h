
// MFCDoubleList.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CMFCDoubleListApp:
// � ���������� ������� ������ ��. MFCDoubleList.cpp
//

class CMFCDoubleListApp : public CWinApp
{
public:
	CMFCDoubleListApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CMFCDoubleListApp theApp;