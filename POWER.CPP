#include <iostream>
#include <math.h>
class calc_power
{
    double base;
    int exponant,cal_power,power;
    public:
    int get(){
        cout<<"enter base and expinant:";
        cin>>base>>exponant;
    }
    void po(){
        power=pow(base,exponant);
        cout<<power;
    }
    void show(){
        cal_power=po(base, exponant);
        cout<<cal_power;
   }
};
int main()
{
    calc_power obj;
    void get(obj.base,obj.exponant);
    void show(obj.base,obj.exponant);
    
    return 0;

