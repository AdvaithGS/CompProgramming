#define f(a,b,c) for(auto a = b; a != c;a++)
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
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<int> dist(edges.size(),-1);
        vector<int> dist2(edges.size(),-1);
        int cur = node1;
        int count = 0;
        while(cur != -1){
            if(dist[cur] != -1) break;
            dist[cur] = count++;
            cur = edges[cur];
        }

        cur = node2;
        count = 0;
        while(cur != -1){
            if(dist2[cur] != -1) break;
            dist2[cur] = count++;
            cur = edges[cur];
        }

        int ans = INT_MAX; 
        int sol = -1;
        f(i,0,dist2.size()){
            if(dist2[i] == -1 || dist[i] == -1) continue;
            if(ans > (max(dist2[i],dist[i]))){
                cout << dist[i] << ' ' << dist2[i] << '\n';
                sol = i;
                ans = max(dist2[i],dist[i]);
            }
        }
        printvec(dist);
        printvec(dist2);
        return sol;

    }
};
