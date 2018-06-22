#include<iostream>
#include<stdio.h>
#include"Number.h"


using namespace std;


int main()
{
	double r1,r2,c11,c12,c21,c22;
	int i1,i2;
	
	
	cout<<"测试RealNumber类:"<<endl;
	cout<<"输入实数1："<<endl;
	cin>>r1;
	cout<<"输入实数2："<<endl;
	cin>>r2;
	RealNumber R1(r1),R2(r2),R3=R1.add(R2),R4=R1.mul(R2);
	//add函数 
	R1.print();
	cout<<"+";
	R2.print();
	cout<<"=";
	R3.print();
	cout<<endl;
	//mul函数
	R1.print();
	cout<<"*";
	R2.print();
	cout<<"=";
	R4.print();
	cout<<endl;
	
	
	cout<<"测试IntegerNumber类"<<endl;
	cout<<"输入整数1："<<endl;
	cin>>i1;
	cout<<"输入整数2："<<endl;
	cin>>i2;
	IntegerNumber I1(i1),I2(i2),I3=I1.add(I2),I4=I1.mul(I2);
	//add函数 
	I1.print();
	cout<<"+";
	I2.print();
	cout<<"=";
	I3.print();
	cout<<endl;
	//mul函数
	I1.print();
	cout<<"*";
	I2.print();
	cout<<"=";
	I4.print();
	cout<<endl;	 
	
	
	
	cout<<"测试ComplexNumber类："<<endl;
	cout<<"输入实部1："<<endl;
	cin>>c11;
	cout<<"输入虚部1："<<endl;
	cin>>c12;
	cout<<"输入实部2："<<endl;
	cin>>c21;
	cout<<"输入虚部2："<<endl;
	cin>>c22;
	ComplexNumber C1(c11,c12),C2(c21,c22),C3=C1.add(C2),C4=C1.mul(C2);
	//add函数 
	C1.print();
	cout<<"+";
	C2.print();
	cout<<"=";
	C3.print();
	cout<<endl;
	//mul函数
	C1.print();
	cout<<"*";
	C2.print();
	cout<<"=";
	C4.print();
	cout<<endl;	 
	
	
	system("pause");
	return 0; 
} 
