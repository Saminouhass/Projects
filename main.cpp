#include <iostream>
using namespace std;

int i=0;
void login();
void sing_up(); 
void database();

string email,passWord1,passWord2;


int main(){
    bool work;
    char choise;
    cout << "|Hello in the sing page|" << endl;
    while (true){
        cout << "For start *1* or exit *0*: ";
        cin >> work;
        if(!work){
            cout <<"exit";
            return 0;
        } else if(work){
            cout << "please enter your choise : "<< endl;
            cout << "A.Sing-up"<< endl << "B.Login"<< endl;
            cin >> choise;
            if(choise == 'A'){
                sing_up();
            } else if (choise == 'B'){
                login();
                database();
                i++;
            } else {
                cout << "Err";
            }
        } else {
            cout << "Err";
        }
    } 

}

void login(){
    cout << "Login:"<< endl;
    cout << "Email:";  
    cin >> email;
    cout << "Enter new Password :";
    cin >> passWord1;
    cout << "Verife your Password:";
    cin >> passWord2;
    while(passWord1 != passWord2){
        cout << "Password don't match!" << endl;
        cout << "Enter new Password :";
        cin >> passWord1;
        cout << "Verife your Password:";
        cin >> passWord2;
    } 
    cout << "All is good" << endl;

}

void sing_up(){
    
}

void database(){
    string  user[10][2];
    user[i][0] = email;
    user[i][1] = passWord1;
    cout << i << endl;
    for(int j=0;j<=i;j++){
        cout << user[j][0] << endl;
        cout << user[j][1] << endl;
    }
}
