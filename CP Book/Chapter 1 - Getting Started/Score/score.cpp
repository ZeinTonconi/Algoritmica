#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t; cin>>t;
  while(t--){
    string x; cin>>x;
    int ans=0;
    int c=0;
    for(int i=0;i<x.size();i++){
      if(x[i]=='O') c++;
      else c=0;
      ans+=c;
    }
    cout<<ans<<endl;
  }
}
