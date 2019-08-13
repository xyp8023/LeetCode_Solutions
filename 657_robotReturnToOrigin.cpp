#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// // solution 1
// class Solution{
//     public:
//     bool judgeCircle(string moves){
//         unordered_map<char,int> lookup_x;
//         unordered_map<char,int> lookup_y;

//         lookup_x['U'] = {0};
//         lookup_y['U'] = {1};
//         lookup_x['D'] = {0};
//         lookup_y['D'] = {-1};
//         lookup_x['L'] = {-1};
//         lookup_y['L'] = {0};
//         lookup_x['R'] = {1};
//         lookup_y['R'] = {0};
//         vector<int> pos = {0, 0};
//         for (int i = 0; i < moves.size(); ++i){
//             pos[0] += lookup_x[moves[i]];
//             pos[1] += lookup_y[moves[i]];
//         }
//     return ((pos[0]==0) &(pos[1]==0));

//     }
// };


// // solution 2
// class Solution{
//     public:
//     bool judgeCircle(string moves){
//         unordered_map<char,int> map({{'U',0},{'D',0},{'L',0},{'R',0}});
        
//         for (int i = 0; i < moves.size(); ++i){
//             map[moves[i]]++;
//         }
//         return ((map['U']==map['D']) &(map['L']==map['R']));
//     }
// };

// solution 3
class Solution{
    public:
    bool judgeCircle(string moves){
        int x = 0;
        int y = 0;
        for (auto command: moves){
            if (command == 'U') ++y;
            if (command == 'D') --y;
            if (command == 'L') --x;
            if (command == 'R') ++x;

        }
        return (x==0)&(y==0);
    }
};

int main(){
    // string moves = "UD";
    string moves = "LL";
    Solution sol;
    bool res = sol.judgeCircle(moves);
    cout << res << endl;
    cin.get();
}