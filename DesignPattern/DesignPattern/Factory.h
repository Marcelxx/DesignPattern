#pragma once
#ifndef Factory_h__
#define Factory_h__

#include <string>

//��Ʒ����
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

// ������ʽ1��Ϊÿ��IProduct���ṩһ�������ӿڣ�����IFactoryA�Ľӿ���Զ������---
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

//������ʽ2�������������ӿڣ��������ݲ���������ͬ��IProduct
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


//������ʽ3��ģ�廯�����࣬����ģ�����T���������Product��
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