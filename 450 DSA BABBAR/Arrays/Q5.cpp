//https://www.codingninjas.com/codestudio/problems/move-all-negative-numbers-to-beginning-and-positive-to-end_1112620?leftPanelTab=0

//TC :O(n)
//SC : O(1)
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int size=nums.size();
    int n=0;//n represents negative elements
    for(int p=0;p<size;p++)//p represents positive elements
    {
        if(nums[p]<0) // p should be +ve but if it is -ve then swap and n++
        {swap(nums[p],nums[n]);
        n++;}
    }
    return nums;
}