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

void merge(vector<int>&arr, int s, int e){
	vector<int>temp;
	int i = s, m = (s + e) / 2, j =  m + 1;

	while(i <= m and j <= e){
		if(arr[i] < arr[j]){
			temp.push_back(arr[i]);
			++i;
		}
		else{
			temp.push_back(arr[j]);
			++j;
		}
	}

	while(i <= m){
		temp.push_back(arr[i]);
		++i;
	}

	while(j <= e){
		temp.push_back(arr[j]);
		++j;
	}

	int k = 0;
	for(int idx = s; idx <= e; ++idx){
		arr[idx] = temp[k++];
	}
}

void mergeSort(vector<int>&arr, int s, int e){
	// base case
	if(s >= e)
		return ;

	// normal case

	int m = (s + e) / 2;
	mergeSort(arr, s, m);
	mergeSort(arr, m + 1, e);

	merge(arr, s, e);
}

void solve(){
	int n; cin >> n;
	vector<int>arr(n);

	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	print(arr)
	mergeSort(arr,0, n - 1);

	print(arr)
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}