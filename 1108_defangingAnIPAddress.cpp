#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string defangIPaddr(string address) {
        string defanged_address = address;
        int num = 0;
        for (int i = 0; i < address.size(); ++i){
            if (address[i] == '.'){
                defanged_address.replace(i+num,1,"[.]");
                num+=2;
            }
        }
        return defanged_address;
    }
};

int main(){
    string address = "1.1.1.1";
    Solution sol;
    string defanged_address = sol.defangIPaddr(address);
    return 0;
}