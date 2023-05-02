#include<iostream>
using namespace std;
class Item
{
	public:
		int item_no;
		char item_name[50];
		float item_price;
};
class Discount:public Item
{
	public:
		int discount_percent;
		int discount_price;
		void accept_details()
		{
			cout<<"\n enter item name: ";
			cin>>item_name;
			cout<<"\n enter item no. :";
			cin>>item_no;
			cout<<"\n enter item price";
			cin>>item_price;
			cout<<"\n enter discount percent";
			cin>>discount_percent;
			cout<<"\n -------------------\n";
			discount_price=item_price-item_price*discount_percent/100;
			
		}
		void display_details()
		{
			cout<<"\n item name: "<<item_name;
			cout<<"\n item no:"<<item_no;
			cout<<"\n item price:"<<item_price;
			cout<<"\n discount_percent:"<<discount_percent;
			cout<<"\n discount_price:"<<discount_price;
			cout<<"\n -----------------------------";
		}
};
int main()
{
	int i,cnt,discount=0,price=0;
	Discount dt[100];
	cout<<"\n how many item you want to enter?:";
	cin>>cnt;
	for(i=1;i<=cnt;i++)
	{
		dt[i].accept_details();
	}
	for(i=1;i<=cnt;i++)
	{
		dt[i].display_details();
	}
	for(i=1;i<=cnt;i++)
    {
	   price=price+dt[i].item_price;
	}	
	for(i=1;i<=cnt;i++)
	{
		discount=discount+dt[i].item_price-dt[i].discount_price;
	}
	cout<<"\n total price:"<<price;
	cout<<"\n total discount"<<discount;
	cout<<"\n Total payable Amount:"<<price-discount;
	return 0;
}

