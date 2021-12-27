#include "bits/stdc++.h"
using namespace std;
int main(){
    string name[] = { "Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks" }
  int n = name.length();
  int longest = -99999;
  for(int i=0; i<n; i++){
    longest = max(longest, (name[i].length()));
  }
  cout<<longest<<"\n";
  return 0;
}
