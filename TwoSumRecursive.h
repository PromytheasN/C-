#ifndef TWOSUM_H
#define TWOSUM_H

#include <iostream>
#include <vector>
using namespace std;

//Recursive Solution in class
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
    public:
        vector<int> twoSum(vector<int>& nums, int target);
        vector<int> twoSumHelper(vector<int>& nums, int target, int i, int z);
    private:
        int i, z;
};

vector<int> Solution::twoSum(vector<int>& nums, int target){
    return Solution::twoSumHelper(nums, target, 0, 0);
}

//Helper fuction
vector<int> Solution::twoSumHelper(vector<int>& nums, int target, int i, int z) {
    //If compairing same nums element, move to next
    if(i == z){
        i++;
    }
    //Base case
    if(nums[i] + nums[z] == target){
        vector<int> result;
        result.push_back(z);
        result.push_back(i);
        return result;
    }
    if(i >= (int)nums.size() || (z == (int)nums.size()-1 && i == (int)nums.size())){
        cout << "There is not such sum" << endl;
        exit(1);
    }
    //Recursive calls
    //When i = max, increment z and reset i
    if(i == (int)nums.size()-1){
        z++;
        i = i-z;
        return Solution::twoSumHelper(nums, target, i, z);
    }
    //Compare num[i] with num[i+1]
    return Solution::twoSumHelper(nums, target, i+1, z);
}

#endif
