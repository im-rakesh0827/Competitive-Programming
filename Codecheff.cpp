/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b>c) && (a+c>b) && (b+c>a))
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;
}
*/

/*
#include<iostream>
#include <stdio.h>
using namespace std;
int main(void) {
	// your code goes here
	int n,sum=0;
    cin>>n;
	for(int i=1; i<=n; i++){
	    sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}
*/
#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int sum = 0;
	for(int i = 1; i<=n; i++){
	    sum+=i;
	}
	cout<<sum;
	return 0;
}