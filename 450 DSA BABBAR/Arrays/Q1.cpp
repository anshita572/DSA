//https://practice.geeksforgeeks.org/problems/reverse-a-string/1

//TC:O(n)
//SC :O(1)
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
string reverseWord(string s){
  
   // int n=A.length();
    int i,j;
    for(j=0;s[j]!='\0';j++)
    {}
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        swap(s[i],s[j]);
    }
   cout<<s;
}
