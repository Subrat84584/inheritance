#include<iostream>
using namespace std;
class B;
class A
{
	protected:
		int num1;
		public:
			A()
			{
			 	num1=10;
			}
			friend void swap(A *num1,B *num2);
			
			void show()
			{
				cout<<"\n value of number :"<<num1;
			}
};
class B
{
	protected:
		int num2;
		public:
			B()
			{
				num2=20;
			}
			friend void swap(A *num1,B *num2);
			void show()
			{
				cout<<"\n value of number :"<<num2;
			}
};
void swap(A *no1,B *no2)
{
	int swap;
	swap = no1->num1;
	no1->num1 = no2->num2;
	no2->num2 = swap;
}
int main()
{
	A a;
	B b;
	swap(&a,&b);
	a.show();
	b.show();
	return 0;
}
