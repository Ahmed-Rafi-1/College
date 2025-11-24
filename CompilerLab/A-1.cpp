#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1){
		string s;
		cin >> s;
		int sz = s.size();
		int cnt = 0;
		for(int i=0; i<sz; i++)
		{
			if(s[i]=='0' || s[i]=='1'){
					continue;
			}
			else{
				cnt = 1;
				break;
			}
		}
		if(cnt == 1)
		{
			cout << "Invalid" << endl;
		}
		else if(s[sz-2]=='0' && s[sz-1]=='1')
		{
			cout << "Valid" << endl;
		}
		else{
			cout << "Invalid" << endl;
		}
	}
}

