#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> permutation;
        int k = S.size();
        int j = 0;
        for (int i=0; i<S.size(); ++i){
            if (S[i] == 'I'){
                permutation.push_back(j);
                ++j;
            }
            else {
                permutation.push_back(k);
                --k;
            }
        }
        permutation.push_back(k);
        return permutation;
    }
};

int main(){
    string S = "IDID";
    Solution sol;
    vector<int> permutation;
    permutation = sol.diStringMatch(S);
    cin.get();
}