//https://bit.ly/3EOyAFz 
//Reverse array after 'm' positions
//Time Complexity : O(n)
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	int n=arr.size();
    int start=m+1;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

