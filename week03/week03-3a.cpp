//week03-3a.cpp�G�X�@���@�C�⤣�O0����X��
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;//�Ψө񤣬O0����
        for(int i=0; i<nums.size();i++){
            if(nums[i] !=0) ans.push_back(nums[i]);
        }

        for(int i=0; i<nums.size();i++){
            if(i<ans.size()) nums[i]=ans[i];//��for��^�h
            else nums[i]=0;//��L����0
        }
    }
};
