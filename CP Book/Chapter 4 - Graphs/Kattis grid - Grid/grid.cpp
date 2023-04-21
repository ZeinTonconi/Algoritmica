#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const int MAX_N=510;
const int MAX=1e9;

int X[5]={-1,0,1,0};
int Y[5]={0,1,0,-1};
vector<string> vs;
int dis[MAX_N][MAX_N];

void bfs(int xs,int ys,int n,int m){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) dis[i][j]=MAX;
  }
  dis[xs][ys]=0;
  queue<ii> q;
  q.push(ii(xs,ys));
  while(!q.empty()){
    int x=q.front().first;
    int y=q.front().second;
    q.pop();
    int fac=vs[x][y]-'0';
    for(int i=0;i<4;i++){
      int xk=x+X[i]*fac;
      int yk=y+Y[i]*fac;
      if(xk>=0 && xk<n && yk>=0 && yk<m){
	if(dis[xk][yk]>dis[x][y]+1){
	  dis[xk][yk]=dis[x][y]+1;
	  q.push(ii(xk,yk));
	}
      }
    }
  }
}
int main(){
  int n,m; cin>>n>>m;
  for(int i=0;i<n;i++){
    string a; cin>>a;
    vs.push_back(a);
  }
  bfs(0,0,n,m);
  int ans=(dis[n-1][m-1]<MAX)?dis[n-1][m-1]:-1;
  cout<<ans<<endl;
}
