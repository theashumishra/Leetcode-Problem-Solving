class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int area=0,maxi=0;
        int ht = min(height[i],height[j]);
            int width = j-i;
            area = ht*width;
            maxi= max(area,maxi);
            //i++; j--;
        while(i<j){
            if(height[i]<=height[j]) i++;
            else if(height[i]>height[j]) j--;
             ht = min(height[i],height[j]);
             width = j-i;
             area = ht*width;
             maxi= max(area,maxi);
        }
        return maxi;
    }
};