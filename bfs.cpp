#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <complex>
#include <chrono>
#define endl "\n"
#define ll long long int
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
const int MX = 100010;			// maximum no. of nodes in graph
vector<bool> visited(MX+1,0);
int n;
vector< vector<pair<int, ll>> > G(MX+1);		// adjacency list, (edge,cost) pair
void bfs(int x){
	queue<int> q;
	q.push(x);
	visited[x]=true;
	while(!q.empty()){
		int a=q.front() ; q.pop() ; cout<<a<<" ";
		for(int i=0;i<G[a].size();i++)
			if(!visited[G[a][i]])
				q.push(G[a][i]), visited[G[a][i]]=true;
	}
}

int main()
{

	std::ios::sync_with_stdio(false);

	int T;
	cin>>T;

	while(T--)
	{

		for(int i=0; i<MX+1; i++)
		{
			G[i].clear();
		}
		fill(all(visited),0);

		int m;					// no. of edges
		cin>>n>>m;
		for(int i = 1 ; i <= m ; i++)
		{

			int u,v;
			ll c;
			cin>>u>>v;			// 1 based indexing of nodes
			
			G[u].eb(v,1);
			G[v].eb(u,1);

		}
		bfs(1);

	}
	return 0;
}