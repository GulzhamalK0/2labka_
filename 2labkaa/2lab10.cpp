#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            cout << i << "  Zhup san" << endl;
        } else {
            cout << i << " Tak san" << endl;
        }
    }

    return 0;
}
