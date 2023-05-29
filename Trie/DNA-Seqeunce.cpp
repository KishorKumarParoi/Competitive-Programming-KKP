// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 21-05-23
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
const int mod = 1e9 + 7;
const int p = 31;

int polyhash(string s){
	int len = s.size(), p_power = 1, hash = 0;

	for(int i = 0; i < len; ++i){
		hash += (s[i] - 'a' + 1) * p_power;
		p_power *= p;
		p_power %= mod;
		hash %= mod;
	}
	return hash;
}

int powr(int a, int b){
	// (a ^ b) 5=% mod

	int res = 1;

	while(b){
		if(b & 1)
			res *= a;
		b >>= 1;
		a *= a;

		a %= mod;
		res %= mod;
	}
	return res;
}

int inv(int x){
	return powr(x, mod - 2);
}

void solve(){
	string text;
	cin >> text;

	int n = text.size(), m = 10;
	vector<string>patterns;

	map<int, string>mp;
	
	for(int i = 0; i + 10 <= n; ++i){
		patterns.push_back(text.substr(i, 10));
	}

	print(patterns)

	for(int i = 0; i < patterns.size(); ++i){
		int patHash = polyhash(patterns[i]);
		int textHash = polyhash(text.substr(0, m));
		int cnt = 0;

		for(int i = 1; i + m <= n; ++i){
			textHash = (textHash - (text[i-1] - 'a' + 1) + mod ) % mod;
			textHash = (textHash * inv(p)) % mod;
			textHash = textHash + ((text[i + m - 1] - 'a' + 1) * powr(p, m - 1)) % mod;
			textHash %= mod;

			if(textHash == patHash){
				cnt++;
			}
		}

		if(cnt >= 2){
			cout << patterns[i] << endl;
		}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}