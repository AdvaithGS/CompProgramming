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
    int maxSubArray(vector<int>& v) {
        int curSum = v[0];
        int n = v.size();
        long maxSum = v[0];
        f(i, 1, n) {
            if (curSum < 0) {
                curSum = v[i];
            } else {
                curSum += v[i];
            }
            maxSum = max(maxSum, curSum);
        }
        return (maxSum);
    }
};