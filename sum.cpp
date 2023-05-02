#include<iostream>
using namespace std;
class Base
{
	protected:
		int x,y;
		public:
			void accept()
			{
				cout<<"enter two number for addition"<<endl;
				cin>>x>>y;
			}
};
class Driver:public Base
{
	int sum;
      public:
	  int add()
	  {
	  	sum=x+y;
	  }	
	  void dis()
	  {
	  	cout<<"\n Addition of two number:"<<sum;
	  }
};
int main()
{
	Driver d;
	d.accept();
	d.add();
	d.dis();
	return 0;
}
