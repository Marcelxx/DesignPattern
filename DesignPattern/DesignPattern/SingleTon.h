#pragma once
#ifndef SingleTon_h__
#define SingleTon_h__

#include <string>

class CSingleTon
{
public:
	virtual ~CSingleTon();
	static CSingleTon *GetInstance();
	static void ExitInstance();
protected:
	CSingleTon();
private:
	static CSingleTon *m_hInstance;
};

CSingleTon *CSingleTon::m_hInstance = NULL;

#endif // SingleTon_h__