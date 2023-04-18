#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int b,n;
  while(cin>>b>>n && b!=0 && n!=0){
    vector<int> mon(b);
    for(int &v:mon) cin>>v;
    while(n--){
      int a,d,c; cin>>a>>d>>c;
      mon[a-1]-=c;
      mon[d-1]+=c;
    }
    bool ok=1;
    for(int i=0;i<b;i++){
      if(mon[i]<0){
	ok=0;
	break;
      }
    }
    if(ok) cout<<"S\n";
    else cout<<"N\n";
  }
}
