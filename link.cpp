
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
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
	pair<ll,pair<ll,ll> > egcd(ll a, ll b)				//solves ax + by = gcd(a,b) = g
	{								//returns (g,(x,y))
		pair<ll,pair<ll,ll> > ret;

		if (a==0)
		{
			ret.f = b ;
			ret.s.f = 0 ;
			ret.s.s = 1 ;
		}
		else
		{
			ll g, x, y;
			pair<ll,pair<ll,ll> > temp = egcd( b%a, a) ;
			g = temp.f;
			x = temp.s.f;
			y = temp.s.s;
			ret.f = g;
			ret.s.f = y - (b/a)*x ;
			ret.s.s = x;
		}

		return ret;
	}

	ll modinv(ll den, ll m)
	{
		pair <ll,pair<ll,ll> > ans = egcd(den, m) ;
		return (ans.s.f+m) % m ;
	}


	ll moddiv(ll num, ll den, ll m)		// den and m must be coprime
	{
		return (num * modinv(den,m) ) % m ;
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			cout<<moddiv(1,2,mod);
		}
		return 0;
	}
