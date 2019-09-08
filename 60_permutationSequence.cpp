#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using  namespace std;

// solution 1
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> inputs;
        int count = 0;
        string k_th_string;
        for (int i=0; i<n; ++i){
            inputs.push_back(i+1);
        }
        do {
            if (count==k-1){
                for (int i=0; i<n;++i){
                k_th_string.append(to_string(inputs[i]));
                }
                break;
            }
            count++;
        }
        while(next_permutation(inputs.begin(), inputs.end()));
        
        return k_th_string;
    }
};

// solution 2 
class Solution {
public:
    string getPermutation(int n, int k) {
        string k_th_string = "";
        for (int i=1; i<=n; ++i){
            k_th_string.push_back(i+'0');
        }
        while(--k){
            next_permutation(k_th_string.begin(), k_th_string.end());
        }
        return k_th_string;
    }
};


int main(){
    Solution sol;
    auto k_th_string = sol.getPermutation(3,1);
    return 0;
}