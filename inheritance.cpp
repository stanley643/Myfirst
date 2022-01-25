#include<iostream>
#include<conio.h>
using namespace std;
class worker
{
	int age;
	char name[20];
	public:
	void get();
	void show();
};
void worker::get()
{
	cout<<"your name please: "<<endl;
	cin>>name;
	cout<<"your age please: "<<endl;
	
	cin>>age;
}
void worker::show()
{
	cout<<"ln my name is: "<<name<<"in my age is: "<<age;
}
class manager: public worker
{
	int name ;
	public:
	void get();
	void show();
};
void manager::get()
{
	worker::get ();
	cout<<"no. of workers under you: "<<endl;
	cin>>name;
}
void manager::show()
{
	worker::show ();
	cout<<" no. of workers under me are: "<<name;
}
class ceo: public manager
{
	int nom;
	public:
	void get();
	void show();	
};
void ceo::get()
{
	manager::get();
	cout<<"no. of managers under you are: "<<endl;
	cin>>nom;
}
void ceo::show()
{
	cout<<" the  no of managers under me are: "<<endl;
	cout<<nom;
}
main()
{
	
	ceo cl;
	cl.get(); 
	cl.show();
}
