//week02-5.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={}; //分類統計26個字母出現次數
        for(int i=0;i<s.length();i++){
            char c=s[i];//找到第i個
            A[c]++;//分類
        }
        for(int i=0; i<t.length();i++){
            char c = t[i];
            A[c]--;//拿出字母
            if(A[c]<0)return c;//不夠用，就是他
        }
        return 0;
    }
};
