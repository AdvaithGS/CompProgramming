#include <bits/stdc++.h>
#define f(a,b,c) for (auto a = b; a != c;a++)
#define vec(a) std::vector<a>
#define inpvec(a,b) f(i,0,a){decltype(b)::value_type x; std::cin >> x;b.push_back(x);}  
#define inp(a) std::cin >> a;
#define printvec(a) for(auto i : a){std::cout << i  <<  ' ';};std::cout << '\n';
#define print(a) std::cout << a << '\n';

using namespace std;

long long sum(vector<int> vec, long long n = 0 ){
  for(auto i: vec){
    n += i;
  }
  return n;
}



class Solution {
public:
    string longestPalindrome(string s) {
        pair<int,int> p = {0,0};
        f(i,0,s.length()){
            f(j,i,s.length()){
                int flag = 1;
                f(k,0,(j-i)/2 + 1){
                    if(s[i+k] != s[j-k]){
                        flag = 0;
                        break;
                    }  
                }
                if(flag && (p.second - p.first) < (j-i) ){ 
                    p = {i,j};
                }  
            }
        }
        // print(p.first);print(p.second);
        return s.substr(p.first,1 + p.second-p.first);
    }
};