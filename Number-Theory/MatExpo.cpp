// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 31-05-23
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
const int sz = 2;

struct Mat{
	int m[sz][sz];
	Mat(){
		memset(m, 0, sizeof(m));
	}

	void identity(){
		for(int i = 0; i < sz; ++i){
			m[i][i] = 1;
		}
	}

	Mat operator* (Mat a){
		Mat res;
		for(int i = 0; i < sz; ++i){
			for(int j = 0; j < sz; ++j){
				for(int k = 0; k < sz; ++k){
					res.m[i][j] += m[i][k] * a.m[k][j];
					res.m[i][j] %= MOD;
				}
			}
		}
		return res;
	}
};

int Fib(int n){
	Mat res;
	res.identity();
	Mat T;
	T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;

	if(n <= 2) 
		return 1;
	n -= 2;

	while(n){
		if(n & 1)
			res = res * T;
		T = T * T;
		n >>= 1LL;
		// res %= MOD;
		// T %= MOD;
	}

	return (res.m[0][0]  + res.m[0][1] ) % MOD;
}

void solve(){
  cout << Fib(10);
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}