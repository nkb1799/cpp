#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
/* ATM project
  Cash Withdraw
  Check Balance
  User Details
  Update Mob mo */
class atm
{
    protected:
    string name;
     int acc_no;
     int PIN;
     int mob_no;
     unsigned int balance;

    public:
      void setdata(string t_name, int t_acc, int t_pin, int t_mob, unsigned int t_bal)
      {

         name = t_name;
         acc_no = t_acc;
         PIN = t_pin;
         mob_no = t_mob;
         balance = t_bal;
      }

      int getpin()
      {
          return PIN;
      }
      string getname()
      {
          return name;
      }
      int getmobile()
      {
          return mob_no;
      }
      int getacc()
      {
          return acc_no;
      }

      void withdraw(unsigned int mn)
      {
          if(mn>0 && mn<balance)
          {
              cout<<"\n\tPlease collect your cash"<<endl;
              cout<<"\t****************************";
              balance -= mn;
              cout<<"\n\n\tAvailable Balance = "<<balance<<endl;

          }
          else{
              cout<<"\n\tInsufficient Balance";
          }
        _getch();
      }

      void showbalance()
      {
          cout<<"\n\tCurrent Balance = "<<balance;
          _getch();
      }

      void details()
      {
          cout<<"\n\tName           :"<<name;
          cout<<"\n\tAccount Number :"<<acc_no;
          cout<<"\n\tPhone Number   :"<<mob_no;
      }
      void changenum(int x)
      {
          mob_no = x;
          cout<<"\n\tPhone number changed successfully";

      }

};
int main()
{
  atm user;
  system("cls");
  user.setdata("Harry",111222333,5678,987654321,20000);
  int ch;
  do{
      system("cls");
      cout<<"***Welcome to PPP Bank ATM***"<<endl;
      int usr,pwd;
      cout<<"\nEnter the Account name: ";
      cin>>usr;
      cout<<"\nEnter the PIN: ";
      cin>>pwd;
      if(usr == user.getacc() && pwd == user.getpin() )
        {

            do{
                 system("cls");
                 cout<<"***Welcome to PPP Bank ATM***"<<endl;
                 cout<<"\nSelect Options"<<endl;
                 cout<<"\n1.Check Balance"<<endl;
                 cout<<"2.Withdrawal"<<endl;
                 cout<<"3.View Details"<<endl;
                 cout<<"4.Update Phone Number"<<endl;
                 cout<<"5.Exit"<<endl;
                 cout<<"\n\nEnter choice: ";
                 int ch;
                 _getch();
                 cin>>ch;
                 switch(ch)
                 {
                 case 1:
                       {
                         system("cls");
                          user.showbalance();
                          break;
                       }

                 case 2:
                      {
                        system("cls");
                        unsigned int mn=0;
                        cout<<"\n\tEnter the Amount: ";
                        cin>>mn;
                        user.withdraw(mn);
                        break;
                      }

                 case 3:
                         {
                             system("cls");
                             user.details();
                             _getch();
                             break;
                         }

                 case 4:
                     {
                        system("cls");
                        int ph=0,np=0;
                        cout<<"\n\tEnter current phone number :";
                        cin>>ph;
                        if(ph == user.getmobile())
                         {
                            cout<<"\n\tEnter new phone number     :";
                            cin>>np;
                            user.changenum(np);
                            _getch();
                            break;
                         }
                     }

                 case 5 :
                     {
                            system("cls");
                            cout<<"\n\tThank you for using our services"<<"\n\n";
                            exit(0);
                            break;

                     }

                 default :

                          system("cls");
                          cout<<"Invalid Details";
                          _getch();
                          break;
               }
            }while(1);
          }

       else
        {
            system("cls");
            cout<<"Incorrect Details!";
            _getch();

         }

    }while(1);

}


