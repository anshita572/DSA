 //https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/
 //TC : O(N^2)
 #include<iostream>
 #include <bits/stdc++.h>
 using namespace std;
 long long maxSubarraySum(int arr[], int n){
     int maxi=arr[0];//OR maxi=INT_MIN
      //Don't initialise maxi=0 as array can consist of all -ve integers
     //in that case,answer will be 0 which is wrong
        for(int i=0;i<n;i++)
        { int sum=0;
        
            for(int j=i;j<n;j++)
            {
                
                sum=sum+arr[j];
                maxi=max(sum,maxi);
                
            }
        }
        return maxi;
    }
