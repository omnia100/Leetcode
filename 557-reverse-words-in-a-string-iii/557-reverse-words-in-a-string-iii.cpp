#include <bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        string word;
        string sent = "";
        int c = 0;
        while (ss >> word){
            if (c++) sent += " ";
            sent += reverse(word);
        }
        return sent;
    }
    
    string reverse(string s){
        int l=0;
        int r=s.length()-1;
        while(l<=r){
            char tmp = s[l];
            s[l++] = s[r];
            s[r--] = tmp;
        }
        return s;
    }
};