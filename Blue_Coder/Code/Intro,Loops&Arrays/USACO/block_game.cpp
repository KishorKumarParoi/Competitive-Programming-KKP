/*  The difference between the novice and the master is that
    The master has failed more times than the novice has tried.
                                                   ~ Koro Sensei
    Be Always honest, never go for Shortcut, Be Looser than
    unethical winner
                                                   ~ Ramayana
    Never Give Up On Your Dream. One Day Dream becomes Reality.
                                                   ~ Arjuna
    Practice, Practice, Practice like Veema so that hard problems
    becomes easy.
                                                   ~ Mahabharat
*/
// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 07-02-23
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
// printf("Case %lld: %lld\n", kase++, n * 5);

using namespace std;

const int N   = 1e6 + 5;
const int M   = 1e9 + 7;
const int INF = 1e9 + 13;
int kase = 1, arr[N];

void solve() {
	int n; cin >> n;
	map<char, int>mp;

	for (char x = 'a'; x <= 'z'; ++x)
		mp[x] = 0;

	// PRINT(mp)

	string s1, s2;

	for (int i = 0; i < n; ++i) {
		cin >> s1 >> s2;
		// d(s1) dl(s2)

		set<char>st;

		for (int j = 0; j < sz(s1); ++j)
			st.insert(s1[j]);
		// print(st)

		for (int j = 0; j < sz(s2); ++j)
			st.insert(s2[j]);

		// print(st)
		for (auto x : st)
			mp[x]++;
	}

	for (auto x : mp)
		cout << x.second << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);

	//TEST
	solve();

	return 0;
}