#define f(a,b,c) for (auto a = b; a != c;a++)
// #define vec(a) std::vector<a>
#define inpvec(a,b) f(i,0,a){decltype(b)::value_type x; std::cin >> x;b.push_back(x);}  
#define inp(a) std::cin >> a;
#define printvec(a) for(auto i : a){std::cout << i  <<  ' ';};std::cout << '\n';
#define print(a) std::cout << a << '\n';
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)

using namespace std;

long long sum(vector<int> vec, long long n = 0 ){
  for(auto i: vec){
    n += i;
  }
  return n;
}

class Solution {
public:
    vector<int> vec;
    stack<int> st;
    void dfs(int n){
        // printvec(vec);
        if(st.empty()){
            return;
        }
        int i = st.top();
        st.pop();
        int r = i==0;
        while(10*i + r <= n && r <= 9){
            st.push(10*i + r);
            vec.push_back(10*i + r);
            dfs(n);
            r++;
        }
    }
    vector<int> lexicalOrder(int n) {
        
        int i = 0;
        st.push(i);
        dfs(n); 
        return vec;     
    }
};