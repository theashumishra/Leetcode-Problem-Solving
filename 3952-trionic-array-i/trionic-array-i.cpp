class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n==3) return 0;
        int p,q;
        int i=0;
        while(i<n-1 && nums[i]<nums[i+1]) i++;
        p=i;
        if(i==0) return 0;
        while(i<n-1 && nums[i]>nums[i+1]) i++;
        q=i;
        if(i==p) return 0;
        while(i<n-1 && nums[i]<nums[i+1]) i++;
        if(i==n-1 && i>q) return 1;
        return 0;



    }
};