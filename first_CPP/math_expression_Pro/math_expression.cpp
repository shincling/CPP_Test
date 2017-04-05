#include<string>
#include<iostream>
//#include<math.h>
#include<cmath>

using namespace std;

int main()
{
	cout<<4*.3<<endl;
	cout<<4/3<<endl;
	cout<<double(4)/3<<endl;
	cout<<0.1+4/3<<endl;
	double q=9/2;//notice this will cause error,answer with 4.0
	cout<<q<<endl;
	cout<<3.00000<<endl;//the cout will show the 3.0 as 3
	
	int x=3.99999;
	cout<<x<<"\n"<<endl;//direct omit the xiaoshu part

	
	cout<<sqrt(3.0)<<endl;
	cout<<sqrt(4.0)<<endl;
	cout<<fabs(-4.0)<<endl;
	
	system("pause");
	return 0;
}
