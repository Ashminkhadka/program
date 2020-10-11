#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<< "Truth Table:\n";
	cout<< "X\t Y\t Z\t\t XY+Z\n";
	for(int i = 0 ; i<=1 ; i++)
	for(int j = 0; j<=1; j++)
	for(int k = 0; k<=1; k++)
	{
		cout<< i<< "\t"<< j << "\t" << k << "\t\t";
		if( (i == 1 && j == 1) || k == 1)
		cout<< 1;	
		else
		cout<< 0;
		cout<<"\n";
	}
	getch();
	return 0;
}
