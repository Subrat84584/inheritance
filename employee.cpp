#include<iostream>
#include<cstring>
using namespace std;
class Person
{
	protected:
		char name[20];
		int age;
	public:
		void setName(char *n)
		{
			strcpy(name,n);
		}
		void setAge(int a)
		{
			age=a;
		}
		char *getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
};
class Employee : public Person
{
	int empid;
	int salary;
	public:
		void setId(int id)
		{
			empid=id;
		}
		void setSalary(int s)
		{
			salary=s;
		}
		int getId()
		{
			return empid;
		}
		int getSalary()
		{
			return salary;
		}
		void display()
		{
			cout<<"Name= "<<name<<"Age = "<<age<<"empid="<<empid<<"salary="<<salary<<endl;
			
		}
		
};
int main()
{
	Employee e;
	e.setName("subrat");
	e.setAge(23);
	e.setId(123);
	e.setSalary(1000);
	e.display();
	return 0;
}
