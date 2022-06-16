//https://www.codingninjas.com/codestudio/problems/sum-of-minimum-and-maximum-elements-of-all-subarrays-of-size-k_1171047?leftPanelTab=0
#include<queue>
long long sumOfMaxAndMin(vector<int> &arr, int n, int k) {
	deque<int>maxi(k);
    deque<int>mini(k);
    long long ans=0;
    //processing for 1st window
    for(int i=0;i<k;i++)
    {
        while(!maxi.empty() && arr[maxi.back()]<=arr[i])
        {maxi.pop_back();}
        while(!mini.empty() && arr[mini.back()]>=arr[i])
        {mini.pop_back();}
        maxi.push_back(i);
        mini.push_back(i);
    }
    ans=ans+arr[maxi.front()]+arr[mini.front()];
    //processing for remaining windows
    for(int i=k;i<n;i++)
    {
        while(!maxi.empty() && i-maxi.front()>=k)
        {maxi.pop_front();}
        while(!mini.empty() && i-mini.front()>=k)
        {mini.pop_front();}
        while(!maxi.empty() && arr[maxi.back()]<=arr[i])
        {maxi.pop_back();}
        while(!mini.empty() && arr[mini.back()]>=arr[i])
        {mini.pop_back();}
        maxi.push_back(i);
        mini.push_back(i);
        ans=ans+arr[maxi.front()]+arr[mini.front()];
        
    }
    return ans;
}
