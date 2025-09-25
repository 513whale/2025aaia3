///week03-4
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
      //triangle[i][j]第i層的j個數
      int N = triangle .size();//共有幾層
      for(int i=N-2; i>=0;i--){
        for(int j=0; j<=i; j++){
            triangle[i][j] +=min(triangle[i+1][j],triangle[i+1][j+1]);
        }
      }
      return triangle[0][0];
    }
};
