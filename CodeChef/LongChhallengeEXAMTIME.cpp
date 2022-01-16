#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int Dragon[3];
        for(int i=0; i<3; i++){
            cin>>Dragon[i];
        }
        int Sloth[3];
        for(int i=0; i<3; i++){
            cin>>Sloth[i];
        }

        int d_dsa=0, d_toc=0, drag_sum=0;
        int s_dsa=0, s_toc=0, sloth_sum=0;

        for(int i=0; i<3; i++){
            d_dsa = Dragon[0];
            d_toc = Dragon[1];
            drag_sum+=Dragon[i];

            s_dsa = Sloth[0];
            s_toc = Sloth[1];
            sloth_sum+=Sloth[i];
        }
        if(drag_sum>sloth_sum){
            cout<<"DRAGON\n";
        }else if(drag_sum<sloth_sum){
            cout<<"SLOTH\n";
        }else{
            if(drag_sum==sloth_sum){
                if(d_dsa>s_dsa){
                    cout<<"DRAGON\n";
                }else if(d_dsa<s_dsa){
                    cout<<"SLOTH\n";
                }else{
                    if(d_dsa==s_dsa){
                        if(d_toc>s_toc){
                            cout<<"DRAGON\n";
                        }else if(d_toc<s_toc){
                            cout<<"SLOTH\n";
                        }else{
                            // if(d_dsa==s_dsa && d_toc==s_toc){
                            //     cout<<"TIE\n";
                            // }
                            cout<<"TIE\n";
                        }
                    }
                }
            }
        }

    }
    return 0;
}

//Question link : https://www.codechef.com/JAN222C/problems/EXAMTIME

//Input : 
// 4
// 10 20 30
// 30 20 10
// 5 23 87
// 5 23 87
// 0 15 100
// 100 5 5
// 50 50 50
// 50 49 51

//Output : 
// SLOTH
// TIE
// DRAGON
// DRAGON