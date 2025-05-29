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
    vector<int> minOperations(string boxes) {
        vec(int) indeces;
        int sum = 0,count = 0;
        f(i,0,boxes.size()){
            if(boxes[i] == '1') indeces.push_back(i);
        }
        vec(int) ans(boxes.size());

        f(i,0,boxes.size()){
            f(j,0,indeces.size()){
                ans[i] += abs(i - indeces[j]);
            }
        }
        return ans;
    }
};