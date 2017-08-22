#pragma once
#ifndef Builder_h__
#define Builder_h__

#include <string>

//Product构造分为几个步骤，才能最终创建完整的CProduct
class CProduct
{
public:

};

//Builder负责封装每个步骤的具体创建过程
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


//CDirector封装具体的调用步骤
class CDirector
{
public:
	CDirector(IBuilder *pBuilder);
	CProduct *GetProduct(const std::string &strPara);		//
private:
	IBuilder *m_pBuilder;
};


#endif // Builder_h__