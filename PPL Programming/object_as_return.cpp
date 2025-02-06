#include<iostream>
#include<typeinfo>
using namespace std;


class Complex
{
	public :double real,imag;
	Complex()
	{
		real=0.0;
		imag=0.0;
	}
	Complex(double real,double imag)
	{
		this->real=real;
		this->imag=imag;
	}
	Complex add (Complex  C1,Complex  C2)
	{
		real=C1.real+C2.real;
		imag=C1.imag+C2.imag;
		//return this ;
		return Complex(real,imag);
	}
	
	Complex operator+(Complex & C2)
	{
		return Complex(real+C2.real,imag+C2.imag);
	}
	void display()
	{
		cout<<"real="<<real<<endl;
		cout<<"imag="<<imag<<endl;
		cout<<typeid(this).name();
	}
};

int main ()
{
	Complex c1(12.5,23.5);
	Complex c2(23.5,12.5);
	//Complex c3=c3.add(c1,c2);
	Complex c3=c1+c2;
	c3.display();
	return 0;
}
