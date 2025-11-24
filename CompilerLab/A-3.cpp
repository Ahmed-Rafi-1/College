#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        string s;
        cin >> s;
        int sz = s.size();
        int flag = 0;
        int flag2 = 0;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='a' || s[i]=='b')
            {
                continue;
            }
            else{
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "Invalid" << endl;
        }
        else{
            for(int i=1; i<sz; i++)
            {
                if(s[i-1]=='b' && s[i]=='b')
                {
                    flag2 = 1;
                    break;
                }
            }
            if(flag2==1)
            {
                cout << "Invalid" << endl;
            }
            else{
                cout << "Valid" << endl;
            }
        }
    }
}
