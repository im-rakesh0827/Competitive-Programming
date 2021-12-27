#include <iostream>
using namespace std;

int main() {
	
	int a[10000];
	for(int i=1;i<=10000;i++)
	{
	    cin>>a[i];
	    if(a[i]==42)
	    {
	        break;
	    }
	    else
	    {
	        cout<<a[i]<<endl;
	    }
	}
// 	for(int j=1;j<=10000;j++)
// 	{
// 	    cout<<a[j]<<endl;
// 	}
	return 0;
}