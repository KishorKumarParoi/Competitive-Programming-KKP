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

double f(double x){
	double y = -(x * x) + 4 * x;
	return y;
}

void solve(){
	double left = -100, right = 100;
	while(right - left > 0.00000000001){
		double mid1 = (2 * left + right) / 3;
		double mid2 = (left + 2 * right) / 3;

		if(f(mid1) < f(mid2)){
			left = mid1;
		}
		else{
			right = mid2;
		}
	}

	cout << setprecision(15) << fixed;
	cout << left << endl;
	cout << right << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));
	
	solve();

	return 0;
}