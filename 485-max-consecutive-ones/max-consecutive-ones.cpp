class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0, count=0, left=0;
        while(left<nums.size()){
            count=0;
            while(left<nums.size() && nums[left]==0){
                left++;
            }
            while(left<nums.size() && nums[left]==1){
                count++;
                left++;
            }
            maxi=max(count, maxi);
        }
        return maxi;
    }
};