class Solution {
public:
    int reverse(int x) {
        long ans=0;
        bool isNeg = 0;
        // if(x<0) {
        //     isNeg = 1;
        //     x=-x;
        // }
        // Cpp takes care of negative division by itself
        while(x){
            int dig = x%10;
            ans*=10;
            ans+=dig;

            x/=10;
        }
        if(ans>INT_MAX || ans<INT_MIN) return 0;
        //if(isNeg) return -ans;
        else return ans;
    }
};