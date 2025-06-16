#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Baga engiz (0-100): ";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cout << "Ote zhaksy" << endl;
    } else if (grade >= 75) {
        cout << "Zhaksy" << endl;
    } else if (grade >= 50) {
        cout << "Kanagat" << endl;
    } else if (grade >= 0) {
        cout << "Kanagatsyz" << endl;
    } else {
        cout << "Kate. Durys baga engiz." << endl;
    }

    return 0;
}
