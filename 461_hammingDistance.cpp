# include <iostream>
#include <bitset>
#include <string>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<8> bitset_x(x); 
        bitset<8> bitset_y(y); 
        // bitset_x(x);
        // string bianry_x = bitset<8>(x).to_string;
        // string bianry_y = bitset<8>(y).to_string;
        cout << bitset_x << endl;
        cout << bitset_y << endl;
        // string bianry_x = bitset_x.to_string();
        // string bianry_y = bitset_y.to_string();
        // cout << bianry_x << endl;
        // cout << bianry_y << endl;
        bitset<8> dis = bitset_x ^ bitset_y;
        return dis.count(); 
        // return 0;

    }
};


int main(){
    int x = 4;
    int y = 1;
    Solution sol;
    int hamming_distance = sol.hammingDistance(x, y);
    cout << hamming_distance << endl;
    cin.get();

}