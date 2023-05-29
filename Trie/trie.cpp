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
		cnt++;
	}
};

node *root;

void insert_trie(string s){
	node *cur = root;
	int len = s.size();

	for(int i = 0; i < len; ++i){
		int imap = s[i] - 'a';

		// new node
		if(cur->nxt[imap] == NULL){
			cur->nxt[imap] = new node();
		}

		// goto that node
		cur = cur->nxt[imap]; 
	}

	// last node
	cur->is_end = true;
}

bool search_trie(string s){
	node *cur = root;
	int len = s.size();

	for(int i = 0; i < len; ++i){
		int imap = s[i] - 'a';

		if(cur->nxt[imap] == NULL){
			return false;
		}
		cur = cur->nxt[imap];
	}
	return cur->is_end;
}

void solve(){

	root = new node();

	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		string s; cin >> s;
		insert_trie(s);
	}

	string s; cin >> s;
	if(search_trie(s)){
		cout << "Found in " << cnt << " steps" endl;
	}
	else{
		cout << "Not Found" << endl;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(!cin.tie(nullptr));

	solve();

	return 0;
}