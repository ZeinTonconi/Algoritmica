#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n;
  int cas=0;
  while(cin>>n && n!=0){
    int ans=0;
    for(int i=0;i<n;i++){
      int a; cin>>a;
      if(a==0) ans--;
      else ans++;
    }
    cas++;
    cout<<"Case "<<cas<<": "<<ans<<endl;
    
  }
}
