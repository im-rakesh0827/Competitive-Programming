#include "bits/stdc++.h"
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=1; i<n; i++){
		int temp = arr[i];
		int j = i-1;
		while(arr[j]>temp && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(int i=n-1; i>=0; i--){
		if(arr[i]%2==0){
			for(int k=i-1; k>=0; k--){
				if(arr[k]%2==0){
					cout<<arr[k]<<"\n";
					break;
				}
			}
			break;
		}
	}
	return 0;
}