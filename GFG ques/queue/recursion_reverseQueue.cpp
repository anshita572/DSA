//https://practice.geeksforgeeks.org/problems/queue-reversal/1#

//TC : O(n)
//SC : O(n)
#include <iostream>
#include<queue>
using namespace std;

void rev(queue<int> q)
{if(q.empty())
{
    return;
}
  int element=q.front();
  q.pop();
  rev(q);
  q.push(element);

}