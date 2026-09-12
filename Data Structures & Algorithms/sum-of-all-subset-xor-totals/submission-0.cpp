class Solution {
public:
    void xorSumCal(vector<int>& nums,int i, int &totXorSum, int xorSum){
        if(i ==nums.size()){
            totXorSum+=xorSum;
            return;
        }
       
        xorSumCal(nums, i+1, totXorSum,xorSum^nums[i]);
        xorSumCal(nums, i+1, totXorSum, xorSum);
    }   
    int subsetXORSum(vector<int>& nums) {
        int totXorSum =0;
        int xorSum =0;
        xorSumCal(nums, 0,totXorSum,xorSum);
        return totXorSum;
    }
};