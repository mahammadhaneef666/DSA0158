#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number:";
	cin>>num;
	int slow=num;
	int fast=num;
	while(true){
		int sum=0;
		int temp=sum;

		while(temp>0)
		{
			int digit=temp%10;
			sum=sum+digit*digit;
			temp=temp/10;
		}
		slow=sum;
	}
	for(i=0;i<2;i++){
		int temp=sum;
		int sum=0;
		while(temp>0)
		{
			int digit=temp%10;
			sum=sum+digit*digit;
			temp=temp/10;
			
		}
		fast=sum;
	}
	if(fast==1)
	{
		cout<<num<<"is happy number"<<endl;
		break;
	}
	if(fast==slow)
	{
		cout<<num<<"is nott happy number"<<endl;
	}
	return 0;
}
