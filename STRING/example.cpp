//Link to problem:
https://leetcode.com/problems/length-of-last-word/


//Problem statement:
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
  
  
//Example:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
  
  
//SOLUTION:
  
  class Solution {
public:
    int lengthOfLastWord(string s) {
        int n,i,c=0;
        n=s.length();
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==' ' && c>0)
                break;
            else if(s[i]!=' ')
                c++;
        }
        return(c);
        
    }
};
