class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i =0;
        int j = n-1;
        int maxCap =INT_MIN;
        while(i<j){
            int current_cap = min(heights[i], heights[j])*(j-i);
            if(heights[i]<heights[j])i++;
            else j--;
            maxCap = max(maxCap, current_cap);
        }
        return maxCap;
    }
};
