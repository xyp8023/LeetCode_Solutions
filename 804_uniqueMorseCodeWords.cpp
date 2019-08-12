#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for (int i=0;i<=alphabet.size();++i){
        }
        set<string> lookup;
        
        for(int i=0; i<words.size(); ++i){
            string word;
            for (int j=0; j<words[i].size(); ++j){
                // cout << j <<endl;
                    size_t index= alphabet.find(words[i][j]) ;
                    if (index!=string::npos){
                        word+=morse[index];
                    }
            }
        lookup.insert(word);     
        }
        return lookup.size();
        
    }
};

int main(){
    Solution sol;

    vector<string> words={"gin", "zen", "gig", "msg"};
    int res = sol.uniqueMorseRepresentations(words);
    cout << res << endl;
    cin.get();

}