#include "bits/stdc++.h"
using namespace std;
int main() {
	int T; cin>>T;
	while(T--){
	    int arr[3][2];
	    for(int i=0; i<3; i++){
	        for(int j=0; j<2; j++){
	            cin>>arr[i][j];
	        }
	    }
	    vector<int> v;
	    int result = 0;
	    for(int i=0; i<3; i++){
	        int sum=0;
	        for(int j=0; j<2; j++){
	           sum += arr[i][j];
	        }
	        v.push_back(sum);
	    }
	    for(int i=0; i<v.size(); i++){
	        result = max(result, v[i]);
	    }
	    cout<<result<<"\n";
	}
	return 0;
}

//Question link : https://www.codechef.com/EXUN21C/problems/POPCORN

// Input : 
// 3
// 3 6
// 5 10
// 8 7
// 99 1
// 55 55
// 33 51
// 54 146
// 5436 627
// 1527 5421

//Output : 
// 15
// 110
// 6948
