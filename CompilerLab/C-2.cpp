#include<bits/stdc++.h>
using namespace std;
bool nfaCons(string &s)
{
    int sz = s.size();
    for( int i=0; i<sz; i++)  // a,b character accpet korbe only
    {
        if(s[i]=='a' || s[i]=='b')
            continue;
        else
            return false;
    }
    if(sz==0 || s[sz-1]!='a') // last char a must
    {
        return false;
    }
    int i = 0;
    while(i < sz-1)
    {
        if(s[i] == 'b')
        {
            i++;
        }
        else if(s[i] == 'a' && s[i+1] == 'b')
        {
            i+=2;
        }
        else{
            return false;
        }
    }
    return true;
}


int main()
{
    while(1)
    {
        string s;
        cin >> s;
        if(nfaCons(s))
        {
            cout << "Accepted" << endl;
        }
        else{
            cout << "Rejected" << endl;
        }
    }
}

/* tc
a - acc
ba -acc
aba -acc
abb -rej
bababba -acc
*/
