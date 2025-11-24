#include<bits/stdc++.h>
using namespace std;

bool nfaCons(string &s){
    int sz = s.size();
    for (int i=0; i<sz; i++) // a,b,c accept korbe only
    {
        if(s[i]=='a' || s[i]=='b' || s[i]=='c'){
            continue;
        }
        else{
            return false;
        }
    }
    //NFA cons.
    //start with a
    if(s[0]!= 'a' || sz == 0)
    {
        return false;
    }
    for(int i=1; i<sz; i++) // a strat howar por must b nahoi c allow
    {
        if(s[i]!='b' && s[i]!='c')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    while(1){
        string s;
        cin >> s;
        if(nfaCons(s)){
            cout << "Accepted" << endl;
        }
        else{
            cout << "Rejected" << endl;
        }

    }
}

/*
tc :
abcc -acc
a -acc
aa- rej
abc1 -rej
acbbcc -acc
*/
