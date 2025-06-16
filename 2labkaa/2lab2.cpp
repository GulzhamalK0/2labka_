#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "Eki san engiz: ";
    cin >> a >> b;

    double result = pow(a, 2) + pow(b, 2);
    cout << "Kvadrattar kosyndysy: " << result << endl;

    return 0;
}
