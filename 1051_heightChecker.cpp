#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> _heights = heights;
        int sum=0;
        sort(heights.begin(), heights.end());
        for (int i=0; i<heights.size(); ++i){
            if (heights.at(i)!=_heights.at(i)){
                sum++;
            }
        }
        return sum;
    }
};