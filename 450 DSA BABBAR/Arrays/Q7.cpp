//https://leetcode.com/problems/rotate-array/

//TC :O(n)
//SC :O(1)
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution { //using STL
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};