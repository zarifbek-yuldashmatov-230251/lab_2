#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string to_lower(string s) {
    for (char &c : s) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }
    return s;
}

int main() {
    srand(time(0));
    int num = 1 + rand() % 15;
    int guess;
    
    while (true) {
        cin >> guess;
        if (guess == num) {
            cout << "You won!\n";
            break;
        } else {
            cout << "No! Want to continue?\n";
            string ans;
            cin >> ans;
            string ans_lower = to_lower(ans);
            
            if (ans_lower == "no") {
                break;
            } else if (ans_lower != "yes") {
                break;
            }

        }
    }
    return 0;
}

