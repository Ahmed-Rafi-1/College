#include<bits/stdc++.h>
using namespace std;

bool nfaCons(string &s)
{
    int sz = s.size();
    for(int i=0; i<sz; i++)  // a,b char acc. korbe
    {
        if(s[i] == 'a' || s[i] == 'b')
            continue;
        else
            return false;
    }
    if(sz == 0){
        return true; //a* mane kisu nao thakte pare
    }
    if(s[0] == 'a')
    {
        for(int i=1; i<sz; i++)
        {
            if(s[i]!='a')
            {
                return false;
            }
        }
        return true;
    }
    if(sz == 2 && s[0] == 'b' && (s[1]=='a' || s[1]=='b')){
        return true;
    }
    return false;
}
int main()
{
    while(1)
    {
        string s;
        getline(cin,s);
        if(nfaCons(s))
        {
            cout << "Accepted" << endl;
        }
        else{
            cout << "Rejected" << endl;
        }
    }
}
