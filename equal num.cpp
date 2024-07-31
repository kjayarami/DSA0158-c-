#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	string result = (a == b) ? "The numbers are equal":"The numbers are not equal";
	cout<<result;
	return 0;
}