//link to the problem
https://leetcode.com/problems/implement-stack-using-queues/

//Problem Statement
Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).

Implement the MyStack class:

void push(int x) Pushes element x to the top of the stack.
int pop() Removes the element on the top of the stack and returns it.
int top() Returns the element on the top of the stack.
boolean empty() Returns true if the stack is empty, false otherwise.
 
 //Example
  Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]

Explanation
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // return 2
myStack.pop(); // return 2
myStack.empty(); // return False

//SOLUTION
class MyStack {
public:
    queue<int> q;

    int peek = -1;   //  maintaining the top element of stack 
    
    MyStack() 
    {
       
    }
    
    void push(int x) 
    {
         peek = x;
        q.push(x);
    }
    
    
    int pop() 
    {
        
       int n = q.size();
       n-=1; 
       while(n--){
          peek = q.front();     // maintining the top element 
           q.push(peek);
           q.pop();
       } 
        
       int ret = q.front();     // storing the element to return 
        q.pop();                // removing the element permanently
        
        return ret;
        
    }
    
    int top() {
        
     return peek ;
        
    }
    
    
    bool empty() {
        
        return q.size()==0;
    }
    
    
    
};

