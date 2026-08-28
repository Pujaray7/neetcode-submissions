class Solution {
public:
    int maxLoot(vector<int>&nums, int idx, int n, vector<int>&dp){
        if(idx==n) return 0;
        if(idx==n-1) return nums[n-1];
        if(dp[idx]!=-1) return dp[idx];
        return dp[idx]=max(maxLoot(nums,idx+1,n, dp),nums[idx]+maxLoot(nums,idx+2,n, dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        vector<int> dp1(n, -1);
        vector<int>dp2(n,-1);
        return max(maxLoot(nums, 0, n-1,dp1), maxLoot(nums, 1, n, dp2));
    }
};
