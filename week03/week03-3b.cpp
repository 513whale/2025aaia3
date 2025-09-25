//week03-3a.cpp二合一之一。把不是0的找出來
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;//用來放不是0的數
        for(int i=0; i<nums.size();i++){
            if(nums[i] !=0) nums[k++]=nums[i];
        }

        for(int i=k; i<nums.size();i++){
            nums[i]=0;//其他的放0
        }
    }
};
