#include<iostream>
using namespace std;

const double First=1.0;
const double Twice=2.0;

int main()
{
	int Trible=3;
	double var_1;
	double var_2;
	double var_3;
	cout << "Enter number multiple 1: =>";
	cin >> var_1;
	cout << "Enter number plus 2: =>";
	cin >> var_2;
	cout << "Enter number divide 3: =>";
	cin >> var_3;
	
	cout <<"Another line"<<endl;
	cout <<"测试中文的实现，第一个："<<var_1<<"   second:"<<var_2<<endl;
	cout <<"This is third numer multi 2:  "<<var_3*Twice<<endl;
	cin>>var_1;
	return 0;
}

	