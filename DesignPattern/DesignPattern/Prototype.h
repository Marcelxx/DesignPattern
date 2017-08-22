#pragma once
#ifndef Prototype_h__
#define Prototype_h__

//克隆模式，提供一个Clone()的接口，实现类中，要实现拷贝构造函数。
class IPrototype
{
public:
	virtual ~IPrototype();
	virtual IPrototype *Clone() const = 0;
};

//通过拷贝构造函数实现克隆
class CPrototype
{
public:
	CPrototype();
	CPrototype(const CPrototype &rData);
	virtual ~CPrototype();
	virtual IPrototype *Clone()const;	// return new CPrototype(*this);
};



#endif // Prototype_h__