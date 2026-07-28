class Solution {
public:
    bool isPalindrome(string s) {
        // hey aise nhi kiya jaata hai 🤣😂🤣😂🤣
        // if(s=="0P" || s=="P0" || s=="1a2") return 0;
        for (auto& x : s) {
             x = tolower(x);
        }
        // string ans="", res="";
        // for(int i=0; i < s.size(); i++){
        //     if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) ans+=s[i];
        // }
        // res=ans;
        // reverse(ans.begin(), ans.end());
        // return (res == ans);
        // for optimisation purpose two pointers can be used, easy hence bf is also ok.
        int i=0; 
        int j = s.size()-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(s[i]!=s[j]) return false;
            else{
                i++; j--;
            } 
        }
        return true;
    }
};