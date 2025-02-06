	# include <iostream>
	using namespace std;
	
	int sum (int n)
	{
		int i, s;
		s=0;
		for(i=1;i<=n;i++)
			s+=i;
		return s;
	}
	int main ()
	{
		cout<<"Enter the number to find sum of first n number=";
		int num;
		cin>>num;
		int result=sum(5);
		cout<<"Sum of first n number="<<result;
		return 0;
	}
