/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */
#include <vector>
#include <array>
#include <iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    bool any(int n, int m, int i,int j, int check[][]){
        for(int x : {-1,0,1}){
            for(int y : {-1, 0, 1}){
                if(x > 0 && y > 0 && x < n && y < m && check[x + i][y = j]){
                    return true;
                }
            }
        }
        return false;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size(); 
        bool check[m][n];
        vector<int> ans;
        int i = 0,j = 0;
        array<int,2> dir = {0,1};
        while(!any(n,m,i,j,check)){
            check[i][j] = true;
            ans.push_back(matrix[i][j]);
            if(((i + dir[0]) < 0 || (i + dir[0]) > n) || ((j + dir[1]) < 0 || (j + dir[1]) > m)){
                dir = {dir[1],-dir[0]};
            }
            i += dir[0];
            j += dir[1];
        }
        return ans;
    }
};

int main()
