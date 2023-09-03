#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define inf 1e18
#define ll long long int
//#define endl '\n'
#define mem(a,x) memset(a,x,sizeof(a))
#define double long double
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
    return uniform_int_distribution<int>(l, r) (rng);
}
//cout << "0th element: " << *A.find_by_order(0) << endl;
//cout << "No. of elems smaller than 6: " << A.order_of_key(6) << endl;
//priority_queue <int, vector<int>, greater<int>>
ll pow1(ll a,ll b){ll ans=1; while(b>0){if(b%2==0){b=b/2;a=(a*a)%mod;}else{b--;ans=(ans*a)%mod;}}return ans;}
ll mod1=1e9+9;
ll pow2(ll a,ll b){ll ans=1; while(b>0){if(b%2==0){b=b/2;a=(a*a)%mod1;}else{b--;ans=(ans*a)%mod1;}}return ans;}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
const int N=2e3+2;
void solve()
{
    ll n,i,m,j;
    string s="vika";
    cin>>n>>m;
    char ch[n+2][m+2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ch[i][j];
        }
    }
    j=0;
    for(i=0;i<4;i++)
    {
        while(1)
        {
            ll a=0;
            if(j>=m)
            {
                cout<<"NO"<<endl;
                return;
            }
            for(ll l=0;l<n;l++)
            {
                if(ch[l][j]==s[i])
                {
                    a++;
                    break;
                }
            }
            j++;
            if(a>0)
            {
                break;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t=1;
    int cs=1;
    cin>>t;
    while (t--)
    {
        //cout<<"Case "<<cs<<": ";
        solve();
        cs++;
    }
}