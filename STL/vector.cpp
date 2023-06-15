// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 18-04-23
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
  int n ; cin >> n;
  vector<int>v(100, 0); // fill constructor
  vector<int>v1 ; 
  // v1.reserve(100);   // reserving memory for capacity and size collision

  for(int i = 0; i < n; ++i){
  	int x; cin >> x;
  	v1.push_back(x);
  	cout << "Capacity : " << v1.capacity() << " " << "Size : " << v1.size() << endl;
  }

  v = v1;
  v.resize(n);

  sort(v.begin(), v.end());
  for(auto x : v)
    cout << x << endl;

  cout << v.back() << " " << v.at(4) << " " << v[2] << endl;

  v.erase(v.begin()+2);
  print(v)
  v.push_back(100);
  print(v)
  d(v.capacity()) dl(v.size())
  v.clear();
  print(v)
  d(v.capacity()) dl(v.size())
  print(v1)
  
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}