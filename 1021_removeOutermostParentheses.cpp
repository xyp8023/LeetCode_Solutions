#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        int flag = 0;
        int k = 0;
        string rS = S;
        for (int i = 0; i < S.size(); ++i){
            if (flag==0){
                rS.erase(i-k,1);
                k++;
            }
            if (S.at(i)=='('){
                flag++;
            }
            else if (S.at(i)==')'){
                flag--;
            }
            if (flag==0){
                rS.erase(i-k,1);
                k++;
            }
            
        }
        return rS;
        
    }
};

int main(){
    string S = "(()())(())";
    // string S = "()()";
    Solution sol;
    string rS = sol.removeOuterParentheses(S);
    return 0;
}