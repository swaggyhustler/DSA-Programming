class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j=1;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]==0 && nums[j]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;
            }else if(nums[i]!=0 && nums[j]==0){
                i++;
            }else{
                j++;
            }
        }
    }
};