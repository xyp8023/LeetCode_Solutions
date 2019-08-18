#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

class Solution{
    public:
    int arrayPairSum(vector<int>& nums){
        int n = nums.size()/2;
        int sum = 0;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i+=2){
            sum = sum + nums[i];
        }
        return sum;
    }
};

int main(){
    vector<int> nums = {1,4,3,2};
    Solution sol;
    int sum = sol.arrayPairSum(nums);
    return 0;
}