class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Normal Brute Force using extra space
        // vector<int> ans;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]!=val) ans.push_back(nums[i]);
        // }   
        //  for(int i=0; i<ans.size(); i++){
        //     nums[i] = ans[i];
        // } 
        // return ans.size();


        // Actual soln --->
        // Index is used to track where the element should be inserted and i for iterating the whole array, overwrite the array only first k elements are returned hence after that doesn't matter what is there.
        int index = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};