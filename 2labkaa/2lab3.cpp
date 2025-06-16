#include <iostream>
#include <string>
using namespace std;

int main() {
    string login, password;

    cout << "Login engiz: ";
    cin >> login;

    cout << "Kupiyasoz engiz: "; 
    cin >> password;

    bool authorized = (login == "admin" && password == "1234");

    if (authorized) {
        cout << "Kosh keldiniz" << endl;
    } else {
        cout << "Login nemese kupiyasoz kate: " << endl;
    }

    return 0;
}
