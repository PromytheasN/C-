#ifndef PAL_H
#define PAL_H

#include<iostream>
using namespace std;

/*
Given an integer x, return true if x is a
palindrome
, and false otherwise.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/


class Solution {
    public:
        bool isPalindrome(int);
        bool isPalindromeHelper(string);
    private:
        string numS;
};

bool Solution::isPalindrome(int x){
    numS = to_string(x);
    return isPalindromeHelper(numS);
}
bool Solution::isPalindromeHelper(string numS){
    //base case
    if(numS[0] != numS[numS.size()-1]){
        return false;
    }
    if(numS.size() <= 3){
        return true;
    }
    //Erase last and first char
    numS.pop_back();
    numS.erase(numS.begin());
    return isPalindromeHelper(numS);

}

#endif
