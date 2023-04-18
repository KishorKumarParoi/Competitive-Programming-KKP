// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 17-01-23
#include <bits/stdc++.h>
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")

/*
  Focus on Corner Case
    1. N == 1
    2. N == 1, x == 1, y == 1
    3. N == n
*/

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
const int M   = 1e9 + 7;
const int INF = 1e9 + 13;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	string ss[n + 10];
	string s[110];

	for (int i = 0; i < n; ++i) {
		cin >> ss[i];
	}

	// for (int i = 0; i < n; ++i) {
	// 	for (int j = 0; j < m; ++j) {
	// 		cout << ss[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	for (int i = 0; i < n; ++i) {
		string ans = "";
		for (int j = 0; j < m; ++j) {
			for (int p = 0; p < k; ++p) {
				ans += ss[i][j];
			}
		}
		for (int p = 0; p < k; ++p)
			cout << ans << endl;
	}
}

int32_t main() {
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);

	//TEST
	solve();

	return 0;
}