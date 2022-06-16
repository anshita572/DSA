//https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/

//TC:O(n)
//SC :O(1)
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxi=INT_MIN;
    long long mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    pair<long long,long long>ans;
    ans={mini,maxi};
    return ans;
}