//week04.2.cpp
//單調，增加或減少
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0,down=0;// 增減
        for(int i=1; i<nums.size();i++){ //朗兩比較
            if(nums[i-1]<nums[i])up=1;
            if(nums[i-1]>nums[i])down=1;
        }
        if(up==1 && down==1)return false;//不可又增又減
        return true; //沒失敗或成功

    }
};
