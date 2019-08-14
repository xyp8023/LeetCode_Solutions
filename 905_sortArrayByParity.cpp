#include <iostream>
#include <vector>

using namespace std;

// solution 1
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> A_even;
        vector<int> A_odd;
        for (int i = 0; i < A.size(); ++i){
            if ( A[i] % 2){
                A_odd.push_back(A[i]);
            }
            else{
                A_even.push_back(A[i]);
            }

        }
        A_even.insert( A_even.end(), A_odd.begin(), A_odd.end() );
        return A_even;
    }
};

// solution 2
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int j = 0;
        for (int i = 0; i < A.size(); ++i){
            if ( A[i] % 2 == 0){
                swap(A[i], A[j]);
                j++;
            }
        }
        return A;
    }
};