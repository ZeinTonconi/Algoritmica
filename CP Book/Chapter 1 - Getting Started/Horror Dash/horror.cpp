#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t; cin>>t;
  for(int cas=1;cas<=t;cas++){
    int n; cin>>n;
    int ma=-1;
    for(int i=0;i<n;i++){
      int a; cin>>a;
      ma=max(ma,a);
    }
    printf("Case %d: %d\n",cas,ma);
  }
}
