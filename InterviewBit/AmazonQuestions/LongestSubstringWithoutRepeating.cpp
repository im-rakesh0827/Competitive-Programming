#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    int lengthOfLongestSubstring(string s){
        int n = s.length();
        if(s.size()==0)return 0;
        int i=0,j=0;
        vector<int> v(326, 0);
        v[s[0]]++;
        int ans=1;
        while(1){
            if(j==n-1) break;
            if(v[s[j+1]] == 0){
                j++;
                v[s[j]]++;
                ans=max(ans,j-i+1);
            }
            else {
                v[s[i++]]--;
            }
        }
        return ans;
    }
};
int main(){
    string str;
    getline(cin, str);
    Solution ob;
    cout<<ob.lengthOfLongestSubstring(str)<<"\n";
    return 0;
}