#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
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
return 0;
    
}
