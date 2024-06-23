// https://atcoder.jp/contests/abc356/tasks/abc356_b
#include <bits/stdc++.h>
#define f(a,b) for (int a = 0;a < b;a++) 
#define min(a,b) a < b ? a : b

int find(std::string s, int n) {
        int ans = n;
        for (int i = n; i >= 0; i--) {
          ans = (s[ans] == min(s[ans], s[i]) ) ? ans : i;
        }
        return ans;
    }

int main(){
  std::string s;
  std::cin >> s;
  // find(s,5);
  // int i = 0;
  // while(i < s.length()){
  //   if(s[i] == '*'){
  //     s.erase(i,1);
  //     s.erase(i-1,1);
  //     i--;
  //   }else{
  //     i++;
  //   }
  // }
  std::cout << find(s,5);
}