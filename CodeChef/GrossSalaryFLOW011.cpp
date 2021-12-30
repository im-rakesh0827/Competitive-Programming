#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int basic_sal; cin>>basic_sal;
        long double gross_sal, HRA, DA;
        if(basic_sal<1500){
            HRA = 0.1*basic_sal;
            DA = 0.9*basic_sal;
        }else if(basic_sal>=1500){
            HRA = 500;
            DA = 0.98*basic_sal;
        }
        gross_sal = basic_sal+HRA+DA;
        cout<<fixed<<setprecision(2)<<gross_sal<<"\n";
    }
    return 0;
}