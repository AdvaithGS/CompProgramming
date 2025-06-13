using namespace std;
#include<bits/stdc++.h>

#define f(a,b,c) for (auto a = b; a != c;a++)
#define fr(a,b) for (auto a : b)
#define vec(a) std::vector<a>
#define inpvec(a,b) f(i,0,a){decltype(b)::value_type x; std::cin >> x;b.push_back(x);}  
#define inp(a) std::cin >> a;
#define printvec(a) for(auto i : a){std::cout << i  <<  ' ';};std::cout << '\n';
#define print(a) std::cout << a << '\n';
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)

long long sum(vector<int> vec, long long n = 0 ){
  for(auto i: vec){
    n += i;
  }
  return n;
}


int main(){
  int t;
  std::cin >> t;
  f(t_,0,t){
    int a,b,c,d;
    inp(a);inp(b);inp(c);inp(d);

    if(b >= min(c,d)){
      cout << "Gellyfish\n";
    }else if(d > min(a,b)){
      cout << "Flower\n";
    }

  }
}
