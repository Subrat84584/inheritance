#include<iostream>
using namespace std;
class Student
{
	protected:
		int sub[3];
	public:
		void accept()
		{
			cout<<"\n enter marks for three subject";
			cout<<"\n--------------------------------";
			cout<<"\n english:";
			cin>>sub[0];
			cout<<"\n math:";
			cin>>sub[1];
			cout<<"\n history:";
			cin>>sub[2];
		}
};
class Total:public Student
{
	protected:
		int total;
	public:
		void total_of_three()
		{
			total=sub[0]+sub[1]+sub[2];
		}
};
class per:public Total
{
	private:
		float per;
	public:
		void calculate()
		{
			per=total/3;
		}
		void display()
		{
			cout<<"\n------------------------";
			cout<<"\n pecentage of a student :"<<per;
		}
		
};
int main()
{
	per p;
	p.accept();
	p.total_of_three();
	p.calculate();
	p.display();
	return 0;
}

