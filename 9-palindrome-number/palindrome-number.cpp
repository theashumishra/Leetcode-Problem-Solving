class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        if(x<10) return 1;
        long long ans=0;
        int as = x;
        while(x!=0){
            int a = x%10;
            ans*=10;
            ans+=a;
            
            x/=10;
        }
        return ans == as;

    }
};