class Solution {
public:
    void getSubsets(vector<int>& nums,int i,vector<vector<int>> &ans,vector<int>&ds){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        getSubsets(nums, i+1, ans, ds);
        ds.pop_back();
        getSubsets(nums,i+1,ans, ds);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        getSubsets(nums, 0, ans, ds);
        return ans;
    }
};
