class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans = 0;
        int n = nums1.size();
        unordered_map<int, int> ump;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
            ump[nums1[i]+nums2[j]]++;
        }

         for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
            {
                int target = nums3[i]+nums4[j];
                ans+=ump[-target];
            }
        }
        //for(auto nums:nums4) ump[-nums]++;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         for(int k=0; k<n; k++){
        //             int cnt = nums1[i]+nums2[j]+nums3[k];
        //             ans+=ump[cnt];
        //         }
        //     }
        // }
        return ans;

    }
};