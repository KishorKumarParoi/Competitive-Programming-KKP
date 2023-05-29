// Let's Begin Mara Khawa ^+^
// author : @I_Love_My_Sherniii

// 19-05-23
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

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>st;
        int lim = (1 << nums.size());
        for(int i = 0; i < lim; ++i){
            vector<int>v;
            for(int j = 0; j < nums.size(); ++j){
                if(i & (1 << j)){
                    v.push_back(nums[j]);
                }
            }
            sort(v.begin(), v.end());
            st.insert(v);
        }

        // unique(ans.begin(), ans.end());
        vector<vector<int>>ans;

        for(auto x : st){
            ans.push_back(x);
        }
        return ans;
    }
};

void solve(){
  
}

int32_t main(){
  ios_base::sync_with_stdio(!cin.tie(nullptr));
  
  solve();

  return 0;
}