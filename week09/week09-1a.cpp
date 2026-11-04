//week09-1.cpp 學習計畫1572. Matrix Diagonal Sum
//矩陣 希望把兩條對角線上面的數字加起來

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N=mat.size();//矩陣大小
        int ans=0;
        //迴圈裡，要查對角線 方法1: 查兩條對角線
        for (int i=0;i<N;i++) { // 左上到右下
            ans += mat[i][i];
        }
        for (int i=0;i<N;i++) { // 左下到右上
            ans += mat[N-1-i][i];
        }
        //奇數中間，不重複
        if (N%2 == 1) ans -= mat[N/2][N/2];
        return ans;
    }
};
