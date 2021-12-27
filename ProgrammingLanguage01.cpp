#include <iostream>
using namespace std;
int main() {
	int T;  cin>>T;
	while(T--){
	    int n=4;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    if((arr[0]==arr[2] && arr[1]==arr[3]) || (arr[0]==arr[3] && arr[1]==arr[2])){
	        cout<<"1\n";
	    }else if((arr[0]==arr[n-2] && arr[1]==arr[n-1]) || (arr[0]==arr[n-1] && arr[1]==arr[n-2])){
	        cout<<"2\n";
	    }else{
	        cout<<"0\n";
	    }
	}
	return 0;
}
