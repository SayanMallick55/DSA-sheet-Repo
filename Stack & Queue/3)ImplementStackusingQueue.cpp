#include <bits/stdc++.h>
using namespace std;

class MyStack {
public:
    queue<int>MyQueue;
    MyStack() {
        
    }
    
    void push(int x) {
        int size=MyQueue.size();
        MyQueue.push(x);
        for(int i=0;i<size;i++){
            MyQueue.push(MyQueue.front());
            MyQueue.pop();
        }
    }
    
    int pop() {
        int element = MyQueue.front();
        MyQueue.pop();
        return element ;
    }
    
    int top() {
        return(MyQueue.front());
    }
    
    bool empty() {
        if(MyQueue.size()==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */


int main(){


    return 0;
}