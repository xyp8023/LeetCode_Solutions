#include <vector>
# include <iostream>
#include <string>

using namespace std;

class Solution{
    public:
    vector<int> selfDividingNumbers(int left, int right){
        vector<int> selfDividingNums;
        for (int i = left; i <= right; ++i){
            string str_i = to_string(i);
            bool isSelfDividingNums = true;
            if (i >= 10) {
                for ( auto str : str_i){
                    if ((str == '0') || ((i % (str-'0'))!=0)){
                        isSelfDividingNums = false;
                        break;
                    }
                    
                }
            }
                   
            if (isSelfDividingNums)  selfDividingNums.push_back(i); 
        }
        return selfDividingNums;
    }
};

int main(){
    int left = 1;
    int right = 22;
    Solution sol;
    auto res = sol.selfDividingNumbers(left, right);
    for (auto ele:res){
        cout << ele << endl;
    }
    cin.get();
}