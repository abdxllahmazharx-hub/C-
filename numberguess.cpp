#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int attempt = 0;
int userinput;
bool won = false;

void PrintLine(){
    cout<<"\n===================="<<endl;
};

void StartGame(int number){
    while (attempt < 3)
    { 
        
    cout<<"\nGuess the Number Between 1 to 10"<<endl;
    cin>>userinput;
    attempt++;
    cin.clear();
    cin.ignore(10000, '\n');
    

    if (userinput == number) {
        cout<<"You Win!"<<endl;
        won = true;
        break;
    }
    else if (userinput < number) {
        cout<<"Too Low!"<<endl;
    }
    else {
        cout<<"Too High!";
    }
}
if (won == false) {
cout<<"You Loose"<<endl;
}
};



int main(){
    srand(time(0));
    int number = (rand() % 10) + 1;
    PrintLine();
    StartGame(number);
    PrintLine();
    
    
    return 0;
}

