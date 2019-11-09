#include<conio.h>
#include<iostream>
using namespace std;
class A
{
	public:
		int x,y;
		void get_data()
		{
			cout<<"Enter values of x and y: "<<endl;
			cin>>x>>y;
		}
};
class B:public A
{
	public:
		void product()
		{
			cout<<"Product= "<<x*y<<endl;
		}
};
class C:public A
{
	public:
		void sum()
		{
			cout<<"Sum= "<<x+y<<endl;
		}
};
int main()
{
	B obj1;
	C obj2;
	obj1.get_data();
	obj1.product();
	obj2.get_data();
	obj2.sum();
	return 0;
}
