#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void calculator() {
    double num1, num2;
    char op;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Select Operator (+, -, x, /)";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>num2;

    if(op == '+'){
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
    }
    else if(op == '-'){
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
    }
    else if(op == 'x'){
    cout<<num1<<"x"<<num2<<"="<<num1*num2;
    }
    else if(op == '/') {
        if(num2 == 0){
            cout<<"Cannot divide by 0!";
        }
        else{
            cout<<num1<<"/"<<num2<<"="<<num1/num2;
        }
    }
else{
    cout<<"Invalid Option!";
}
}

void guessnumber() {
    srand(time(0));
    int secret = rand() % 10 + 1;
    int guess;

    cout<<"Guess the number (1-10)\n";

    while (true){
        cout<<"Enter your Guess: ";
        cin>>guess;

        if(guess == secret){
            cout<<"You Win!";
            break;
        }
        else{
            if(guess > secret){
                cout<<"Too High!"<<endl;
            }
            else{
                cout<<"Too Low!"<<endl;
            }
        }

    }   
}

void clogin(){

    string username;
    string password;
    string savedUser;
    string savedPass;

    cout<<"Create a Username: ";
    cin>>savedUser;
    cout<<"Create a Password: ";
    cin>>savedPass;

    // login

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

// UI 
void menu(){
    int choice;

    do{
    cout<<"====================\n";
    cout<<"Basic App\n";
    cout<<"====================\n";
    cout<<"Choose an Option (1-4)\n";
    cout<<"1. Calculator\n";
    cout<<"2. Number Gussing Game\n";
    cout<<"3. Login System\n";
    cout<<"4. Exit\n";
    cin>>choice;

    switch(choice){
        case 1:
        calculator();
        break;
        
        case 2:
        guessnumber();
        break;

        case 3:
        clogin();
        break;
        
        case 4:
        cout<<"Exiting...";
        break;

        default:
        cout<<"Invalid Option!";
    }
}
while(choice != 4);
}

int main() {
    menu();
    return 0;
}
