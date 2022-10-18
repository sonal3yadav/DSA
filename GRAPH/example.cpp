//Link to problem:
https://leetcode.com/problems/longest-increasing-path-in-a-matrix/


//Problem statement:
Given an m x n integers matrix, return the length of the longest increasing path in matrix.

From each cell, you can either move in four directions: left, right, up, or down. You may not move diagonally or move outside the boundary (i.e., wrap-around is not allowed).

  
//Example:
Input: matrix = [[9,9,4],[6,6,8],[2,1,1]]
Output: 4
Explanation: The longest increasing path is [1, 2, 6, 9].
  
  
//SOLUTION:
  
class Solution {
public:
    
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int dp[201][201];
    
    bool isvalid(int r, int c, int x, int y)
    {
        if(x>=0 && x<r && y>=0 && y<c) return true;
        return false;
    }
    
    int s(vector<vector<int>>& matrix, int x, int y){
        int n = matrix.size(), m = matrix[0].size();
        
        if(dp[x][y] != -1) return dp[x][y];
        int cur = 1;
        for(int i=0; i<4; ++i){
            int x1 = x+dx[i], y1=y+dy[i];
            if(isvalid(n,m,x1,y1) && matrix[x1][y1] > matrix[x][y]){
                cur = max(cur, 1 + s(matrix,x1,y1));
            }
        }
        return dp[x][y] = cur;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        memset(dp,-1,sizeof(dp));
        int ans = 0;
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                ans = max(ans, s(matrix,i,j));
            }
        }
        return ans;
        
    }
};
