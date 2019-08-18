#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int dif;

        for (int i = 1; i <A.size(); ++i){
            dif = A[i] - A[i-1];
            if (dif < 0){
                return i-1;
            }
        }
        return -1;
    }
};

int main(){
    // vector<int> A={0,1,0};
    vector<int> A={0,2, 1,0};

    Solution sol;
    int index = sol.peakIndexInMountainArray(A);
    cout << index << endl;
    cin.get();
}