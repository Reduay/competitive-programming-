class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        vector<int>v;
        int n=nums.size();
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(nums[j]<nums[i] && j!=i)
                 count++;
         }
             
           v.push_back(count);  
         count=0;
         }
        return v;
         
         
         }   
    
};
