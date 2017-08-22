#pragma once
#ifndef Factory_h__
#define Factory_h__

#include <string>

//产品基类
class IProduct
{
public:
	virtual ~IProduct();
	virtual void Operation() = 0;
};

class CProduct1 :public IProduct
{
public:
	virtual void Operation();
};

class CProduct2 :public IProduct
{
public:
	virtual void Operation();
};

// 工厂形式1，为每个IProduct类提供一个创建接口，这样IFactoryA的接口永远不会封闭---
class IFactoryA
{
public:
	~IFactoryA();
	virtual IProduct* CreateProduct1() = 0;
	virtual IProduct* CreateProduct2() = 0;
};

class CFactoryA :public IFactoryA
{
public:
	virtual IProduct *CreateProduct1();
	virtual IProduct *CreateProduct2();
};

//工厂形式2，参数化创建接口，这样根据参数创建不同的IProduct
class IFactoryB
{
public:
	~IFactoryB();
	virtual IProduct *CreateProduct(const std::string &strType) = 0;
};

class CFactoryB:public IFactoryB
{
public:
	virtual IProduct *CreateProduct(const std::string &strType);
};


//工厂形式3，模板化工厂类，根据模板参数T创建具体的Product。
template <typename T>
class CFactoryC
{
public:
	T* CreateProduct()
	{
		return new T();
	}
};



#endif // Factory_h__