#include<iostream>
using namespace std;
int main()
 {
	int n,bin[500],i,j,num,rem;
	cout<<"Enter any decimal number: ";
	cin>>n;
	num=n;
	for(i=0;n>0;i++)
	{
	    rem=n%2;
	    bin[i]=rem;
	    n=n/2;
	}
	cout<<"The Binary number of "<<num<<" is ";
	for(j=i-1;j>=0;j--)
	    cout<<bin[j];
	}
