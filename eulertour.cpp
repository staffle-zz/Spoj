#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <complex>
#include <chrono>
#define endl "\n"
#define ll long long int
#define printvec(v) for (auto itv = v.begin(); itv != v.end(); itv++) cout << *itv << ' ' ; cout<<endl
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y) 
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
const int mx = 100010;
vector<bool> visited(mx+1,0);
int n;
vector< vector<int> > G(mx+1);
vector<int> col(mx+1);
vector<int> bfs(int x)
{
queue<int> q;
q.push(x);
visited[x]=true;
vector<int> res;
while(!q.empty()){
	int a=q.front() ; q.pop() ; //cout<<a<<" ";
	int f=0;
	// cout<<a<<endl;
	for(int i=0;i<G[a].size();i++){
		if(!visited[G[a][i]]){
			if(col[G[a][i]]==0) {f=1;}
			q.push(G[a][i]), visited[G[a][i]]=true; 
		}
	}
	if(f==0 and col[a]==1)
		res.push_back(a);
}
return res;
}

int main()
{
	col.clear();
	std::ios::sync_with_stdio(false);
	for(int i=0; i<mx+1; i++)
	{
		G[i].clear();
	}
	fill(all(visited),0);			
	cin>>n;
	int root;
	for(int i = 1 ; i <= n ; i++)
	{
		int a; int c;
		cin>>a>>c;
		if (a == -1)
			root=i;
		else{
			G[i].eb(a);
			G[a].eb(i);
		}
		col[i]=c;
	}
	vector<int> res=bfs(root);
	if(res.size()==0)
		cout<<-1<<endl;
	sort(all(res));
	printvec(res);
	return 0;
}