#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std; 

// solution 1
class Solution{
    public:
    int repeatedNTimes(vector<int>& A){
        unordered_set<int> A_set;
        int N = 0;
        for (int i = 0; i < A.size(); ++i){
            A_set.insert(A[i]);
            ++N;
            if (N > A_set.size()){
                N = i;
                break;
            }
        }        
        return A[N];

    }
};

// solution 2
class Solution{
    public:
    int repeatedNTimes(vector<int>& A){
        unordered_set<int> A_set;
        
        for (int i = 0; i < A.size(); ++i){
            int N = A_set.size();
            A_set.insert(A[i]);
            
            if (N == A_set.size()){
                break;
            }
        }        
        return A[A_set.size()];

    }
};

// solution 3
class Solution{
    public:
    int repeatedNTimes(vector<int>& A){
        unordered_set<int> A_set;
        
        for (int i = 0; i <= int(A.size()/2); ++i){
            A_set.insert(A[i]);           
            if (i == A_set.size()){
                return A[i];
            }
        }        
        return A[int(A.size()/2)+1];

    }
};

int main(){
    // vector<int> A = {1, 2, 3, 3};
    // vector<int> A = {5,1,5,2,5,3,5,4};
    vector<int> A = {8, 3, 2, 3};
    Solution sol;
    auto rEle = sol.repeatedNTimes(A);
    cout << rEle << endl;
    cin.get();
}