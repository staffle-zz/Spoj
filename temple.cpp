#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tc() int t; cin>>t; while(t--)
#define print(n) cout<<n<<"\n"
#define inp(n) int n; cin>>n
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define fr(i, n) FOR(i, 0, n, 1)
#define rfr(i, n) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define gcd(a,b)  __gcd(a,b)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define sz size
#define clr clear
#define len length
#define inf (int)1e9
#define eps 1e-9
#define pi 3.1415926535897932384626433832795
#define h 1000000007
#define gc getchar//_unlocked
#define pc putchar//_unlocked
const double PI=acos(-1.0);
#define printlist(a, n) for (ll i = 0; i < n; i++) cout << a[i] << ' ' ; br
#define printvec(v) for (auto itv = v.begin(); itv != v.end(); itv++) cout << *itv << ' ' ; br
#define printset(s) for (auto its = s.begin(); its != s.end(); its++) cout << *its << ' '; br
#define printmap(m) for (auto itm = m.begin(); itm != m.end(); itm++) cout << (*itm).ff << ' ' << (*itm).ss << endl;
#define printmm(m) for (auto itm = m.begin(); itm != m.end(); itm++) cout << (*itm).ff << ' ' << (*itm).ss << endl;
#define print2(a, b) cout << a << ' ' << b; br
#define print3(a, b, c) cout << a << ' ' << b << ' ' << c; br
#define print4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d; br
#define sum(a,n,s) ll s = 0; for (ll i = 0; i < n; i++) s += a[i];
#define br cout << endl
#define inputlist(arr,n) vi arr(n,0); fr(i,n) {cin>>arr[i];}
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef set<int> seti;
typedef multiset<int> mulset;
typedef long long int ll;




signed main()
{
    fast();
    
    inp(n); inputlist(arr,n);
    vi v;
    v.pb(0);
    for (int i = 1; i <=n; ++i)
    {
         v.pb(v[i-1]+arr[i-1]);
    }
    printvec(v);
    return 0;
}
