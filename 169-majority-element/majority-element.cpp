class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // vector<long long> freq(1e6);
        //  unordered_map<int,int> freq;
        //  for(int i=0; i<n; i++) freq[nums[i]]++;
        //  for(auto it : freq) if(it.second > n/2) return it.first;
        //  return -1;
        int candidate = nums[0], cnt = 1;
        for (int i = 1; i < n; i++) {
            if (candidate == nums[i])
                cnt++;
            else {
                if(cnt>0){
                    cnt--;
                }
                else{
                    cnt = 1;
                    candidate = nums[i];
                }
            }
        }
        return candidate;
    }
};