// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 14-01-23
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
	int n; cin >> n;
	vector<int>counter(3), shell(3);

	for (int i = 0; i < 3; ++i) {
		shell[i] = i;
	}

	for (int i = 0; i < n; ++i) {
		int a, b, g; cin >> a >> b >> g;
		a--, b--, g--;

		swap(shell[a], shell[b]);
		counter[shell[g]]++;
	}

	cout << max({counter[0], counter[1], counter[2]}) << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	// freopen("shell.in", "r", stdin);
	// freopen("shell.out", "w", stdout);

	//TEST
	solve();

	return 0;
}