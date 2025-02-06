#include<iostream>
using namespace std;

class Demo
{
	public:int a;
	Demo(int a)
	{
	   this->a=a;
	  
	}
	Demo( const Demo & d)
	{
		this->a=d.a;
	}
	void display()
	{
		 cout<<"a="<<a<<endl;
		 cout<<"object at ="<<this<<endl;
	}
};
int main ()
{
	 Demo d1(23);
	 Demo d2(d1);
	 Demo d3=d2;
	 d1.display();
	 d2.display();
	 d3.display();
	 return 0;
}
