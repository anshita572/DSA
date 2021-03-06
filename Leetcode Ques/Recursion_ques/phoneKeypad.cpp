// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
private :
    void solve(string digits,string output,int index,vector<string>&ans,string mapping[])
    {
        //base case
        if(index>=digits.length())
        {ans.push_back(output);
            return;}
        int number=digits[index]-'0';
        string value =mapping[number];
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,mapping);
            output.pop_back();
        }
    }
    
public:
    
    vector<string> letterCombinations(string digits) {
       vector<string>ans;
         if(digits.length()==0) //if string is empty
        {return ans;}
        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno" ,"pqrs","tuv","wxyz"};
 //0=empty,1=empty,2=abc,3=def,4=ghi...so on
       
        solve(digits,output,index,ans,mapping);
        return ans;
            
    }
};
