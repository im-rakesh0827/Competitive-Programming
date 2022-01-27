#include "bits/stdc++.h"
#include <iomanip> 
using namespace std;

int main()  {
    int n; cin>>n;
    long long int m; cin>>m;
    char c; cin>>c;
    float f; cin>>f;
    long double d; cin>>d;
    cout<<n<<"\n"<<m<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<f<<"\n";
    cout<<fixed<<setprecision(9)<<d<<"\n";
    return 0;
}

//Question link : https://www.interviewbit.com/problems/variable-and-types/


//Input : 5 1234567891231 z 24.23 1214523.028352

//Output : 
// 5
// 1234567891231
// z
// 24.230
// 1214523.028352000