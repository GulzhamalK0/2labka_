#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    while (true) {
        cout << "Sandy engiz (toktatu ushyn teris san): ";
        cin >> num;

        if (num < 0) break;

        sum += num;
    }

    cout << "Kosyndy: " << sum << endl;

    return 0;
}
