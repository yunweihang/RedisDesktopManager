
// RedisDesktopManager.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRedisDesktopManagerApp:
// �йش����ʵ�֣������ RedisDesktopManager.cpp
//

class CRedisDesktopManagerApp : public CWinApp
{
public:
	CRedisDesktopManagerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRedisDesktopManagerApp theApp;