//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

//TC for both approaches : O(N)
//SC for both approaches : O(1)

//APPROACH :1 
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++) 
 //Imp :starting from i=1 as if i=0,then 0-1 will be -1
        {
        if(nums[i]<nums[i-1])
        {count++;}     
        }
        if(nums[n-1]>nums[0])//checking first and last element
        {count++;}
       // return count<=1;
      //OR
    
   if(count<=1) //less than 1 i.e.0 for array of equal elements
    {return true;}
        else
        {return false;}
    }
};

//APPROACH :2
class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
    for(int i=0;i<n;i++)
    {
       if(nums[i]>(nums[(i+1) % n])) //mod n to check for last and first element,dry run and you will understand!
       {count++;}
    }
            
        if(count>1)
        {return false;}
        else
        {return true;}
    }
};