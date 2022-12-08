#ifndef TWOSUM_H
#define TWOSUM_H

#include <iostream>
#include <vector>
using namespace std;

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

class Solution {
    private:
        vector<int> sum;
    public:
        vector<int> twoSum(vector<int>& nums, int target );
};


vector<int> Solution::twoSum(vector<int>& nums, int target){
    for(int i = 0; i < (int)nums.size(); i++){
        for(int z = 0; z < (int)nums.size(); z++){
            if (i == z){
                ++z;
            }
            if(nums[i]+nums[z] == target){
                sum.push_back(z);
                sum.push_back(i);
                return sum;
            }
        }
    }
    exit(1);
}

#endif
