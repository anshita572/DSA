//https://www.codingninjas.com/codestudio/problems/interleave-the-first-half-of-the-queue-with-the-second-half_1169450?leftPanelTab=0

//TC :O(N)
//SC :O(N)
void interLeaveQueue(queue < int > & q) {
  int half=(q.size()/2);
    stack<int>s;
   for(int i=0;i<half;i++)  //fetch first half of q and put it in stack s
    {
        int val=q.front();
        q.pop();
        s.push(val);
    }
    while(!s.empty()) //pop s and push its elements in q
    {
        int val=s.top();
        s.pop();
        q.push(val);
    }
   for(int i=0;i<half;i++) 
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
     for(int i=0;i<half;i++) 
    {
     int val=q.front();
        q.pop();
        s.push(val);   
    }
    while(!s.empty())
    {
        int val=s.top();
        s.pop();
        q.push(val);
        val=q.front();
        q.pop();
        q.push(val);
    }
}