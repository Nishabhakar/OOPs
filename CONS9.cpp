# include <iostream>
using namespace std;

class cons
{
	private:
	int x,y,z;
	
	public:
	cons(int y1, int z1)
	{
		y=y1;
		z=z1;
	}
	int getA()
	{
		return y;
	}
	int getB()
	{
		return z;
	}

    
    
    cons(const cons &sam)
    {
        y = sam.y;
        z = sam.z;
    }
    
    void display()
    {
        cout<<y<<" "<<z<<endl;
    }
	
};
int main()
{
		
		int x,y,z;
		cout<<" enter any two numbers \n";
		cin>>y>>z;
		cout<<endl;
	    cons a1(y,z);
	    cout<<" parameterised constructor";
	    cout<<endl;
	      cout << "a1.b = " << a1. getA() << ", a1.z = " << a1 . getB();
        cout<<endl;
       cout<<" \n enter any two numbers\n ";
       cin>>x>>y;
       cons o1(x,y);    
       cons o2 = o1;      
      cout<<"constructor : ";
      o1.display();
      cout<<endl;
      cout<<"Copy constructor : ";
      o2.display();
      cout<<endl<< " this is Constructor Overloading";
       
return 0;
}
