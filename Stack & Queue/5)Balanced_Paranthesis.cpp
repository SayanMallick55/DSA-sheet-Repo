#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int size = s.size();
        for (int i = 0; i < size; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i]=='[' ){
                st.push(s[i]);
            }
            else {
                if (st.empty()) {
                    return false;
                }
                char ch = st.top();
                st.pop();

                if ((ch == '(' && s[i] == ')') || (ch == '{' && s[i] == '}') ||
                    (ch == '[' && s[i] == ']')){
                        continue;
                    }
                else{
                    return false;
                }
            }
        }
        return(st.empty());
    }
};


int main(){


    return 0;
}