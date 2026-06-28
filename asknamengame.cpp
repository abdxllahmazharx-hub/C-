#include <iostream>
#include <string>
using namespace std;

string name;
string game;


void Name(){
    cout<<"Hello, What is your name?\n"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<"!"<<endl;
};
void Game(){
    cout<<"What's your favourite game?\n"<<endl;
    cin>>game;
    cout<<game<<" is a/an awesome Game!"<<endl;
};
void Line(){
    cout<<"===================="<<endl;
};

int main(){
    Line();
    Name();
    Game();
    Line();

    return 0;
}
