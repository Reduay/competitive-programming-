class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
         sort(begin(nums),end(nums));
        vector<int> answer;
    int n=nums.size();
        
        sort(begin(nums),end(nums));
        for(int i=0;i<n;i++){
if(nums[i]==target)
    answer.push_back(i);
    
            }
        return answer;
        
    }
};
