#ifndef NUMBER_H
#define NUMBER_H


class Number
{
	public:
		Number(){}
		virtual void print(){};
		virtual Number add(const Number&){}
		virtual Number mul(const Number&){}
		~Number(){}
};




class RealNumber:public Number
{
	public:
		RealNumber(){}
		RealNumber(double);
		virtual void print();
		virtual RealNumber add(const RealNumber&);
		virtual RealNumber mul(const RealNumber&);
		void set(double);
		double getRN();
		~RealNumber(){}
	private:
		double r;
};


class IntegerNumber:public RealNumber
{
	public:
		IntegerNumber(){}
		IntegerNumber(int);
		virtual void print();
		virtual IntegerNumber add(const IntegerNumber&);
		virtual IntegerNumber mul(const IntegerNumber&);
		void set(int);
		int getIN();
		~IntegerNumber(){}
	private:
		int i;
};



class ComplexNumber:public Number
{
	public:
		ComplexNumber(){}
		ComplexNumber(double ,double);
		virtual void print();
		virtual ComplexNumber add(const ComplexNumber&);
		virtual ComplexNumber mul(const ComplexNumber&);
		void set(double,double);
		double getRCN();
		double getCCN();
		~ComplexNumber(){}
	private:
		double rn;
		double cn;
};


#endif 
