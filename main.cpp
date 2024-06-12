#include <iostream>
using namespace std;

int i=0;
const int l=10;
void login();
void sing_up(); 
void database();
string email_l,passWord1_l,passWord2_l,email_s,passWord_s;
string  user[l][2];


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
                database();
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
    cin >> email_l;
    cout << "Enter new Password :";
    cin >> passWord1_l;
    cout << "Verife your Password:";
    cin >> passWord2_l;
    while(passWord1_l != passWord2_l){
        cout << "Password don't match!" << endl;
        cout << "Enter new Password :";
        cin >> passWord1_l;
        cout << "Verife your Password:";
        cin >> passWord2_l;
    } 
    cout << "All is good" << endl;

}

void database(){
    user[i][0] = email_l;
    user[i][1] = passWord1_l;
    //debug
    // cout << i << endl;
    // for(int j=0;j<=i;j++){
    //     cout << user[j][0] << endl;
    //     cout << user[j][1] << endl;
    // }
}

void sing_up(){
    bool ver=false;
    cout << "Sing-up:" << endl;
    cout << "Email:";
    cin >>  email_s;
    cout << "Password:";
    cin >> passWord_s;
    for(int j=0;j<l;j++){
        if(email_s == user[j][0]){
            if(passWord_s == user[j][1]){
                ver=true;
                break;
            } 
        } 
    }
    if(ver){
        cout << "sucsesse!"<<endl;
    } else if (!ver){
        cout << "The count don't found pleas login"<<endl;
    }
}


