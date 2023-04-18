#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int people,chicken;
  cin>>people>>chicken;
  string ans="Dr. Chaz ";
  int dif=abs(people-chicken);
  if(people>chicken)
    ans+="needs ";
  else
    ans+="will have ";
  cout<<ans<<dif;
  ans="";
  if(people>chicken) ans+=" more";
  ans+=" piece";
  if(dif!=1)
    ans+="s";
  ans+=" of chicken";
  if(people<chicken)
    ans+=" left over";
  ans+='!';
  cout<<ans<<endl;
}
