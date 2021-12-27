#include<iostream>
using namespace std;
int main()
 {
	//Write Your Code Over Here
	int n;
	cin>>n;
    while(n>0){
        int a, b;
        cin>>a>>b;
        int arr[a];
        for(int i=0; i<a; i++){
            cin>>arr[i];
        }
        for(int i=b; i<a; i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        n--;
    }
	return 0;
}