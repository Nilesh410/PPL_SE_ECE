	#include <iostream>
	using namespace std;
	
	int add(int x,int y);
	
	int sub(int x,int y,int z)
	{
	   	int result_sub=z-add(x,y);
	   	return result_sub;
	}
	int main() {
	    cout<<sub(5,10,30);
	    return 0;
	}
	int add(int x,int y)
	{
		return x+y;
	}
	
	
	
