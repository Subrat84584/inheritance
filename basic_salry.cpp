#include<iostream>
using namespace std;
class Person
{
	protected:
		char name[50],address[100];
		int phone_no;
};
class Employee:public Person
{
	public:
		int eno;
		char ename[50];
};
class manager:public Employee
{
	public:
		char designation[50],deptname[100];
		float basic_salary;
	public:
		void accept_details()
		{
			cout<<"\n enter details of manager";
			cout<<"\n------------------------------";
			cout<<"\n enter employee no.:";
			cin>>eno;
			cout<<"\n enter name";
			cin>>ename;
			cout<<"\n address";
			cin>>address;
			cout<<"\n enter phone number";
			cin>>phone_no;
			cout<<"\n enter designation";
			cin>>designation;
			cout<<"\n enter department name";
			cin>>deptname;
			cout<<"\nBasic salary";
			cin>>basic_salary;
			
		}
};
int main()
{
	int i,cnt,temp;
	manager man[100];
	cout<<"\n how many manager you want to enter ?:";
	cin>>cnt;
	for(i=1;i<=cnt;i++)
	{
		man[i].accept_details();
	}
	temp=0;
	for(i=1;i<=cnt;i++)
	{
		if(man[temp].basic_salary<man[i].basic_salary)
		temp=i;
	}
	cout<<"\n manager with highest salary:"<<man[temp].basic_salary;
	cout<<"\n and manager name is :"<<man[temp].ename;
	return 0;
	
}
