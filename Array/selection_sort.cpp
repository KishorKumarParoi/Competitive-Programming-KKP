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

void selection_sort(vector<int>&arr, int n){
	for(int i = 0; i < n - 1; ++i){
		int min_idx = i;
		for(int j = i + 1; j < n; ++j){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		// if(min_idx != i)
		swap(arr[min_idx], arr[i]);
	}
}

void solve(){
	int n; cin >> n;
	vector<int>arr(n);
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	selection_sort(arr, n);
	print(arr)
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}