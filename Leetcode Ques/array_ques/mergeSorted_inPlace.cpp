// https://leetcode.com/problems/merge-sorted-array/

//TC : O(N)
//SC : O(1)
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //we will start from end
        //start sorting elements in reverse order
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {nums1[k--]=nums1[i--];
                
            }
            else //if(nums2[j]>nums1[i])
            {
                nums1[k--]=nums2[j--];
            
            }
        }
        while(i>=0)
        {nums1[k--]=nums1[i--];}
        while(j>=0)
        {nums1[k--]=nums2[j--];}
       }
    
};