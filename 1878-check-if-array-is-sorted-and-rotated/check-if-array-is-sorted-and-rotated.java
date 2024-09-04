class Solution {
    public boolean check(int[] nums) {
        int x=0;
        if(nums[0]>=nums[nums.length-1]){
            for(int i=1; i<nums.length; i++){
                if(nums[i-1]>nums[i]){
                    x++;
                }
            }
        }else{
            for(int i=1; i<nums.length; i++){
                if(nums[i-1]>nums[i]){
                    return false;
                }
            }
        }
        if(x>1){
            return false;
        }else{
            return true;
        }
    }
}