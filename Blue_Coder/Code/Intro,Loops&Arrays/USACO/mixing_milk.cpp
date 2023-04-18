// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 14-01-23
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
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
#define print(v)  for(auto x : v)         {cout<<x<<endl;   }  cout<<endl;
#define PRINT(v)  for(auto x : v)         {cout<<x.first<<" "<<x.second<<endl;}
#define printArr(a,b,arr)                 for(int i=a;i<=b;++i) { cout<<arr[i]<< " ";} cout<<endl;

using namespace std;

const int N   = 1e6 + 5;
const int M   = 1e9 + 7;
const int INF = 1e9 + 13;

void solve() {
	vector<int>c(3), a(3);
	for (int i = 0; i < 3; ++i) {
		cin >> c[i] >> a[i];
	}

	int lim = 5;
	for (int i = 0; i < 100; ++i) {
		int src = i % 3;
		int des = (i + 1) % 3;

		int val = min(c[des] - a[des], a[src]);
		a[des] += val;
		a[src] -= val;
		lim--;
	}

	// cout << "heel";
	for(auto x : a)
		cout << x << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

	//TEST
	solve();

	return 0;
}