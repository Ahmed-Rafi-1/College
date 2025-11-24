#include<bits/stdc++.h>
using namespace std;

string remComment(string &code){
    string ans = "";
    int sz = code.size();
    int i = 0;
    while(i<sz){
        // single line comment handle
        if(i+1<sz && code[i]=='/' && code[i+1]=='/'){
            i+=2;
            while(i<sz && code[i]!='\n'){
                i++;
            }
        }
        //multiline commnet handle
        else if(i+1<sz && (code[i]=='/' && code[i+1]=='*')){
            i+=2;
            while(i+1<sz && !(code[i]=='*' && code[i+1]=='/')){
                i++;
            }
            i+=2;
        }
        else{
            ans += code[i];
            i++;
        }
    }
    return ans;
}

int main()
{
        string code = R"(

#include <iostream> // include iostream
int main() {
    int x = 5; /* initialize x */
    int y = 10;
    // print sum
    cout << x + y;
    return 0;
}
)";

    cout << "Input Code :\n" << code << "\n";
    string newCode = remComment(code);
    cout << "\nAfter Removing comment : \n" << newCode << "\n";
}
