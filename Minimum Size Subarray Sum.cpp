class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,total_sum=0,res=INT_MAX;
        for(int r=0;r<nums.size();r++){
           total_sum+=nums[r];
            while(total_sum>=target){
                res=min(res,r-l+1);
               total_sum=total_sum-nums[l];
                l=l+1;
                
}
}
        
      return res==INT_MAX? 0 : res;  
        
    }
};