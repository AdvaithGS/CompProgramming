#include <bits/stdc++.h>
#define f(a,b,c) for (auto a = b; a < c;a++)
#define inp(a) std::cin >> a

int main(){
  int t;
  std::cin >> t;
  f(t_,0,t){
    int n,l,r;
    inp(n);inp(l);inp(r);
    std::vector<int> cards(n);
    f(a,0,n){
      std::cin >> cards[a];
    }
    int s,e, sum, ans;
    f(i,0,n){
      if(sum <= l && sum >= r && cards[i] + sum > l){
        ans ++;
        s = i;
      }else if(cards[i] + sum < l){
        
      }
    }
  }
}