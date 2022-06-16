//https://www.codingninjas.com/codestudio/problems/interleave-the-first-half-of-the-queue-with-the-second-half_1169450?leftPanelTab=0

//TC :O(N)
//SC :O(N)
void interLeaveQueue(queue < int > & q) {
   queue < int >newq;
    int i=(q.size()/2);
    while(i--)   //fetch first half of q and put it in newq
    {
        int val=q.front();
        q.pop();
        newq.push(val);
    }
    while(!newq.empty())
    {
        int val=newq.front();
        newq.pop();
        q.push(val);
         val=q.front();
        q.pop();
        q.push(val);
    }
    
}