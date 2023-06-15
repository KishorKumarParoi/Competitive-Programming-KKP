// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 30-05-23
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

int partition(vector<int>&arr, int s, int e){
	int i = s - 1;
	for(int j = s; j < e; ++j){
		if(arr[j] < arr[e]){
			++i;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i+1], arr[e]);
	return i + 1;
}

void quickSort(vector<int>&arr, int s, int e){
	// base case
	if(s >= e)
		return;

  // recursion case
	int p = partition(arr, s, e);
	quickSort(arr, s, p - 1);
	quickSort(arr, p + 1, e);
}

void solve(){
  int n; cin >> n;
  vector<int>arr(n);
  for(int i = 0; i < n; ++i){
  	cin >> arr[i];
  }
  
  quickSort(arr, 0, n - 1);
  print(arr)
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}