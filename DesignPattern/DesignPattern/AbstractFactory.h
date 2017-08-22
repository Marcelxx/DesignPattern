#pragma once
#ifndef AbstractFactory_h__
#define AbstractFactory_h__

//产品A，两个子类
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

//产品B，两个子类
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


//抽闲工厂类，提供创建两类对象的接口
class IAbstractFactory
{
public:
	~IAbstractFactory();

	virtual IProductA *CreateProductA() = 0;
	virtual IProductB *CreateProductB() = 0;
};

//工厂类1，用于创建CProductA1和CProductB1
class CAbstractFactory1 :public IAbstractFactory
{
public:
	virtual IProductA *CreateProductA();	// return new CProductA1();
	virtual IProductB *CreateProductB();	// return new CProductB1();
};

//工厂类2，用于创建CProductA2和CProductB2
class CAbstractFactory2 :public IAbstractFactory
{
public:
	virtual IProductA *CreateProductA();	//return new CProductA2();
	virtual IProductB *CreateProductB();	//return new CProductB2();
};

#endif // AbstractFactory_h__