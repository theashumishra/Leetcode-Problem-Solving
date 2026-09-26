class Solution {
public:
    char findTheDifference(string s, string t) {
        int x = 0, y = 0;
        int i = 0;
        while(i<s.size()){
            x+=s[i];
            i++;
        }
        i = 0;
        while(i<=s.size()){
            y+=t[i];
            i++;
        }
        return (y-x);
    }
};