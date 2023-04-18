#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int x;
  while(cin>>x && x!=0){
    while(x>=10){
      int aux=0;
      while(x!=0){
	aux+=x%10;
	x/=10;
      }
      x=aux;
    }
    cout<<x<<endl;
  }
}
