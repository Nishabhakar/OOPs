#include<iostream>
#include<string.h>
class String{
	private:
		std::string str1;
		std::string str2;
	public:
	     void getstring(std::string a,std::string b){
	     	str1=a;
	     	str2=b;
		 }
		
		void addstring(std::string a,std::string b) 
		{ cout<<"add of first name and last name is \n  "<<a+b<<endl;
			}
		void equatestring(std::string a,std::string b){
			cout<<"check  "<<a<<"  and  "<<b<<" is equal or not \n"<<endl<<endl;
			if(a==b)
			{
				cout<<a<<" is equal to "<<b<<endl;
			}
			else{
				cout<<a<<" is not equal to "<<b<<endl;
			}
		}
		 void display ()
		 {	cout<<" first name is: "<<str1<<endl<<"last name is: "<<str2<<endl;
		 	
		 }		
		 
		
};
int main(){
	String word;
	std::string st1,st2;
	cout<<"enter your first_name"<<endl;
	cin>>st1;
	cout<<"enter your last_name"<<endl;
	cin>>st2;
	
	word.getstring(st1,st2);
	cout<<"-------------------------------------------------"<<endl;
	word.addstring(st1,st2);
	cout<<"-------------------------------------------------"<<endl;
	word.equatestring(st1,st2);
	cout<<"-------------------------------------------------"<<endl;
	word.display();
}
