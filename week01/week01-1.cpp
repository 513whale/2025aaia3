//LeetCode
//�bhaystack ���_��� ���needle�w
//haystack: sadbutsad
//needle:  sad i:0
//         sad i:1
//          sad i:2
//           sad i:3
//            sad i:4
//              sad i:5
//                sad i:6
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H=haystack.length(),N=needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N)==needle)return i;

        }

        return-1;
    }
};
