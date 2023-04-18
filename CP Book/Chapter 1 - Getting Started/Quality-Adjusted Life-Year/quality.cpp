#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n; cin>>n;
  double ans=0;
  for(int i=0;i<n;i++){
    double a,b; cin>>a>>b;
    ans+=a*b;
  }
  printf("%.6f\n",ans);
}
