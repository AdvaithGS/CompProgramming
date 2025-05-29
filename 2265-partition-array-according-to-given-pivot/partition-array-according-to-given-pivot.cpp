#include <bits/stdc++.h>
#define f(a,b,c) for (auto a = b; a != c;a++)
#define vec(a) std::vector<a>
#define inpvec(a,b) f(i,0,a){decltype(b)::value_type x; std::cin >> x;b.push_back(x);}  
#define inp(a) std::cin >> a;
#define printvec(a) for(auto i : a){std::cout << i  <<  ' ';};std::cout << '\n';
#define print(a) std::cout << a << '\n';
#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b

using namespace std;

long long sum(vector<int> vec, long long n = 0 ){
  for(auto i: vec){
    n += i;
  }
  return n;
}

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        queue<int> gre;
        queue<int> les;
        queue<int> eq;
        f(i,0,nums.size()){
            if(nums[i] < pivot){
                les.push(nums[i]);
            }else if(nums[i] > pivot){
                gre.push(nums[i]);
            }else{
                eq.push(nums[i]);
            }
        }
        vec(int) ans; 
        while(!les.empty()){
            ans.push_back(les.front());
            les.pop();
        }
        while(!eq.empty()){
            ans.push_back(eq.front());
            eq.pop();
        }
        while(!gre.empty()){
            ans.push_back(gre.front());
            gre.pop();
        }
        return ans;
    }
};