class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int area=0,maxi=0;
        int ht = min(height[i],height[j]);
           
            //i++; j--;
        while(i<j){
            int width = j-i;
            ht = min(height[i],height[j]);
            area = ht*width;
            maxi= max(area,maxi);
            if(height[i]<=height[j]) i++;
            else if(height[i]>height[j]) j--;
             
           
        }
        return maxi;
    }
};