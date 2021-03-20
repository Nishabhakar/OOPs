#include <iostream>
#include <cmath>
using namespace  std;
class calc_power
{
    public:
    inline long power(int base,int exponant)
    {
        int res;
        res=pow(base,exponant);
        return res;
    }
};
int main()
{
    calc_power ob;
    int b , e;
    cout<<"enter base and exponant respectively \n";
    cin>>b>>e;
    
    cout<<"the calculated result is \n ";
    cout<< ob.power(b,e);
    
    return 0;
}
