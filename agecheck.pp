#include <iostream>
using namespace std;

int checkage(int age){

    if(age >= 7){
        cout<<"You are Elegible to use this Software!";
    }
    else {
        cout<<"You are NOT Elegible to use this Software!";
    }

}

int main(){
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    checkage(age);
    return 0;
}
