// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 17-01-23
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
	int x, y; cin >> x >> y;
	int p = 1, pos = x, step = 0, add = 1, prev = x;

	if (x == y) {
		cout << 0 << endl;
		return;
	}

	if (x < y) {
		while (1) {
			if (p & 1) {
				// d(p) d(pos)
				pos += add;
				step += (min(pos, y) - prev);
				// d(pos) dl(step)

				if (pos >= y)
					break;
				// d(prev)
				prev = pos;
				pos = x;
				// d(prev) dl(pos)
			}
			else {
				// d(p) d(pos)
				pos -= add;
				step += (prev - pos);
				// d(pos) dl(step)

				// d(prev)
				prev = pos;
				pos = x;
				// d(prev) dl(pos)
			}
			add *= 2;
			p++;
		}
	}

	else {
		p = 1, pos = x, step = 0, add = 1, prev = x;
		
		while (1) {
			if (p & 1) {
				// d(p) d(pos)
				pos += add;
				step += (pos - prev);
				// d(pos) dl(step)

				// d(prev)
				prev = pos;
				pos = x;
				// d(prev) dl(pos)
			}
			else {
				// d(p) d(pos)
				pos -= add;
				
				step += (prev - max(pos, y));
				if(y >= pos)
					break;
				
				// d(pos) dl(step)

				// d(prev)
				prev = pos;
				pos = x;
				// d(prev) dl(pos)
			}
			add *= 2;
			p++;
		}
	}

	cout << step << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);

	//TEST
	solve();

	return 0;
}