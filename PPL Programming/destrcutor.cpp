#include<iostream>
using namespace std;
class Demo
{
	public:int a;
	
	Demo(int a)
	{
	   this->a=a;
	   cout<<"constructor for="<<this<<endl;
	}
	~Demo()
	{
		cout<<"Desctructor for"<<this<<endl;
	}
	
};
int main()
{
	Demo d1(23);
	Demo d2(55);
	Demo d3(34);
	return 0;
}
