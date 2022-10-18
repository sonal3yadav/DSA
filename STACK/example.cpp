//Link to problem:
https://leetcode.com/problems/longest-valid-parentheses/


//Problem statement:
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
  
  
//Example:
Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
  
  
//SOLUTION:
  
  class Solution {
public:
    int longestValidParentheses(string s)
    {
        int open=0,close=0, res=0;
        // forward traverse:
        for(auto ch:s){
            if(ch=='(') open++;
            else close++;
            if(open==close) res=max(res,open+close);
            else if(close>open) open=close=0;
        }
        open=close=0;
        // backward traverse:
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(') open++;
            else close++;
            if(open==close) res=max(res,open+close);
            else if(open>close) open=close=0;
        }
        return res;
    }
};
