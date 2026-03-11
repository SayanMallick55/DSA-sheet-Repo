#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<pair<int,int>>s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            s.push({val,min(val,s.top().second)});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
* Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
*/  



// Optimal : 

class MinStack {
public:
    stack<long long> st;
    long long mini;
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini=val;
        }
        else{
            if(val>=mini){
                st.push(val);
            }
            else{
                st.push(2LL*val-mini);
                mini=val;
            }
        }
    }

    void pop() {
        if (st.empty()){
            return ;
        }
        long long el = st.top();
        st.pop();
        if(el<mini){
            mini=2*mini-el;
        }
    }

    int top() {
        if (st.empty()){
            return -1;
        }
        long long el=st.top();
        if(mini<el){
            return el;
        }
        else{
            return mini;
        }
    }

    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


int main(){


    return 0;
}