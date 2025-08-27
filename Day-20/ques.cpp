#include <iostream>
#include <string>
using namespace std;

bool move(string str1, string str2) {
    if (str1.length() != str2.length()) {
        cout << "unmatched!";
        return false;
    }

    int n = str2.length();

    // try all rotations
    for (int r = 0; r < n; r++) {
        if (str1 == str2) {   // check match
            return true;
        }

        // perform one left rotation using swaps
        for (int j = 0; j < n - 1; j++) {
            swap(str2[j], str2[j + 1]);
        }
    }

    return false;
}

int main() {
    string str1, str2;
    cout << "\nEnter string one: ";
    getline(cin, str1);
    cout << "\nEnter string two: ";
    getline(cin, str2);

    bool result = move(str1, str2);

    if (result) {
        cout << "\nMatched!";
    } else {
        cout << "\nUnmatched!";
    }

    return 0;
}
