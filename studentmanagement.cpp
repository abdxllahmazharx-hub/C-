#include <iostream>
using namespace std;

string gender[100];
string students[100];
bool deleted[100] = {false};
int count = 0;

int main(){
    int choice;
    do{
        cout<<"===================="<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. View Students"<<endl;
        cout<<"3. Search Students"<<endl;
        cout<<"4. Delete Students"<<endl;
        cout<<"5. View Student Gender"<<endl;
        cout<<"6. Exit"<<endl;
        cin>>choice;
        cin.clear();
        cin.ignore(10000, '\n');

        switch (choice)
        {
        case 1:

            cout<<"Enter Name of the Student: "<<endl;
            cin>>students[count];
            cout<<"Enter Gender of the Student (M/F): "<<endl;
            cin>>gender[count];
            deleted[count] = false;
            cout<<"Student Added!";
            
            count++;
            break;
        
        case 2:
            cout<<"===================="<<endl;
            cout<<"Students List:"<<endl;
            if(count == 0){
                cout<<"There are 0 Students!";
            }
            else{
                for(int i = 0; i < count; i++){
                    if(deleted[i] == false){
                        cout<< i+1<<". "
                            << students[i]<<endl;
                        cout<<"Gender: "<<gender[i]<<endl;
                    }
                }
            }
            break;

        case 3: {
            cout<<"Enter the name of the student to search: "<<endl;
            string searchName;
            cin>>searchName;
            bool found = false;
            for(int i = 0; i < count; i++){
                if(students[i] == searchName && deleted[i] == false){
                    cout<<"Student found at position: "<<i+1<<endl;
                    found = true;
                    break;
                }
            }
            if(!found){
                cout<<"Student not found!"<<endl;
            }
            break;
        } 

        case 4: {
            cout<<"Enter name of the Student to delete: "<<endl;
            string deleteName;
            cin>>deleteName;
            
            bool found = false;

            for(int i = 0; i < count; i++) {
                if(students[i] == deleteName && deleted[i] == false){
                    deleted[i] = true;
                    found = true;

                    cout<<"Student Deleted!"<<endl;
                    break;
                }
            }
            if(!found){
                cout<<"Student not found!"<<endl;
            }
            break;
        }

        case 5:
            cout<<"===================="<<endl;
            cout<<"Student Gender List:"<<endl;
            if(count == 0){
                cout<<"There are 0 Students!";
            }
            else{
                for(int i = 0; i < count; i++){
                    if(deleted[i] == false){
                        cout<< i+1<<". "
                            << students[i]<<endl;
                        cout<<"Gender: "<<gender[i]<<endl;
                    }
                }
            }
            break;

            case 6:
            cout<<"Exiting the program. Goodbye!"<<endl;
            break;

        default:
            cout<<"Invalid Option!";
            break;
        }
    }
    while(choice != 5);
}
