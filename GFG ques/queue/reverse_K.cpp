//https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1/#

//TC : O(n)
//SC : O(k)
queue<int> modifyQueue(queue<int> q, int k) {
    stack<int>s;
    //push first k elements in stack
    for(int i=0;i<k;i++)
    {
        int element=q.front();
        q.pop();
        s.push(element);
    }
    //pop from stack and add in queue (reveresed k elements)
    while(!s.empty())
    {
        int element=s.top();
        s.pop();
        q.push(element);
    }
    int i=q.size()-k;
    while(i--) //n-k elements pop from q and then add in q so that n-k elements end m aa jaaye
    {
        int element=q.front();
        q.pop();
        q.push(element);
    }
    return q;
}