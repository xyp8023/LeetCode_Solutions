#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution{
    public:
    bool judgeCircle(string moves){
        unordered_map<char,int> lookup_x;
        unordered_map<char,int> lookup_y;

        lookup_x['U'] = {0};
        lookup_y['U'] = {1};
        lookup_x['D'] = {0};
        lookup_y['D'] = {-1};
        lookup_x['L'] = {-1};
        lookup_y['L'] = {0};
        lookup_x['R'] = {1};
        lookup_y['R'] = {0};
        vector<int> pos = {0, 0};
        for (int i = 0; i < moves.size(); ++i){
            pos[0] += lookup_x[moves[i]];
            pos[1] += lookup_y[moves[i]];
        }
    return ((pos[0]==0) &(pos[1]==0));

    }
};

int main(){
    string moves = "UD";
    // string moves = "LL";
    Solution sol;
    bool res = sol.judgeCircle(moves);
    cout << res << endl;
    cin.get();
}