#include<iostream>
#include<stdio.h>
using namespace std;
class emp
{
	public:
	int empno;
    char empname[30];
		void get()
		{
			cout<<"\n enter emp no  :";
			cin>>empno;
			cout<<"\n enter emp name :";
			cin>>empname;
		}
		
};
class fulltime:public emp
{
	public:
		float daily_rate;
		int days;
		int salary;
		void getdata()
		{
			cout<<"\n Enter daily rate";
			cin>>daily_rate;
			cout<<"\n enter no of days";
			cin>>days;
		}
		void cal()
		{
			salary=daily_rate*days;
			cout<<"\n Salary:"<<salary;
		}
		void show()
		{
			cout<<"\n ----------------------\n";
			cout<<"\n Emp number  : "<<empno;
			cout<<"\n emp name: "<<empname;
			cout<<"\n salary :"<<salary;
			cout<<"\n starus : Fulltime";
			cout<<"\n --------------------------------\n";
		}
};
class parttime:public emp
{
	public:
		int hourly_rate;
		int working_hours;
		int salary1;
		public:
			void get1()
			{
				cout<<"\n enter hourly rate";
				cin>>hourly_rate;
				cout<<"\n enter working hours";
				cin>>working_hours;
			}
			void call()
			{
				salary1=hourly_rate*working_hours;
				cout<<"\n salary :"<<salary1<<endl;
			}
			void show1()
			{
				cout<<"\n -----------------------------";
				cout<<"\n emp no   :"<<empno;
				cout<<"\n empname  :"<<empname;
				cout<<"\n salary  :"<<salary1;
				cout<<"\n starus   :  part time";
				cout<<"\n---------------------------------";
			}
};
int main()
{
	int var=0;
	int var1=0;
	fulltime f1[5];
	parttime p1[5];
	int x,i;
	do
	{
		cout<<"\n ";
		cout<<"\n 1.enter record ";
		cout<<"\n 2.display record";
		cout<<"\n 3.search record";
		cout<<"]n 4.quit";
		cout<<"\n enter your choice:";
		cin>>x;
		switch(x)
		{
			case 1:
				int y;
				cout<<"\n 1. fulltime employee";
				cout<<"\n 2.parttime employee";
				cin>>y;
				switch(y)
				{
					case 1:
						f1[var].get();
						f1[var].getdata();
						f1[var].cal();
						var++;
						break;
					case 2:
						p1[var1].get();
						p1[var1].get1();
						p1[var1].call();
						var1++;
						break;
				}
				break;
				case 2:
					for(i=0;i<var;i++)
					{
						f1[i].show();
					}
					for(i=0;i<var1;i++)
					{
						p1[i].show1();
					}
				break;
				case 3:
					int a;
					cout<<"\n enter employee number: ";
					cin>>a;
					for(int i=0;i<var;i++)
					{
						if(f1[i].empno==a)
						{
							f1[i].show();
						}
						if(p1[i].empno==a)
						{
							p1[i].show1();
						}
					}
					
		}
	}while(x!=4);
	return 0;
}

