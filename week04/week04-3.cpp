//week04-3
//123
//  4最右邊開始，+1完成
//4321
//   2最右邊開始，+1完成
//949
//  0有進位，不可，return繼續做
//  5最右邊 +1 完成
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();//陣列大小
        for(int i=N-1; i>=0; i--){//倒過來的迴圈
            if(digits[i]==9){//要進位
               digits[i] =0;//設為零不結束
            }else{//甭進位++就可結束
                digits[i]++;
                return digits;//全部陣列當答案
            }
        }
       digits.insert(digits.begin(),1); //最左邊 要插入1
       return digits;//
    }
};
