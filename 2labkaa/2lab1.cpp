#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Zholdy engiz: ";
    getline(cin, text);

    cout << "Uzyndygy: " << text.length() << endl;
    if (!text.empty()) {
        cout << "Birinshi symbol:"  << text[0] << endl;
    } else {
        cout << "Zhol bos." << endl;
    }

    return 0;
}
