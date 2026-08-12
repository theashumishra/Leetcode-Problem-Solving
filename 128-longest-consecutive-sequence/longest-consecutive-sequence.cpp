class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> present, checked;
        int maxi = 0;
        for(auto it: nums) present[it] = true;
        for(auto it: nums){
            int ans = 0;
            if(!checked[it] && !present[it-1]){
                int start = it;
                //int ans = 0;
                while(present[start]){
                    ans++;
                    checked[start]=true;
                    start++;
                }
                maxi = max(ans,maxi);
            }
        }
        return maxi;

    }
};