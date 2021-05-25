# include <iostream>
using namespace std;
class shape
{
	public:
	virtual void numberOfSides ()=0;
};
class trapzoid : public shape
{
	public:
	void  numberOfSides()
	{
		cout<<"\n no of sides :"<<endl;
		cout<<"4 "<<endl;
	}
};
class triangle: public shape
{
	public:
	void  numberOfSides()
	{
		
		cout<<"\n number of sides:"<<endl;
		cout<<"3"<<endl;
	}
};
class haxagon:public shape
{
	public:
	void numberOfSides()
	{
	
		cout<<"\n number of sides :"<< endl;
		cout<<"6"<< endl;
	}
};
int main()
{
	shape *a;
	trapzoid b;
	triangle c;
	haxagon d;
	a=&b;
	a->numberOfSides();
	a =&c; 
	a->numberOfSides();
	a=&d;
	a->numberOfSides();
}
