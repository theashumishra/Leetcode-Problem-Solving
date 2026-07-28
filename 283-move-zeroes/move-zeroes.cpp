class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int slow =0, fast;
        for(fast=0; fast<n; fast++){
            if (arr[fast] != 0)
            {
                swap(arr[slow], arr[fast]);
                slow++;            }

        }
    }
};