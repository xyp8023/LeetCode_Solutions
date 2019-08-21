#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        for (auto word : words){
            int sum_in_word = 0;
            string _chars = chars;
            for (auto c : word){
                if (_chars.find(c)!=string::npos){
                    _chars.erase(_chars.find(c),1);
                    sum_in_word++;
                }
                else{
                    sum_in_word=0;
                    break;
                }
            }
            sum+=sum_in_word;
        }
        return sum;
    }
};

int main(){
    vector<string> words = {"cat","bt","hat","tree"};
    string chars = "atach";
    Solution sol;
    int sum = sol.countCharacters(words, chars);
    return 0;
}