//https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1/

//Approach 1 : using 2 pointers
//TC : O(N)
//SC:O(1)
class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        
         int i=0;
    int j=n-1;
    while(i<=j && j<n)
    {
        if(arr[i]==0)
        {i++;}
        if(arr[j]==1)
        {j--;}
        if(arr[i]==1 && arr[j]==0 && i<=j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    }
};

//Approach 2 :By counting the number of zeroes
//TC : O(N)
//SC:O(1)
class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            arr[i]=0;
        }
        for(int i=count;i<n;i++)
        {
            arr[i]=1;
        }
        
    }
};