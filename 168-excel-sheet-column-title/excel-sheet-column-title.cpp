// After 26 character it is being repeated
// Col-- in order to accomodate z char now think like digit extraction but by 26 and mapped 
// value

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber>0){
            columnNumber--;
            int rem = columnNumber%26;
            columnNumber/=26;
            //if(rem == 0) ans+='z';
             ans+=char(rem+'A');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};