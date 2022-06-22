#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
queue<int>q;
q.push(3);
cout<<"Front : "<<q.front()<<endl;
q.push(5);
cout<<"Front : "<<q.front()<<endl;
q.push(7);
q.push(9);
q.push(11);
cout<<"Front : "<<q.front()<<endl;
q.pop();
cout<<"Front : "<<q.front()<<endl;
if(q.empty())
{
    cout<<"Queue is empty"<<endl;
}
else
{
    cout<<"Queue is not empty"<<endl;
    cout<<"Size of queue : "<<q.size()<<endl;
}
return 0;
}