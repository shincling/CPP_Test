#include<string>
#include<iostream>
using namespace std;

const string LabelSentence="Sentence Order";
const string LabelList="List Order\n";

int main()
{
	cout<<(0.1+0.5==0.6);//这个输出是1，没毛病

	string first,middle,last;
	cout<<"Input your name with space:";
	cin>>first>>middle>>last;

	cout<<LabelSentence<<":"<<first<<middle<<last<<endl;
	cout<<LabelList<<":"<<middle<<last<<" "<<first;
	system("pause");
	return 0;
	
}
