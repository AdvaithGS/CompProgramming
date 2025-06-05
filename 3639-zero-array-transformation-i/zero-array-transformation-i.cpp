#define f(a,b,c) for (auto a = b; a != c;a++)
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
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> copy(nums.size()+1,0);
        f(i,0,queries.size()){
            copy[queries[i][0]]++;
            copy[queries[i][1]+1]--;
        }
        int carry = 0;
        printvec(copy);
        f(i,0,copy.size()-1){
            carry += copy[i];
            if(nums[i] > carry && nums[i] != 0){
                return 0;
            }
        }
        return 1;

    }
};