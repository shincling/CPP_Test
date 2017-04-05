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
	system("pause");//暂停，使得窗口不直接退出
	return 0;
}
