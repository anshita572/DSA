//https://leetcode.com/problems/kth-largest-element-in-an-array/

//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
    
    int n=r-l+1; //size of array
      sort(arr,arr+n);
      return arr[k-1];
    }
};

//Brute force using STL (I will optimise after doing priority queues,heaps)Optimised TC :O(n),SC :O(log n)

//TC :O(nlogn)
//SC :O(1)
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end(),greater<int>());//sort in decreasing order
        return nums[k-1];
        
    }
};