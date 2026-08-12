class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Count frequency
        unordered_map<int, int>freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        // make buckets
        vector<vector<int>>buckets(nums.size()+1);
        // let frquency as buckets
        for( auto &p: freq){
            buckets[p.second].push_back(p.first);
        }
        vector<int> ans;
        //traverse from back
        for(int i =buckets.size()-1; i>=0 && ans.size() < k; i--){
            for(int x: buckets[i]){
                ans.push_back(x);
                if(ans.size()==k)break;
            }
        }
        return ans;
    }
};
