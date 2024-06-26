#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long
#define double long double

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 
// *find_by_order, order_of_key

// ******************* DEBUGGER *******************
#ifndef ONLINE_JUDGE
#define db(x)            cerr << #x <<" "; _print(x); cerr << '\n';
#define gt(T)            cerr << "Case #" << T << ": " << '\n';
#else
#define db(x)
#define gt(T)            
#endif

void _print(int t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(bool t) {cerr << ((t)?"true":"false");}

template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// ******************* DEBUGGER END *******************

/*

1. Think Greedy
2. Think Brute Force
3. Think solution in reverse order
4. Think DP [ check constraints carefully ]
5. Check base cases for DP and prove solution for Greedy
6. Think Graph 

*/

const double PI = 3.1415926535;
const int mod =  998244353;
vector<int> p2(40001);
void solve(int T)
{
    gt(T);
    int n ; cin>>n;
    vector<int> a(n);
    vector<int> pref(n+1);
    int mind = 0;
    pref[0]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];
        mind = pref[i+1] < pref[mind] ? (i+1) : mind;
    }
    _print(pref);
    db(mind);
    int ans = 1;
    int cnt0 = 0;
    int cnt1=0;

    for(int i=1;i<=n;i++){
        if(pref[mind]==pref[i]){
            if(pref[mind]>=0){
                cnt1++;
            }
            else{
                cnt0++;
            }
        }
        if(pref[mind]!=pref[i] && (pref[i]>=0)){
            cnt1++;
        }
    }
    // cout<<(1<<0)
    if(cnt0>0){
        ans = (p2[cnt0]-1);
    }
    ans = (ans*p2[cnt1])%mod;
    cout<<ans<<endl;

    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    
    p2[0] = 1;
    for (int i = 1; i < 40001; ++i) p2[i] = 2 * p2[i - 1] % mod;

    cin >> T;

    for(int i = 1; i <= T; i++)
        solve(i);

    return 0;
}