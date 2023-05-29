// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 26-05-23
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

int fastMultiply(int a, int b, int c){
	int res = 0;
	while(b){
		if(b & 1){
			res += a;
		}
		a += a;
		b >>= 1;
		res %= c;
		a %= c;
	}

	return res;
}

void solve(){
	// a, b, c >= 10^15
	int a, b, c; cin >> a >> b >> c;
	cout << fastMultiply(a, b, c) << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}