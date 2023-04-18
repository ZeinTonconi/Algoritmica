#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t; cin>>t;
  for(int cas=1;cas<=t;cas++){
    int a,b,c; cin>>a>>b>>c;
    cout<<"Case "<<cas<<": ";
    if(a>20 || b>20 || c>20){
      cout<<"bad\n";
    }
    else cout<<"good\n";
  }
}
