//week02-5.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={}; //�����έp26�Ӧr���X�{����
        for(int i=0;i<s.length();i++){
            char c=s[i];//����i��
            A[c]++;//����
        }
        for(int i=0; i<t.length();i++){
            char c = t[i];
            A[c]--;//���X�r��
            if(A[c]<0)return c;//�����ΡA�N�O�L
        }
        return 0;
    }
};
