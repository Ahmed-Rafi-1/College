#include <iostream>
#include <regex>
using namespace std;

int main() {
    string s;
    cout << "Enter email: ";
    cin >> s;

    regex email("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");

    if (regex_match(s, email))
        cout << "Valid Email\n";
    else
        cout << "Invalid Email\n";
}

