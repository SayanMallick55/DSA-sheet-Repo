// Rotate a string : 


#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        s=s+s; // Gives all rotations 
        if(s.find(goal)<s.length()){
            return true;
        }
        return false;
    }
};

int main(){


    return 0;
}