#pragma once
#ifndef Builder_h__
#define Builder_h__

#include <string>

//Product�����Ϊ�������裬�������մ���������CProduct
class CProduct
{
public:

};

//Builder�����װÿ������ľ��崴������
class IBuilder
{
public:
	virtual ~IBuilder();
	virtual void BuildPartA(const std::string &strPara) =0;
	virtual void BuildPartB(const std::string &strPara) = 0;
	virtual void BuildPartC(const std::string &strPara) = 0;
	virtual CProduct *GetProduct() = 0;
};

class CBuilder
{
public:
	virtual void BuildPartA(const std::string &strPara);
	virtual void BuildPartB(const std::string &strPara);
	virtual void BuildPartC(const std::string &strPara);
	virtual CProduct *GetProduct();
};


//CDirector��װ����ĵ��ò���
class CDirector
{
public:
	CDirector(IBuilder *pBuilder);
	CProduct *GetProduct(const std::string &strPara);		//
private:
	IBuilder *m_pBuilder;
};


#endif // Builder_h__