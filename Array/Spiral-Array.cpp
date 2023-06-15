// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 14-06-23
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

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<int>>A(n, vector<int>(m,0));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> A[i][j];
		}
	}

  // for(int i = 0; i < n; ++i){
  // 	for(int j = 0; j < m; ++j){
  // 		cout << A[i][j] << " ";
  // 	}
  // 	cout << endl;
  // }

	int top = 0, left = 0, right = m - 1, bottom = n - 1;

	while(left < m && right >= 0 && top < n && bottom >= 0){
		for(int i = left; i <= right; ++i){
			cout << A[top][i] << " ";
		}
		++top;

		if(top > bottom)
			break;

		for(int i = top; i <= bottom; ++i){
			cout << A[i][right] << " ";
		}
		--right;

		if(right < left)
			break;

		for(int i = right; i >= left; --i){
			cout << A[bottom][i] << " ";
		}
		--bottom;

		if(bottom < top)
			break;

		for(int i = bottom; i >= top; --i){
			cout << A[i][left] << " ";
		}
		++left;

		if(left > right)
			break;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}