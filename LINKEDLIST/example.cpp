//Link to problem:
https://leetcode.com/problems/two-sum/description/


//Problem statement:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

  
//Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
  
  
//SOLUTION:
  
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                res.emplace_back(i);
                res.emplace_back(m[target-nums[i]]);
                return res;
            }
        
        m[nums[i]]=i;
        }
        return res;
    }
    
};


