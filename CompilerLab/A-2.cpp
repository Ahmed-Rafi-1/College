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
        int counter = 0;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='0' || s[i]=='1')
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "Invalid" << endl;
        }
        else{
            for(int j=0; j<sz; j++)
            {
                if(s[j]=='1')
                {
                    counter++;
                }
            }
            if(counter%2==0)
            {
                cout << "Valid" << endl;
            }
            else{
                cout << "Invalid" << endl;
            }
        }
    }
}

