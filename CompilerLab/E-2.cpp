#include<bits/stdc++.h>
using namespace std;

bool isValidInteger(const string &s) {
    if (s.empty()) return false; // empty string is invalid

    int start = 0;

    // Optional sign at the first char
    if (s[0] == '+' || s[0] == '-') {
        if (s.size() == 1) return false; // string cannot be just '+' or '-'
        start = 1;
    }

    // Check other characters are all digits
    for (int i = start; i < s.size(); i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    string inputs[] = {"12", "0034", "-45", "abc", "+789", "-", "+0"};

    for (string s : inputs) {
        cout << "Input: " << s << " --> ";
        if (isValidInteger(s)) {
            cout << "Valid Integer" << endl;
        } else {
            cout << "Invalid Integer" << endl;
        }
    }
}

