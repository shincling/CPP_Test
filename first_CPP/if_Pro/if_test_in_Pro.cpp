#include <iostream>
using namespace std;

int main()
{
	double aa;
	cout <<"Enter a number:";
	cin >> aa;
	if (aa>2)
		cout <<"This number is over 2!"<<endl;
	else
		cout <<"This number is less or equal 2"<<endl;
	//cin >>aa;
	if (aa<0)
		cout <<"Negtive"<<endl;
	else if (aa<5)
	{
		cout <<"Positive"<<endl;
		cout <<"Positive again"<<endl;
	}
	else
		cout <<"Positive and more than 5"<<endl;
	system("pause");//暂停，使得窗口不直接退出
	return 0;
}
