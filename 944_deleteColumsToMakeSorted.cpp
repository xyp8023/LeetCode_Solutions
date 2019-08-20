#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

// solution 1
class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int num = 0;
        for (int i = 0; i < A[0].size(); ++i){
            vector<int> column_letter;
            for (int j = 0; j < A.size(); ++j){
                column_letter.push_back((A[j][i] - '0')%48);
            }
        if (!is_sorted(column_letter.begin(), column_letter.end())){
            ++num;
            }
        }
        return num;
    }
};

// solution 2
class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int num = 0;
        for (int i = 0; i < A[0].size(); ++i){
            vector<int> column_letter;
            for (int j = 1; j < A.size(); ++j){
                if (A[j][i] < A[j-1][i]){
                    ++num;
                    break;
                }
            }
        }
        return num;
    }
};

int main(){
    // vector<string> A = {"cba","daf","ghi"};
    vector<string> A = {"zyx","wvu","tsr"};

    Solution sol;
    int res = sol.minDeletionSize(A);
    return 0;
}