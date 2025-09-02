

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num < 0) {
        cout << "No\n";
    } else {
        int original = num;
        int reversed = 0;

        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num = num / 10;
        }

        if (reversed == original) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
