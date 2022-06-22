//Duplicates in Array [https://bit.ly/3dm6bdZ]

//Method :1 (using XOR)

//‘ARR’ of size ‘N’ containing each number between 1 
//and N-1 at least once.Imp line in ques
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{int n=arr.size();
 int ans=0;
  for(int i=0;i<n;i++)
  {//XOR ing all elements
      ans=ans^arr[i];
  }
 for(int i=1;i<n;i++)
 {//XOR [1,n-1]
     ans=ans^i;
 }
	return ans;
}

//Method :2
//TC :O(n)
//SC :O(1)
int findDuplicate(vector<int> &arr) 
{   int n=arr.size();
    int actualSum=(n*(n-1))/2;
    int arrSum=0;
   for(int i=0;i<n;i++)
   {
       arrSum=arrSum+arr[i];
   }
   int ans=arrSum-actualSum;
   return ans;
	
}

