#include <iostream>
using namespace std;

void clogin(string savedUser, string savedPass){

    string username;
    string password;

    cout<<"\nLogin\n";

    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter Password: ";
    cin>>password;

    if(username == savedUser && password == savedPass){

        cout<<"Successfully Logged In!";
    }
    else {
        cout<<"An Error Occured!";
    }
}
int main() {  
string savedUser;
string savedPass;

cout<<"Create a Username: ";
cin>>savedUser;
cout<<"Create a Password: ";
cin>>savedPass;

clogin(savedUser, savedPass);
return 0;
}
