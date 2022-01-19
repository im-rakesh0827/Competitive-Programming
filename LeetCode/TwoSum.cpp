#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
        
    }
};

int main(){
    int n; cin>>n;
    int result; cin>>result;
    vector<int> vec;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    Solution ob;
    auto ans = ob.twoSum(vec, n);
    if(ans.empty()){
        cout<<"Not found : \n";
    }else{
        for(int p:ans){
            cout<<p<<" ";
        }
    }
    return 0;
}