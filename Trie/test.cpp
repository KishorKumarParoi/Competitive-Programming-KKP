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
const int MOD = 1e9 + 7;

bool wordPattern(string pattern, string s) {
	stringstream str(s);
	string word; 
	map<char, string>mp;
	int i = 0;

	vector<string>v;
	set<char>st1;
	set<string> st2;

	while(str >> word){
		mp[pattern[i++]] = word;
		v.push_back(word);
		st1.insert(pattern[i]);
		st2.insert(word);
	}

   if(sz(st1) != sz(st2))
   	return false;

	// PRINT(mp)

	for(int i = 0; i < pattern.size(); ++i){
		if(mp[pattern[i]] != v[i])
			return false;
	}
	return true;
}

void solve(){
	string pattern, s;
	cin >> pattern;
	cin.ignore();
	getline(cin, s);

	// d(pattern) dl(s)

	cout << wordPattern(pattern, s);
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}