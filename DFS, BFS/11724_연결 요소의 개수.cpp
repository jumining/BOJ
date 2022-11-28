
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  int N, M, u, v;
  cin >> N >> M;
  
  vector<int> adj[1001];
  bool vis[1001];
  int num = 0;
  
  for(int i=0; i<M; i++) { // 입력
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  
  for(int i=1; i<=N; i++) {
    if(vis[i]) continue;
    num++;
    queue<int> q;
    q.push(i);
    vis[i] = true;
    
    while(!q.empty()) {
      int cur = q.front();
      q.pop();
      for(auto nxt : adj[cur]) {
        if(vis[nxt]) continue;
        q.push(nxt);
        vis[nxt] = true;
      }
    }
  }
  cout << num;
}
