#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

class Solution{
    public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A){
        short m = A.size(); 
        for (short i = 0; i < m; ++i){
            // flip horizontally
            for (short j = 0; j < floor(m/2); ++j){
                int tmp = A[i][j];
                A[i][j] = A[i][m-j-1];
                A[i][m-j-1] = tmp;
            }
            // invert image
            for (short j = 0; j < m; ++j){
                A[i][j]=!A[i][j];
            }
        }
        return A;
    }
};

int main(){
    Solution sol;
    // vector<vector<int>> A = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> A = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    vector<vector<int>> rA = sol.flipAndInvertImage(A);
    for (short i = 0; i < A.size(); ++i){
        for (short j = 0; j < A.size(); ++j){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cin.get();

}