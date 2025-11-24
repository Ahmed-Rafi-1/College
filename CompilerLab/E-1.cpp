#include<bits/stdc++.h>
using namespace std;

bool isValidIdentifier(const string &s) {
    if (s.empty()) return false; // empty string is not valid

    // first char must be a letter or underscore
    if (!isalpha(s[0]) && s[0] != '_') {
        return false;
    }

    // other char can be letters, digits, or underscore
    for (int i = 1; i < s.size(); i++) {
        if (!isalnum(s[i]) && s[i] != '_') {
            return false;
        }
    }

    return true;
}

int main() {
    string inputs[] = {"_temp", "9abc", "value1", "__id"};

    for (string s : inputs) {
        cout << "Input: " << s << " --> ";
        if (isValidIdentifier(s)) {
            cout << "Valid Identifier" << endl;
        } else {
            cout << "Invalid Identifier" << endl;
        }
    }

}
