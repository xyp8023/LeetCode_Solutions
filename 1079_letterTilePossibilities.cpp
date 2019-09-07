#include <string>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;


//  sol 1
class Solution {
public:
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> counter;
        int sum=0;
        for (auto c:tiles){
            ++counter[c];
        }
        backtracking(counter, sum);
        return sum;
    }
    void backtracking( unordered_map<char, int>& counter, int& sum){
        for (auto &c: counter){
            if (c.second>0){
            c.second--;
            sum++;
            backtracking(counter, sum);
            c.second++;
            }
        }
    }
};

// sol2 very similar
class Solution {
public:
    int sum=0;
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> counter;
        for (auto c:tiles){
            ++counter[c];
        }
        backtracking(counter);
        return sum;
    }
    void backtracking( unordered_map<char, int>& counter){
        for (auto &c: counter){
            if (c.second>0){
            c.second--;
            sum++;
            backtracking(counter);
            c.second++;
            }
        }
    }
};

int main(){
    string tiles = "AAB";
    Solution sol;
    auto num = sol.numTilePossibilities(tiles);
    return 0;
}
