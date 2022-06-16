//https://leetcode.com/problems/move-zeroes/
//Move zeroes to end
//TC : O(N)
//SC : O(1)
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        int i=0; //i represents non-zero element
        for(int j=0;j<n;j++)
        {
            if(arr[j]!=0)
            {
                swap(arr[i],arr[j]);
                i++;
            }
        }
    }
};


