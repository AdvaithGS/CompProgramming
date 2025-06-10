#define f(a,b,c) for (auto a = b; a != c;a++)
#define vec(a) std::vector<a>
#define inpvec(a,b) f(i,0,a){decltype(b)::value_type x; std::cin >> x;b.push_back(x);}  
#define inp(a) std::cin >> a;
#define printvec(a) for(auto i : a){std::cout << i  <<  ' ';};std::cout << '\n';
#define print(a) std::cout << a << '\n';
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)

class Solution {
public:
    int maxDifference(string s) {
        map<int,int> mp;
        int max1 = INT_MIN; //odd
        int min1 = INT_MAX; //even
        for(int i  = 0; i < s.length();i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = 1;
            }else{
                mp[s[i]] += 1;
            }
        }
        for(auto x : mp){
            if(x.second%2){
                max1 = max(x.second,max1);
            }else{
                min1 = min(x.second,min1);
            }
        }
        print(max1);
        print(min1);
        return max1-min1;
    }
};