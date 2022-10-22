class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==1 && nums.size()==2)
            return 0;
    
    int pivot=0;
    int right_sum=0;
    int left_sum=0;

       for(int i=1;i<nums.size();i++){
           nums[i]=pivot;
           int total_sum nums[0]=nums[0];
            total_sum=total_sum[i]+nums[i];
           right_sum=total_sum-total_sum[i];
           left_sum=total_sum[i]-nums[i];
           if (right_sum==left_sum)
               return pivot;
         
}
  return -1;       
       
}
    
};