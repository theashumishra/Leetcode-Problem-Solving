#include <bits/stdc++.h>
//#include <boost/algorithm/string.hpp>
//using namespace boost::algorithm;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int len = 0;
        int i=n-1;
        //trim(s);
        while(i>=0 && s[i] ==' ') i--;
        while(i>=0 && s[i]!=' '){
            len++;
            i--;
        }
        // for(int i=n-1; i>=0; i--){
        //     while(s[i]!=' ') len++;
        //     //return len;
        // }
        return len;
    }
};