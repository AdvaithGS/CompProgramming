#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a;i < b;i++)
#define max(a,b) ((a) > (b)) ? (a) : (b)  
#define min(a,b) ((a) < (b)) ? (a) : (b)

int main(){
  int n;
  std::cin >> n;
  std::map<int,int> d;
  f(i,0,n){
    int x;
    std::cin >> x;
    d[x] += 1;
  }
  int ans = 0;
  int reg = 0;
  for(auto i = d.begin();i != d.end();i++){
    if(!(i->second&1)){
      reg++;
    }
    ans += (i->second&1)*i->first;
  }
  std::cout << ans;
}