#include <iostream>
using namespace std;

class Bank {
private:
    int acc_no;
    char name[30];
    long balance;

public:
    void OpenAccount()
    {
            
             acc_no=random();
             cout << "Enter Name: ";
             cin >> name;
             cout << "Enter  Balance: ";
             cin >> balance;
        
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acc_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout <<"account no"<< acc_no;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
        cout<<"balance:"<< balance << endl;
    }
    void Withdrawal()
    {
        long amt;
        cout << "account no:"<<acc_no;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
        cout<<"balance:"<<balance<<endl;
    }
    int Search(int);
};

int Bank::Search(int a)
{
    if (acc_no == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}

int main()
{
   int n;
   cout<<"enter n";
   cin>>n;
    Bank C[n];

    int found = 0, a, ch, i;
    for(i=0;i<n;i++){
         C[i].OpenAccount();
        
                 cout << "\n\n1:Display All\n2:Deposit\n3:Withdraw\n4:Exit" << endl;

        
                 cout << "Please input your choice: ";
                 cin >> ch;

                 switch (ch) {
                 case 1: 
    
                 C[i].ShowAccount();
                    
                       break;
                 case 2:
                 C[i].Deposit();
                 
                       break;
                       
                  case 3:
                                                                                                                            C[i].Withdrawal();
                                                                                                                                    
                        break;
                          
                  case 4:
                              cout << "Have a nice day" << endl;
                              break;
                  default:
                                cout << "Wrong Option" << endl;
                 }
    }
        return 0;
    }
