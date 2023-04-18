#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int g,s,c;
  cin>>g>>s>>c;
  int buy=g*3+s*2+c*1;
  if(buy>=2){
    if(buy>=8) cout<<"Province ";
    else if(buy>=5) cout<<"Duchy ";
    else cout<<"Estate ";
    cout<<"or ";
    if(buy>=6) cout<<"Gold\n";
    else if(buy>=3) cout<<"Silver\n";
    else cout<<"Copper\n";
  }
  else{
    cout<<"Copper\n";
  }
}

