#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int res=0;
        for (int i=0; i <= S.size(); i++){
            if (J.find(S[i])==string::npos){
            }
            else{
                res+=1;
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    string J = "aA";
    string S = "aAAbbbb";
    int res = 0;
    res = sol.numJewelsInStones(J,S);
    // cout <<"hello world" <<endl;
    cout << res << endl;
    cin.get(); 
}
