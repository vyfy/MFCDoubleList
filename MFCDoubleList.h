
// MFCDoubleList.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CMFCDoubleListApp:
// О реализации данного класса см. MFCDoubleList.cpp
//

class CMFCDoubleListApp : public CWinApp
{
public:
	CMFCDoubleListApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CMFCDoubleListApp theApp;