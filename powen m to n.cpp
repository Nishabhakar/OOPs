#include <iostream.h>
#include <math.h>
float power(float num, float pow)
{
    float  temp=num;
    while(pow>1)
    {
        num*=temp;
        pow--;
    }
    return num;
}
float power( float num,float pow, float  temp)
{
    if(pow==1)
        return num;
    return power(num*temp,pow-1,temp);
}
void display(float data)
{
    cout<<data;
}

int main()
{
    
    float num,pow,data,result,res;
    cout<<"enter number and power  respectively \n";
    cin>>num>>pow;
    cout<<"result with default power :\n";
    result =power(num,pow);
    display(result);
    cout<<"\nresult with entered power:\n";
    res =power(num,pow,num);
    display(res);
    return 0;
}
