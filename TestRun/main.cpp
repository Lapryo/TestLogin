#include<iostream>
#include<string>
#include<array>
using namespace std;
string user;
string pass;

string userInfo[2][5] = {
    {"User1", "User2", "User3", "User4", "User5"},
    {"a", "b", "c", "d", "e"}
};

void searchUserInfo(string username, string password, string success, string errUser, string errPass) {
    bool found;
    int id;
    for (int USERS = 0; USERS < 5; USERS++) {
        if (username == userInfo[0][USERS]) {
            found = true;
            id = USERS;
            break;
        }
    }
    if (found == true) {
        if (password == userInfo[1][id]) {
            cout << success << endl;
        } else {
            cout << errPass << endl;
        }
    } else {
        cout << errUser << endl;
    }
}

int main() {

    cout<<endl<<"Username: ";
    cin>>user;
    cout<<endl<<"Password: ";
    cin>>pass;
    cout<<endl;
    system("pause");
    cout<<endl;

    searchUserInfo(user, pass, "Login success!", "Unknown user.", "Found user but incorrect password.");
    cout<<endl;
    system("pause");
    cout<<endl;

    return 0;
}
