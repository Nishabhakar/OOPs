#include<iostream>
using namespace std;
class Time1;
class Time{
	private:
		int hr;
		int min;
	public:
		void get_time(int h,int m)
		{
			hr=h;
			min=m;
		}
		friend void add(Time,Time1);
};
class Time1{
	private:
		int hr1;
		int min1;
	public:
		void get_time(int h,int m)
		{
			hr1=h;
			min1=m;
		}
		friend void add(Time,Time1);
};
void add(Time time,Time1 time1){
	int k1,k2;
	if(time.min+time1.min1<=60)
	{
		k1=time.hr+time1.hr1;
		k2=time.min+time1.min1;
	}
	else{
		k1=time.hr+time1.hr1+(time.min+time1.min1)/60;
		k2=(time.min+time1.min1)%60;
	}
	cout<<"add of first and second time= "<<k1<<":"<<k2<<endl;
}

int main(){
	Time time;
	Time1 time1;
	int ht1,mt1;
	cout<<"enter first time in hour and minute seprate by space "<<endl;
    cin>>ht1>>mt1;
    time.get_time(ht1,mt1);
    cout<<endl;
    int ht2,mt2;
    cout<<"enter second time in hour and minute seprate by space "<<endl;
    cin>>ht2>>mt2;
    time1.get_time(ht2,mt2);
    cout<<endl<<endl;
    cout<<"****************************"<<endl;
    cout<<"first time= "<<ht1<<":"<<mt1<<endl;
    cout<<"second time= "<<ht2<<":"<<mt2<<endl<<endl;
    add(time,time1);
    
    
}
