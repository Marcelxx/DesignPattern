#pragma once
#ifndef AbstractFactory_h__
#define AbstractFactory_h__

//��ƷA����������
class IProductA
{
public:
	virtual ~IProductA();
	virtual void Operation() = 0;
};

class CProductA1 :public IProductA
{
public:
	virtual void Operation();
};

class CProductA2 :public IProductA
{
public:
	virtual void Operation();
};

//��ƷB����������
class IProductB
{
public:
	virtual ~IProductB();
	virtual void Operation() = 0;
};

class CProductB1 :public IProductB
{
public:
	virtual void Operation();
};

class CProductB2 :public IProductB
{
public:
	virtual void Operation();
};


//���й����࣬�ṩ�����������Ľӿ�
class IAbstractFactory
{
public:
	~IAbstractFactory();

	virtual IProductA *CreateProductA() = 0;
	virtual IProductB *CreateProductB() = 0;
};

//������1�����ڴ���CProductA1��CProductB1
class CAbstractFactory1 :public IAbstractFactory
{
public:
	virtual IProductA *CreateProductA();	// return new CProductA1();
	virtual IProductB *CreateProductB();	// return new CProductB1();
};

//������2�����ڴ���CProductA2��CProductB2
class CAbstractFactory2 :public IAbstractFactory
{
public:
	virtual IProductA *CreateProductA();	//return new CProductA2();
	virtual IProductB *CreateProductB();	//return new CProductB2();
};

#endif // AbstractFactory_h__