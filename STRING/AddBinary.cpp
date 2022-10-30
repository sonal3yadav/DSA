// Problem
https://leetcode.com/problems/add-binary/

// Code
class Solution {
public:
    string addBinary(string a, string b) {
        string sum = "";
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;
        
        while (i >= 0 || j >= 0 || carry > 0) {
            int value1 = 0;   
            if(i >= 0 && a[i] == '1') {
                value1 = 1;
            }
            i--;
            
            int value2 = 0;  
            if(j >= 0 && b[j] == '1') {
                value2 = 1;
            }
            j--;
            
            // get the current digit
            int currBit = carry^value1^value2;
            sum.push_back(char(currBit) + '0');
            
            // get the next carry
            carry = (value1&&value2)||(value1&&carry)||(value2&&carry);
        }
        
        // reverse because we started from back
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
