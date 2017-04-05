#include<string>
#include<iostream>
using namespace std;

int main()
{
	cout<<4*.3<<endl;
	cout<<4/3<<endl;
	cout<<0.1+4/3<<endl;//注意这里，还是有问题的
	
	double q=9/2;//notice this will cause error,answer with 4.0
	cout<<q<<endl;
	cout<<3.00000<<endl;//the cout will show the 3.0 as 3

	system("pause");
	return 0;
}
