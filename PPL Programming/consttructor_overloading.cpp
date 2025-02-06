#include<iostream>
using namespace std;

class Demo
{
	public: int i,j;
	Demo()
	{
		cout<<"i="<<i<<"j="<<j;
	}
	Demo(int x,int y)
	{
		i=x;
		j=y;
		cout<<"i="<<i<<"j="<<j;
	}
	void display()
	{
		cout<<"Hello";
	}
};
int main ()
{
	Demo d1;
	//Demo d2(12,13);
	d1.display();
}
