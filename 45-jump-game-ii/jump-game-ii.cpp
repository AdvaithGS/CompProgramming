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

    int jump(vector<int>& nums) {
        int cur = 0, ans = 0;
        while(cur < nums.size()-1){
            int m = cur;
            f(i,1,nums[cur]+1){
                if(cur+i >= nums.size()-1){
                    m = cur + i;
                    continue;
                }
                m = ((cur+i+nums[cur+i]) > (m+nums[m])) ? cur+i : m;
                
            }
            cur = m;
            ans ++;
            print(cur);
        }
        return ans;
    }
};