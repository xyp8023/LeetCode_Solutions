#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (res.count(target - nums[i])){
                return {res[target - nums[i]], i};
            }
            res[nums[i]] = i;

        }
        return {};
    }
};

int main(){
    Solution sol;
    stringstream result;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    auto res = sol.twoSum(nums, target);
    copy(res.begin(), res.end(), ostream_iterator<int>(result, " "));
    
    cout <<result.str().c_str() << endl;
    cin.get(); 
}