// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 02-05-23
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

int makeEqualLength(string &first, string &second){
	int len1 = first.size();
	int len2 = second.size();

	if(len1 < len2){
		for(int i = 0; i < (len2 - len1); ++i){
			first = '0' + first;
			return len2;
		}
	}

	else{
		for(int i = 0; i < (len1 - len2); ++i){
			second = '0' + second;
		}
		return len1;
	}
	return 0;
}

string addBitStrings(string first, string second){
	string result = "";
	int length = makeEqualLength(first, second);

  int carry = 0;

	for(int i = length - 1; i >= 0; i--){
		int firstBit = first.at(i) - '0';
		int secondBit = second.at(i) - '0';

		char ch = (firstBit ^ secondBit ^ carry) + '0';
		result = ch + result;

		carry = ((firstBit & secondBit) | (firstBit & carry) | (secondBit & carry));
	}
	
	if(carry)
			result = '1' + result;
		return result;
}

void solve(){
	string s, ss; cin >> s >> ss;
	cout << addBitStrings(s, ss) << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}