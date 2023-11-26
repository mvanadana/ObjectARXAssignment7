// Assignment7.h : main header file for the Assignment7 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>

// CAssignment7App
// See Assignment7.cpp for the implementation of this class
//

class CAssignment7App : public CWinApp
{
public:
	CAssignment7App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
