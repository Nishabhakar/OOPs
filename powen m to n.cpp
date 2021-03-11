#include <iostream>
using namespace std;
float power(float  m, int n=2) // here n is the base default value 2
{
        long double power = 1;
    int i;
     /* Multiply base, exponent times*/
    for(i=1; i<=n; i++)
    {
        power = power * m;
    }
    return power;
  
   }
   float power( int n=4,float m=2.0)
{
        long double power = 1;
    int i;
         for(i=1; i<=n; i++)
    {
        power = power * m;
    }
    return power;

   
   } 
   void display()
   {
	cout << " power = "<<power(3.0,3);  //  output 27 output
	cout <<" POWER is ="<<power(3); // output...8
	cout <<"\n\t POWER = "<<power();   //output ...16
 
   }
int main()
{ 
	display();
    return 0;
}

