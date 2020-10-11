#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i, j;
	char ch;
	for(i=1;i<=4;i++)
	{
		cout<<"\n";
		ch='A';
		for(j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
	}
	return 0;
}
