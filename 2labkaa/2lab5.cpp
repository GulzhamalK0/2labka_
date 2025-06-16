#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Apta kuninin nomerin engiz (1-7): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Duisenbi"; 
         break;
        case 2: cout << "Seisenbi";
         break;
        case 3: cout << "Sarsenbi";
         break;
        case 4: cout << "Beisenbi"; 
         break;
        case 5: cout << "Zhuma"; 
         break;
        case 6: cout << "Senbi"; 
         break;
        case 7: cout << "Zheksenbi"; 
         break;
        default: cout << "Kate. 1-7 aralygynda engiz."; 
         break;
    }

    return 0;
}
