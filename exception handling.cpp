#include<iostream>
using namespace std;
int main()
{
	int d ,n,r;
	cout<<"enter the numerator and denominator"<<endl;
	cin>>n>>d;
	try{
		if(d==0)
		{
			throw d;
		}
	r=n/d;
}
	catch(int z)
	{
		cout<<"Exception : Divided by zero"<<endl;
	}
	cout<<"Division is :"<<r;
	return 0;
}
