#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter an integer:";
	cin>>num;
	string result = (num % 3 == 0)?"the number is bivisible by 3":"the number is not divisible by 3";
	cout<<result;
	return 0;
}