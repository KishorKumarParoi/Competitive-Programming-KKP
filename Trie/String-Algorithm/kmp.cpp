// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 25-05-23
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


vector<int> LPS_Array(string pattern){
	int len = pattern.size();
	int index = 0;
	vector<int>lps(len, 0);

	for(int i = 1; i < len;){
		if(pattern[index] == pattern[i]){
			lps[i] = index + 1;
			++index, ++i;
		}
		else{
			if(index != 0){
				index = lps[index - 1];
			}
			else{
				lps[i] = index;
				++i;
			}
		}
	}

	return lps;
}

void kmp(string pattern, string text){
	vector<int>lps = LPS_Array(pattern);
	int i = 0, j = 0;
	int n = text.size(), m = pattern.size();
	bool found = false;

	while(i < n){
		if(text[i] == pattern[j]){
			++i, ++j;
		}
		else{
			if(j != 0){
				j = lps[j - 1];
			}
			else{
				++i;
			}
		}

		if(j == m){
			cout << "Found in index " << i - m << endl;
			found = true;
		}
	}

	if(!found){
		cout << "Not Found" << endl;
	}
}

void solve(){
  string pattern, text;
  getline(cin, text);
  getline(cin, pattern);

  print(LPS_Array(pattern))
  kmp(pattern, text);
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}