#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N=110;
int n,m; 
vector<string> vs;
bool vis[MAX_N][MAX_N];

int X[5]={-1,0,1,0};
int Y[5]={0,1,0,-1};
void flod(int x,int y){
  vis[x][y]=1;
  for(int i=0;i<4;i++){
    int xk=X[i]+x;
    int yk=Y[i]+y;
    if(xk>=0 && xk<n && yk>=0 && yk<m && !vis[xk][yk] && vs[xk][yk]=='-'){
      flod(xk,yk);
    }
  }
}
int main(){
  int cas=0;
  while(cin>>n>>m){
    memset(vis,0,sizeof vis);
    vs.clear();
    for(int i=0;i<n;i++){
      string a; cin>>a;
      vs.push_back(a);
    }
    int c=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if(!vis[i][j] && vs[i][j]=='-'){
	  flod(i,j);
	  c++;
	}
      }
    }
    cas++;
    printf("Case %d: %d\n",cas,c);
  }
}
