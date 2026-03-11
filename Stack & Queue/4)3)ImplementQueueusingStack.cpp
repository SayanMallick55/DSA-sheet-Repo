
#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int>MyStack1;
    stack<int>MyStack2;
    MyQueue() {
        
    }
    
    void push(int x) {
        int size1=MyStack1.size();
        int size2=MyStack2.size();
        while(!MyStack1.empty()){
            MyStack2.push(MyStack1.top());
            MyStack1.pop();

        }
        MyStack1.push(x);
        while(!MyStack2.empty()){
            MyStack1.push(MyStack2.top());
            MyStack2.pop();

        }
    }
    
    int pop() {
        int el=MyStack1.top();
        MyStack1.pop();
        return el;
    }
    
    int peek() {
        return(MyStack1.top());
    }
    
    bool empty() {
        return MyStack1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */



int main(){


    return 0;
}