class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(int x : tasks){
            if(mp.find(x) == mp.end()){
                mp[x] = 1;
            }else{
                mp[x] ++;
            }
        } 
        int ans = 0;
        for(auto x : mp){
            if(x.second < 2){
                return -1;
            }else{
                ans += x.second/3 + bool(x.second%3);
            }
        }
        return ans;
    }
};