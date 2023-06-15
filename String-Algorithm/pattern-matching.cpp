// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 20-05-23
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

int cnt = 0;

struct node{
	node *nxt[26];
	bool is_end;

	node(){
		for(int i = 0; i < 26; ++i){
			nxt[i] = NULL;
		}
		is_end = false;
		++cnt;
	}
};

node *root;

void insert_trie(string s){
	node *cur = root;
	int len = s.size();

	for(int i = 0; i < len; ++i){
		int imap = s[i] - 'a';
		if(cur->nxt[imap] == NULL){
			cur->nxt[imap] = new node();
		}
		cur = cur->nxt[imap];
	}

	// cur->is_end = true;
} 

bool search_trie(string s){
	node *cur = root;
	int len = s.size();

	for(int i = 0; i < len; ++i){
		int imap = s[i] - 'a';
		if(cur->nxt[imap] == NULL)
			return false;
		cur = cur->nxt[imap];
	}
	return true;
}

void solve(){

	root = new node();
	string s; cin >> s;

	for(int i = 0; i < (int)s.size(); ++i){
		insert_trie(s.substr(i));
	}

	string ss; cin >> ss;
	cout << cnt << endl;

	if(search_trie(ss))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}