#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N=110;
int n,m; 
vector<string> vs;
bool vis[MAX_N][MAX_N];

int X[10]={-1,-1,0,1,1,1,0,-1};
int Y[10]={0,1,1,1,0,-1,-1,-1};


void flod(int x,int y){
  vis[x][y]=1;
  for(int i=0;i<8;i++){
    int xk=x+X[i];
    int yk=y+Y[i];
    if(xk>=0 && xk<n && yk>=0 && yk<m && !vis[xk][yk] && vs[xk][yk]=='#'){
      flod(xk,yk);
    }
  }
}
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){
    string a; cin>>a;
    vs.push_back(a);
  }
  int c=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(vs[i][j]=='#' && !vis[i][j]){
	c++;
	flod(i,j);
      }
    }
  }
  cout<<c<<endl;
}
