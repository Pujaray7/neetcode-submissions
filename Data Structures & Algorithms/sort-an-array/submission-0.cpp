class Solution {
public:
    int partition(vector<int>&nums, int low, int high){
        int pivot = nums[high];
        int j =low-1;
        for(int i =low; i<=high-1; i++){
            if(nums[i]<=pivot){
                swap(nums[++j],nums[i]);
            }
        }
        swap(nums[++j], nums[high]);
        return j;
    }
    void quickSort(vector<int>&nums, int low, int high){
        if(low<high){
            int partitioIndex = partition(nums, low, high);
            quickSort(nums, low, partitioIndex-1);
            quickSort(nums, partitioIndex+1, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};