#include <iostream>
using namespace std;
#include <iostream>

void printStars(int n) {
    if (n == 0) {
        return;
    }

    printStars(n / 10);
    int digit = n % 10;

    for (int i = 0; i < digit; ++i) {
        cout << '*';
    }
        cout << endl;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    printStars(n);

    return 0;
}
