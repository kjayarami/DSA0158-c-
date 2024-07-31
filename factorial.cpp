#include<iostream>
using namespace std;
int main()
{
	int num;
	int factorial = 1;
	cout<<"enter a positive integer:";
	cin>>num;
	for(int i = 1;i<=num;++i){
		factorial *= i;
	}
	cout<<"factorial of"<<num<<"="<<factorial;
	return 0;
}