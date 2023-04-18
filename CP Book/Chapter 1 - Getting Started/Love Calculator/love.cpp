#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int love(string x){
  int lo=0;
  for(int i=0;i<x.size();i++){
    if(isalpha(x[i])){
      if(isupper(x[i])){
	lo+=x[i]-'A'+1;
      }
      else {
	lo+=x[i]-'a'+1;
      }
    }
  }
  while(lo>=10){
    int aux=0;
    while(lo!=0){
      aux+=lo%10;
      lo/=10;
    }
    lo=aux;
  }
  return lo;
}
int main(){
  string x,y;
  while(getline(cin,x)){
    getline(cin,y);
    double lo1=love(x),lo2=love(y);
    double ans=(min(lo2,lo1)/max(lo1,lo2))*100;
    printf("%.2f %\n",ans);
  }
}
