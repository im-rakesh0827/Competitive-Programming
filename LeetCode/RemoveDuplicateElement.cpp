#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    int removeDuplicate(vector<int>&nums){
        if(nums.size() == 0) return 0; 
        int i=1;
        for(int j=1; j<nums.size(); j++){
            if(nums[j] == nums[j-1])
                continue;
            nums[i] = nums[j];
            i++;
        }
        return i;
    }
};
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        Solution ob;
        cout<<ob.removeDuplicate(v)<<"\n";


    }
    return 0;
}