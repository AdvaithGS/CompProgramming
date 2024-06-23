#include <iostream>
#include <vector>

int main(){
  size_t n;
  std::cin >> n;
  std::vector<int> vec(n);
  for(int i = 0;i < n;i++){
    std::cin >> vec[i];
  }
  int x;
  std::cin >> x;
  int k = 0;
  for(int b = n/2; b != 1; b /=2){
    while( vec[b + k] <= x){
      k += b;
    }
  }
  if(vec[k] == x){
    std::cout << k << '\n';
  }else{
    std::cout << -1 << '\n';
  }
}