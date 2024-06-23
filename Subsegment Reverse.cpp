#include <bits/stdc++.h>

int main(){
  int n,l,r;
  std::cin >> n >> l >> r;
  for(int i = 1;i <= n;i++){
    if(i >= l && i <= r){
      std::cout << r - (i-l) << ' ';
    }else{
      std::cout << i << ' ';
    }
  }
}



// https://atcoder.jp/contests/abc356/tasks/abc356_a
