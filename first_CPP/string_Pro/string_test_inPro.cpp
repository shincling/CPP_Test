#include<string>
#include<iostream>
using namespace std;

const string LabelSentence="Sentence Order";
const string LabelList="List Order\n";

int main()
{
	string first,middle,last;
	cout<<"Input your name with space:";
	cin>>first>>middle>>last;

	cout<<LabelSentence<<":"<<first<<middle<<last<<endl;
	cout<<LabelList<<":"<<middle<<last<<" "<<first;
	system("pause");
	return 0;
	
}
