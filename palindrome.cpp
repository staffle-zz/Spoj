#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tc() int t; cin>>t; while(t--)
#define printvec(v) for (auto itv = v.begin(); itv != v.end(); itv++) cout << *itv << ' ' ; cout<<endl;

signed main()
{
	fast();
	tc(){
		string str;
		cin>>str;
		// cout<<str<<endl;

		int n=str.length();
		vector<int> s;
		for (int i = 0; i < n; ++i)
		{
			s.push_back(str[i]-'0');
		}
		// printvec(s);

		int m=n/2;
		int fe=m-1;
		int ss;
		if(n & 1)
			ss=m+1;
		else
			ss=m;
		int all9=1;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]!=9) all9=0;
		}
		if(all9){
			cout<<1;
			for (int i = 0; i < s.size()-1; ++i)
			{
				cout<<0;
			}
			cout<<1<<endl;
			continue;
		}
		bool lb=false;
		while (fe >= 0 and s[fe] == s[ss]) 
        	fe--,ss++; 
    	if ( fe < 0 or s[fe] < s[ss]) 
        	lb = true;
    	while(fe >= 0)
	    {
	        s[ss] = s[fe]; 
	        ss++;
	        fe--;
	    }
	    if(lb) 
	    { 
	        int cry = 1; 
	        fe = m - 1; 
	        if (n%2 == 1) 
	        { 
	            s[m] = s[m] + cry; 
	            cry = (s[m]) / 10; 
	            s[m]=(s[m]) % 10; 
	            ss = m + 1; 
	        } 
	        else
	            ss = m;
	        while (fe >= 0) 
	        { 
	            s[fe]=s[fe] + cry; 
	            cry = (s[fe]) / 10; 
	            s[fe]=(s[fe]) % 10; 
	            s[ss++] = s[fe--];
	        } 
	    }
	    for (int i = 0; i<n; ++i)
	    {
	    	cout<<s[i];
	    }
	    cout<<endl;

	}
	return 0;
}