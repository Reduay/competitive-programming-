class Solution {
public:
    int longestOnes(int[] nums, int K) {
        int j=0,count=0,result=0;
      
        for (int i=0;i<nums.size();i++){
            if(nums[i]==0){
                k--;
            }
            while(count>k){
                if(nums[i]==0){
                    k++
                }
                i++;
            }
            result=Math.max(result,j-i+1);


        }
        return result;
      
    }
};