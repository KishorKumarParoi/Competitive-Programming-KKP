// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 04-05-23
#include <bits/stdc++.h>
            
#define endl "\n"
#define int long long
#define sz(s) (int)s.size()
#define pi acos(-1.0)
#define fr(i,a,b)                         for(int i=a;i<=b;++i)
#define all(v)                            v.begin(),v.end()
#define TEST                              int tc;cin>>tc; while(tc--)
// Debug
#define d(a)                              cout << #a << " : " << a << " ";
#define dl(a)                             cout << #a <<" : " << a << endl;
#define print(v)  for(auto x : v)         {cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v)         {cout<<x.first<<" "<<x.second<<endl;}
#define printArr(a,b,arr)                 for(int i=a;i<=b;++i) { cout<<arr[i]<< " ";} cout<<endl;

using namespace std;

const int N   = 1e6 + 5;
const int MOD = 1e9 + 7;

int swapBits(int x, int p1, int p2, int n){
	 /* xor contains xor of two sets */
    int Xor = ((x >> p1) ^ (x >> p2)) & ((1U << n) - 1);
 
    /* To swap two sets, we need to again XOR the xor with
     * original sets */
    return x ^ ((Xor << p1) | (Xor << p2));
}

void solve(){
  int x, p1, p2, n; cin >> x >> p1 >> p2 >> n;
  cout << swapBits(x,p1,p2,n) << endl;
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}