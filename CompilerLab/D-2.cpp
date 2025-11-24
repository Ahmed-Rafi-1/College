#include<bits/stdc++.h>
using namespace std;

bool iskeyword(const string &s)
{
    string keywords[] = {"int", "float", "double", "char", "void",
                         "if", "else", "while", "for", "return",
                         "long", "short", "class", "struct"};
    for (string k : keywords)
    {
        if (s == k) return true;
    }
    return false;
}

int main()
{
    string code = "int x = y + num1; float value = x + 10;";
    int counter = 0;
    string token = "";
    cout << "Token : " << endl;
    int sz = code.size();
    for(int i=0; i<sz; i++)
    {
        char ch = code[i];
        if(isspace(ch)){
            continue;
        }
        if(isalpha(ch) || ch == '_'){
            token = "";
            while(i<sz && (isalnum(code[i]) || code[i] == '_'))
            {
                token += code[i];
                i++;
            }
            i--;
            if(!iskeyword(token)){
                cout << "Identifier : " << token << endl;
                counter++;
            }
        }
    }
    cout << "Total Indentifier : " << counter << endl;
}
