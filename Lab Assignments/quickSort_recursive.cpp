//Quick Sort
#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
    int pivot=arr[start]; 
    int count=0;
    for(int i=start+1;i<=end;i++)
    {if(arr[i]<=pivot)
      {  count++;}
      }
    int pivotIndex=start+count;
    
    swap(arr[pivotIndex],arr[start]);

int i=start;
int j=end;
while(i<pivotIndex && j>pivotIndex)
{while(arr[i]<=pivot)   
{
    i++;
}
while(arr[j]>pivot)
{
    j--;
}
if(i<pivotIndex && j>pivotIndex)
{swap(arr[i++],arr[j--]);
}
}

return pivotIndex;
}
void quickSort(int arr[],int start,int end)
{
    //base condition
    if(start>=end)
    {return;}
    int p=partition(arr,start,end);
    //Sorting the left part
    quickSort(arr,start,p-1); //recursive call
    //Sorting the right part
    quickSort(arr,p+1,end);  //recursive call
}
int main(){
    int n;
cout<<"Enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<n;i++)
{ 
 cin>>arr[i];
}
quickSort(arr,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}