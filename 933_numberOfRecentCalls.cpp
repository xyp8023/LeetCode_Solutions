#include <iostream>
#include <string>
#include <deque>

using namespace std;
class RecentCounter {
public:
    RecentCounter() {
        
    }
    deque<int> pings;
    int ping(int t) {
        this->pings.push_back(t);
        while ((t-3000)>  this->pings.at(0)){
            this->pings.pop_front();
        }
        return this->pings.size();
    }       
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

int main(){
    RecentCounter* obj = new RecentCounter();
    int t = 1;
    int param_1 = obj->ping(t);
}