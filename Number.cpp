#include<iostream>
#include<stdio.h>
#include"Number.h"


using namespace std;

//RealNumber 类实现 
RealNumber::RealNumber(double a)
{
	set(a);
}

void RealNumber::set(double a)
{
	r=a;
}


double RealNumber::getRN()
{
	return r;
}

void RealNumber::print()
{
	cout<<r;
}


RealNumber RealNumber::add(const RealNumber& other) 
{
	RealNumber x;
	x.r=this->r+other.r;
	return x;
}

RealNumber RealNumber::mul(const RealNumber& other)
{
	RealNumber x;
	x.r=this->r*other.r;
	return x;
}




//////////////////////////////////////////////////////////
//IntegerNumber类实现



IntegerNumber::IntegerNumber(int a)
{
	set(a);
}



void IntegerNumber::set(int a)
{
	i=a;
}




int IntegerNumber::getIN()
{
	return i;
}



void IntegerNumber::print()
{
	cout<<i;
}



IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
	IntegerNumber x;
	x.i=this->i+other.i;
	return x;
}


IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
	IntegerNumber x;
	x.i=this->i*other.i;
	return x; 
}



///////////////////////////////////////////////
//ComplexNumber类实现




ComplexNumber::ComplexNumber(double a,double b)
{
	set(a,b);
}



void ComplexNumber::set(double a,double b)
{
	rn=a;
	cn=b;
}


double ComplexNumber::getRCN()
{
	return rn;
}



double ComplexNumber::getCCN()
{
	return cn;
}


void ComplexNumber::print()
{
	cout<<rn<<"+"<<cn<<"i"; 
}



ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
	ComplexNumber x;
	x.rn=this->rn+other.rn;
	x.cn=this->cn+other.cn;
	return x; 
}


ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
	ComplexNumber x;
	x.rn=this->rn*other.rn-this->cn*other.cn;
	x.cn=this->rn*other.cn+this->cn*other.rn;
	return x;
}
