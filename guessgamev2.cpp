#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

void PrintMainMenu() {
    std::cout<<"\n===================="<<std::endl;
    std::cout<<"MAIN MENU"<<std::endl;
    std::cout<<"===================="<<std::endl;
}
void PrintRules(){
    std::cout<<"Rules:\nGuess the Number Between 1 - 10.\nYou will have 3 Tries to Guess."<<std::endl;
}
void PrintCredits(){
    std::cout<<"Credits:\nCreated by Abdullah Mazhar."<<std::endl;
}
void Exit(){
    std::cout<<"Goodbye!"<<std::endl;
}
void StartGuessGame(){
    

    int attempt = 0;
    int userinput;
    bool won = false;
    srand(time(0));
    int number = (rand() % 10) + 1;
    while (attempt < 3)
    { 
        
    std::cout<<"\nGuess the Number Between 1 to 10"<<std::endl;
    std::cin>>userinput;
    attempt++;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    

    if (userinput == number) {
        std::cout<<"You Win!"<<std::endl;
        won = true;
        break;
    }
    else if (userinput < number) {
        std::cout<<"Too Low!"<<std::endl;
    }
    else {
        std::cout<<"Too High!";
    }
}
if (won == false) {
std::cout<<"You Loose"<<std::endl;
}
   
   
    
    
};




int main(){
    bool running = true;
    while (running)
    {
    int choice;
    
    PrintMainMenu();
    std::cout<<"1. Play"<<std::endl;
    std::cout<<"2. Rules"<<std::endl;
    std::cout<<"3. Credits"<<std::endl;
    std::cout<<"4. Exit"<<std::endl;
    std::cin>>choice;

    switch (choice)
    {
    case 1:
        StartGuessGame();
        break;
    case 2:
        PrintRules();
        Sleep(5000);
        break;
    case 3:
        PrintCredits();
        Sleep(5000);
        break;
        
    case 4:
        Exit();
        running = false;
        break;
    
    default:
        std::cout<<"Invalid Option!"<<std::endl;
        
    }
    
   
}
}
