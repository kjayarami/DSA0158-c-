#include<iostream>
using namespace std;
bool isperfectnumber(int num){
	int sum = 0;
	for(int i=1;i<=num/2;++i){
		if(num%i==0){
			sum+=0;
		}
	}
	return (sum == num);
}
int main()
{
	int number;
	cout<<"enter a number:";
	cin>>number;
	if(isperfectnumber(number)){
		cout<<number<<"is perfect number";
	}else{
		cout<<number<<"is not a perfect number" ;
	}
	return 0;
	
}