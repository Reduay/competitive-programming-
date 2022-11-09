class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int count=0;
        int result=0;
        int first_occur=0;
        vector<int>occur(nums.size(),0);
        int index=0;
        int current=0;
        while(j<nums.size())
        {
            if(nums[j]%2!=0)
            {
                count++;
             occur[index++]=j;
            }
            
            if(count<k)
                j++;
            else
            {
              while(count>k)
              {
                  
                  if(nums[i]%2!=0)
                  {count--;current++;}
                  i++;
              }
                
    
                result+=occur[current]+1-i;
                j++;
            }
            
            
        }
        return result;
    }
};