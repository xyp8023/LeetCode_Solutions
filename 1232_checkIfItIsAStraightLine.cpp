class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        float k;
        float b;
        float sum_x_diff;
        for (int i=0; i<coordinates.size()-1; i++){
            sum_x_diff+=abs(coordinates[i][0] - coordinates[i+1][0]);
        }
        if (sum_x_diff<0.0000001){
            return true;
        }
        k = float(coordinates[0][1] - coordinates[1][1])/float((coordinates[0][0] - coordinates[1][0]));
        b = coordinates[0][1]-k*coordinates[0][0];
        
        float sum=0;
        for (int i=0; i<coordinates.size(); i++){
            sum += abs(coordinates[i][0]*k+b-coordinates[i][1]);
        }
        // cout << k << b << sum << endl;
        if (sum<0.00001){
            return true;
        }
        else {
            return false;
        }
    }
};