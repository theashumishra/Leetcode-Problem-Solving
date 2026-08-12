class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int> ump;
        for(auto it:nums){
            int t1 = it-k;
            int t2 = it+k;
            if(ump.find(t1)!=ump.end()){
                count+=ump[t1];
            }
             if(it!=0 && ump.find(t2)!=ump.end()){
                count+=ump[t2];
            }
             ump[it]++;
        }
        return count;
    }
};