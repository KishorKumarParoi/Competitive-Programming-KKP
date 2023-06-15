// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 15-06-23
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

void solve(){
  int n, k; cin >> n >> k;
  vector<int>v(n);
  for(int i = 0; i < n; ++i){
  	cin >> v[i];
  }

  vector<int>ans = {-1, -1};
  unordered_map<int,int>mp;
  int cnt = 0, sum = 0;
  mp[0] = -1;

  for(int i = 0; i < n; ++i){
  	sum += v[i];
  	mp[sum] = i;

  	if(sum == k){
  		ans[0] = 0;
  		ans[1] = i;
  		print(ans);
  		return;
  	}

  	if(mp.find(sum-k) != mp.end()){
  		ans[0] = mp[sum - k] + 1;
  		ans[1] = i;
  		print(ans)
  		return;
  	}
  }

}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  TEST
  solve();

  return 0;
}