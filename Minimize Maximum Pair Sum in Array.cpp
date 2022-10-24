class Solution {
public:
    int minPairSum(vector<int>& nums) {
      int maxsum=INT_MIN; int n=nums.size();
        int j=n-1;
      sort(nums.begin(),nums.end());
       for(int i=0;i<j;i++,j--)
        maxsum = max(maxsum, nums[i]+nums[j]);
        return maxsum;
    }
};
