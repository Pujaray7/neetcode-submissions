class Solution {
public:
    int getTerm(int n, vector<int>&dp){
        if(n==0|| n==1)return n;
        if(n==2)return 1;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=getTerm(n-1,dp)+getTerm(n-2,dp)+getTerm(n-3,dp);
    }
    int tribonacci(int n) {
       vector<int> dp(n+1,-1);
        return getTerm(n, dp);
        
    }
};