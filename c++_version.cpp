class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector index(2,0);
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; (j<nums.size() && j != i); j++){
                if(nums[i] + nums[j] == target){
                    index[0] = i;
                    index[1] = j;
                }
            }
        }
        return index;
    } 
};
