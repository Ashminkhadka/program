#include<iostream>
#include<iomanip>
using namespace std;
int main()
{	
	char name[10];
	int roll,marks[5],total=0,avg;
	cout<<"Enter student name:"<<endl;
	cin>>name;
	cout<<"Enter roll number:"<<endl;
	cin>>roll;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter marks of subject"<<i+1<<":";
		cin>>marks[i];
		total=total+marks[i];
	}
	avg=total/5;
	cout<<"\n\nStudent Name:"<<name<<endl;
	cout<<"Roll no:"<<roll<<endl;
	cout<<"Total:"<<total<<endl<<"Average:"<<avg;
}
