#include <iostream>
using namespace std; 
/*
 * @lc app=leetcode id=368 lang=cpp
 *
 * [368] Largest Divisible Subset
 */

// @lc code=start
#include <vector>
#include <map>
#include <cmath>
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        map<int,vector<int>> div;
        for(int i : nums){
          bool flag1 = false;
          
          for(auto j = div.begin(); j != div.end();j++){
            
            bool flag2 = 1;
            for(int k : (*j).second){
                if(i%k != 0 && k%i != 0){
                    flag2 = 0;
                    break;
                }
            }
            if(flag2){
                (*j).second.push_back(i);
            }

          }
          
          if(!flag1){
            div[i] = {i};
          }
        }
        vector<int> ans = {};
        for(auto j = div.begin(); j != div.end(); j++){
            ans = ((*j).second.size() > ans.size()) ? (*j).second : ans;
        }
        return ans;
    }
};
// @lc code=end
int main(){
    Solution ans;
    vector<int> ques  ={1,4,8,2,16};
    vector<int> sol = ans.largestDivisibleSubset(ques);
    for(int i : sol){
        cout << i << ' ';
    }
    cout << '\n';
}

