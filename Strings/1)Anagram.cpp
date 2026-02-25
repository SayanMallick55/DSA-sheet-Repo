
//Check Anagram or not : 

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
     
        if(s.length()!=t.length()){
            return false;
        }
        int hash[26]={0};
        for(int i = 0;i<s.length();i++){
            hash[s[i]-'a']++;
        }
        int hash2[26]={0};
        for(int i = 0;i<t.length();i++){
            hash2[t[i]-'a']++;
        }
        

        for(int i=0;i<26;i++){
            if(hash[i]!=hash2[i]){
                return false;
            }
        }
        return true;
    }
};


// Optimal : 
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()){
            return false;
        }
        int hash[26]={0};

        for(int i = 0;i<s.length();i++){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        
        

        for(int i=0;i<26;i++){
            if(hash[i]!=0){
                return false;
            }
        }

        return true;
    }
};

int main(){
    

    return 0;
}