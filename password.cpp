#include<iostream>
using namespace std;
int main()
{
    string password = "Rajeev";
    string user_password;
    cout<<"Enter password: ";
    cin>>user_password;
    while(true)
    {
        if(password != user_password)
        {
            cout<<"Incorrect Password. "<<endl;
            cout<<"Enter password: "<<endl;
            cin>>user_password;

        }
        else{
            cout<<"System is unlocked"<<endl;
            break;
        }
    }







}
