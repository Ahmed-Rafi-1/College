#include<bits/stdc++.h>
using namespace std;

bool iskeyword(string &s){
     string keywords[] = {"int", "float", "double", "char", "void",
                         "if", "else", "while", "for", "return",
                         "long", "short", "class", "struct"};
    for (string k : keywords)
    {
        if (s == k)
            return true;
    }
     return false;
}
bool isoperator(char c){
    return( c =='+' || c =='-'|| c=='*' || c == '/' || c == '=');
}
bool isseparator(char c)
{
    return ( c ==',' || c ==';' || c == '(' || c == ')');
}

int main()
{
    string code = "int a = 45 + 2 * b";
    string token;
    cout << "Tokens: " << endl;
    int sz = code.size();
    for (int i=0; i<sz; i++)
    {
        char ch = code[i];
        if(isspace(ch)){
            continue;
        }
        if(isalpha(ch))
        {
            token = "";
            while(i<sz && isalnum(code[i])){
                token += code[i];
                i++;
            }
            i--;
            if(iskeyword(token)){
                cout << "Keyword : " << token << endl;
            }
            else{
                cout << "Identifier : " << token << endl;
            }
        }
        else if(isdigit(ch))
        {
            token = "";
            while(i<sz && isdigit(code[i]))
            {
                token += code[i];
                i++;
            }
            i--;
            cout << "Number : " << token << endl;
        }
        else if(isoperator(ch))
        {
            cout << "Operator : " << ch << endl;
        }
        else if(isseparator(ch)){
            cout << "Separator : " << ch << endl;
        }
        else{
            cout << "Unkown : " << ch << endl;
        }
    }
}
