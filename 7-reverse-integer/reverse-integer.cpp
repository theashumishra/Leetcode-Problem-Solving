class Solution {
public:
    int reverse(long x) {
        long ans=0;
        bool isNeg = 0;
        if(x<0) {
            isNeg = 1;
            x=-x;
        }
        while(x){
            int dig = x%10;
            ans*=10;
            ans+=dig;

            x/=10;
        }
        if(ans>INT_MAX) return 0;
        if(isNeg) return -ans;
        else return ans;
    }
};