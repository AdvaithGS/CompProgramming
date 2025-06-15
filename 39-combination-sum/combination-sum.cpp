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

class Solution {
public:
    vector<int> coins;
    vector<vector<int>> ans;
    
    void sol(vector<int>& candidates, int target, int cur){
        printvec(coins);
        print(target);
        if(target <= 0){
            if(!target) ans.push_back(coins);
            return;
        }

        for(int x : candidates){
            if( x >= cur){
                coins.push_back(x);
                sol(candidates,target-x,x);
                coins.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sol(candidates,target,0);
        return ans;
    }
};