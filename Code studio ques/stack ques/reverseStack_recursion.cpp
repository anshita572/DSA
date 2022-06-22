//:https://bit.ly/3HCBnD4
#include <iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &stack,int x)
{
	//base case
	if(stack.empty())
	{
		stack.push(x);
		return;
	}
	int num=stack.top();
	stack.pop();
	insertAtBottom(stack,x);
	stack.push(num);
}
void reverseStack(stack<int> &stack) {
    //base case
	if(stack.empty())
	{
		return;
	}
	int num=stack.top();
	stack.pop();
	reverseStack(stack);
	insertAtBottom(stack,num);
}