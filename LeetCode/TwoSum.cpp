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
    int target; cin>>target;
    vector<int> vec;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    Solution ob;
    auto ans = ob.twoSum(vec, target);
    if(ans.size()==2){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }else{
        cout<<"Not found : \n";
    }
    return 0;
}

//Question link : https://leetcode.com/problems/two-sum/


// Input :
// 4 9
// 2 7 11 15

//Output : 0 1
