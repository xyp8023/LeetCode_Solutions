#include <iostream>
# include <vector>
#include <bits/stdc++.h>

using namespace std;


// solution 1
class Solution{
    public:
    vector<int> sortedSquares(vector<int>& A){
        vector<int> squaresA;
        for (auto a:A){
            squaresA.push_back(a*a);
        }
        sort(squaresA.begin(), squaresA.end());
        return squaresA;
    }
};



int main(){
    Solution sol;
    vector<int> A = {-4, -1, 0, 3, 10};
    auto sA = sol.sortedSquares(A);
    for (auto a:sA){
        cout << a << endl;
    }
    cin.get();
}