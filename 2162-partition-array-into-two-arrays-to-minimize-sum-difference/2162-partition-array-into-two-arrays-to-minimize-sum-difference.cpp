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
    int n; 
    vec(int) x;
    vec(int) y;
    map<int,vector<int>> dx;
    map<int,vector<int>> dy;
    int cnt = 0;
    int s = 0;
    void subsets(map<int,vector<int>>& dx, vec(int)& x, int i){
        if(i == n/2){
            if(dx.find(cnt) == dx.end()){
                dx[cnt] = {s};
            }else{
                dx[cnt].push_back(s);
            }
            return;
        }
        //keep
        s+= x[i];
        cnt ++;
        subsets(dx,x,i+1);
        s -= x[i];
        cnt --;

        //dont
        subsets(dx,x,i+1);
    }

    int bins(vec(int)& arr, int x , int low, int high){
        if(high - low == 1){
            return abs(arr[low] - x) < abs(arr[high] - x) ? arr[low] : arr[high]; 
        }
	    int mid = low + (high - low) / 2;
	    if (arr[mid] == x || mid == high) return arr[mid];            
	    if (arr[mid] > x) return bins(arr,x,low, mid);            
	    return bins(arr,x, mid, high);        
					  
}

    int minimumDifference(vector<int>& nums) {
        n = nums.size();
        f(i,0,n/2){
            x.push_back(nums[i]);
            y.push_back(nums[n/2 + i]);
        }
        subsets(dx,x,0);
        subsets(dy,y,0);

        f(i,0,n/2+1){
            sort(dy[i].begin(),dy[i].end());
        }

        int sm = sum(nums);
        int ans = INT_MAX;
        f(i,0,n/2+1){
            f(j,0,dx[i].size()){
                int z = bins(dy[n/2 -i],sm/2 - dx[i][j],0,dy[n/2 -i].size()-1);
                ans = min(ans,abs(sm - 2* (dx[i][j] + z)));
            }
        }
        return ans;
    }
};