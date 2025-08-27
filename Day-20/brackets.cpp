#include <iostream>
#include <string>
using namespace std;

bool isBalanced(string s) {
    bool changed = true;

    while (changed) {
        changed = false;
        string temp = "";

        for (int i = 0; i < s.length(); i++) {
            // check if a pair is found
            if (i + 1 < s.length()) {
                if ((s[i] == '(' && s[i + 1] == ')') ||
                    (s[i] == '[' && s[i + 1] == ']') ||
                    (s[i] == '{' && s[i + 1] == '}')) {
                    i++;        // skip the pair
                    changed = true;
                    continue;
                }
            }
            temp += s[i];  // keep unmatched chars
        }

        s = temp;  // update string after removals
    }

    return s.empty();  // if string is empty → balanced
}

int main() {
    string input;
    cout << "Enter expression: ";
    cin >> input;

    if (isBalanced(input))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}
