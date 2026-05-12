class Solution {
public:
    bool isPowerOfTwo(long long n) {
        if(n<=0) return 0;
    //     if(n==-2147483648) return 0;
    //    return __builtin_popcount(n)==1;
    return (n&(n-1)) == 0;
    }
};