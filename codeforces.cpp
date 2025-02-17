#include <bits/stdc++.h>
#define f(a,b,c) for (auto a = b; a != c;a++)
#define vec(a) std::vector<a>
#define inpvec(a,b) f(i,0,a){decltype(b)::value_type x; std::cin >> x;b.push_back(x);}  
#define inp(a) std::cin >> a;
#define printvec(a) for(auto i : a){std::cout << i  <<  ' ';};std::cout << '\n';
#define print(a) std::cout << a << '\n';

int test(std::string str, int n){
  if(n == str.length()){
    return 0;
  }
  int i = n;
  while(i!=str.length()  && str[i]== '0'){
    i++;
  }
  if(i == str.length()){return 0;}
  return 1 + 
}

int main(){
  int t;
  std::cin >> t;
  f(t_,0,t){
    int n;
    inp(n);
    std::cin >> n;
    std::string str;
    inp(str);
    test(str,0);
  }
}