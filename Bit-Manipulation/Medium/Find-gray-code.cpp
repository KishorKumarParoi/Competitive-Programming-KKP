// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 18-05-23
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

void grayCode(int n){
	int limit = (1LL << n);
	for(int i = 0; i < limit; ++i){
		int val = (i ^ (i >> 1));
		bitset<32>r(val);

		// d(val) d(r)
		string s = r.to_string();
		// dl(s.substr(32-n))
		cout << s.substr(32-n) <<  " " << r.to_ulong() << endl;
	}
}

void solve(){
	cout << "Hello World" << endl;
	int n; cin >> n;
	grayCode(n);
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}