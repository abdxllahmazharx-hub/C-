#include <iostream>
#include <string>
using namespace std;

void Line(){
    cout<<"===================="<<endl;
}
void Welcome(){
    cout<<"Welcome to the Game!"<<endl;
}
void Goodbye(){
    cout<<"Goodbye!"<<endl;
}
void PrintName(string name){
    cout<<"Hello "<<name<<"!"<<endl;
}
int main(){
    Line();
    Welcome();
    Line();
    Goodbye();
    Line();
    PrintName("Alex");
    Line();

    return 0;
}
