class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),temp;
      int l=0, h=n-1,m=0;
        while(m<=h){
            if(nums[m]==0){
                temp=nums[m];
                nums[m]=nums[l];
                nums[l]=temp;
                l++;
                m++;
                
}
            else if(nums[m]==1){
                m++;
}
            else {
                temp=nums[m];
                nums[m]=nums[h];
                nums[h]=temp;
                h--;
}
                     
}
    
    }
};