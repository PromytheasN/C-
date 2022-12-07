#ifndef TWOSUM_H
#define TWOSUM_H

#include <iostream>
#include <vector>
using namespace std;

//Recursive Solution in class

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
