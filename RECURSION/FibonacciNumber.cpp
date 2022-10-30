// Problem Link
https://leetcode.com/problems/fibonacci-number/

// Code
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1) //base condition, if n is zero or one
            return n; // return 1
        
        return fib(n - 1) + fib(n - 2); // return what it wants
    }
};
