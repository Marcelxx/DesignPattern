#pragma once
#ifndef Prototype_h__
#define Prototype_h__

//��¡ģʽ���ṩһ��Clone()�Ľӿڣ�ʵ�����У�Ҫʵ�ֿ������캯����
class IPrototype
{
public:
	virtual ~IPrototype();
	virtual IPrototype *Clone() const = 0;
};

//ͨ���������캯��ʵ�ֿ�¡
class CPrototype
{
public:
	CPrototype();
	CPrototype(const CPrototype &rData);
	virtual ~CPrototype();
	virtual IPrototype *Clone()const;	// return new CPrototype(*this);
};



#endif // Prototype_h__