#include <bits/stdc++.h>
#define f(a,b,c) for (auto a = b; a < c;a++)
#define min(a,b) (a) < (b) ? (a) : (b)

int main(){
  int t;
  std::cin >> t;
  for(int t_ = 0; t_ < t; t_ ++){
    int x,y,z;
    std::cin >> x >> y >> z;
    if(y == 2){
      std::cout << 1 << '\n';
      continue;
    }
    f(i,0,z){
      x += 1;
      while(x%y == 0){
        x /= y;
      }
    }
    std::cout <<  x << '\n';
  }
}