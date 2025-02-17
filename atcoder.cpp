#include <bits/stdc++.h>
#include <string.h>
#define f(a,b,c) for (auto a = b; a < c;a++)


int main(){
  int a,b;
  std::cin >> a >> b;
  std::vector<std::pair<int,int>> vec1; 
  std::vector<int> vec2;
  f(i,0,a){ 
    int x;
    std::cin >> x;
    vec1.push_back((std::pair<int,int>){x,i});
  }
  
  std::sort(vec1.begin(), vec1.end(), [](auto &left, auto &right) {
    return left.first < right.first;
  });

  f(i,0,b){ 
    int x;
    std::cin >> x;
    vec2.push_back(x);
  }
  
  int x = 0;
  while(x != b){
    int i = -1;
    while(++i < a ){
      if(vec1[i].first <= vec2[x]){
        break;
      }
    }
    std::cout << ((i==a) ? -1:(vec1[i].second+1)) << '\n';
    x++;
  }

}