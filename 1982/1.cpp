#include <bits/stdc++.h>
#define f(a,b,c) for (auto a = b; a < c;a++)


int main(){
  int t;
  std::cin >> t;
  for(int t_ = 0; t_ < t; t_ ++){
    int x1, x2,y1,y2;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    if((x1 >= y1 && x2 <= y2) || (y1 >= x1 && y2 <= x2)){
      std::cout << "NO\n";
    }else{
      std::cout << "YES\n";
    }
  }
}