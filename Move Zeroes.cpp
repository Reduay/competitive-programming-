// Move Zeros

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(muns[i]!=0){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }

        }

     
    }
};