// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 19-05-23
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

int singleNumber(vector<int>& nums) {
	int n = nums.size();

	int bit[34] = {0};

	for(int i = 0; i < 32; ++i){
		for(int j = 0; j < n; ++j){
			if(nums[j] & (1 << i))
				bit[i]++;
		}
	}
	for(int i = 0; i < 32; ++i){
		bit[i] %= 3;
	}
	printArr(0,32,bit);

	int val = 0;
	for(int i = 0; i < 32; ++i){
		if(bit[i]){
			val += (1 << i);
		}
	}

	return val;
}

void solve(){
	int n; cin >> n;
	vector<int>v(n);

	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}

	cout << singleNumber(v);
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}