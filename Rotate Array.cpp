// Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();//modules of k with the num size
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};