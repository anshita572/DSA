//https://leetcode.com/problems/sort-colors/

//TC:O(n)
//SC:(1)
//M1 : using 3 pointers
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>&arr) {
    int n=arr.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {swap(arr[low],arr[mid]);
        low++;
        mid++;
        }
          else if(arr[mid]==1)
        {
         mid++;
        }
          else //if(arr[mid]==2)
        {swap(arr[mid],arr[high]);
        high--;
        }
    }
    }
};
//M2 : by counting 0s and 1s
class Solution {
public:
    void sortColors(vector<int>& arr) {
       int n=arr.size();
        int count0=0;
    int count1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {count0++;}
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {count1++;}
    }
    for(int i=0;i<count0;i++)
    {arr[i]=0;}
     for(int i=count0;i<count1+count0;i++)
    {arr[i]=1;}
    for(int i=count1+count0;i<n;i++)
    {arr[i]=2;}
        
    }
};
