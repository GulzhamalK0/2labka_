#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    do {
        cout << "San engiz (toktatu ushyn 0): ";
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "Kosyndy: " << sum << endl;

    return 0;
}
