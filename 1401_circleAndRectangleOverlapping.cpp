class Solution {
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) {
        // bool overlap = false;
        
        if ((x1<=x_center)&&(x_center<=x2) &&(y1<=y_center)&&(y_center<=y2)){
            // cout << x1 << x_center <<x2 <<endl;
            // cout << y1 << y_center <<y2 <<endl;
            
            
            return true;
        }
        
        
        
        if (((y1<=y_center)&&(y_center<=y2)&&(abs(x1-x_center)<=radius))||(y1<=y_center)&&(y_center<=y2)&&(abs(x2-x_center)<=radius))  {
            // cout << 1 <<endl;
            
            return true;
        }
        if ( ((x1<=x_center)&&(x_center<=x2)&&(abs(y1-y_center)<=radius))||(x1<=x_center)&&(x_center<=x2)&&(abs(y2-y_center)<=radius))  {
            // cout << 2 <<endl;
            
            return true;
        }
            // cout << ((x1<=x_center)&&(x_center<=x2)) <<endl;
        // cout << (abs(y2-y_center)<=radius) <<endl;
        
            // cout<<3<<endl;
        if ((sqrt(pow(x1-x_center,2)+pow(y1-y_center,2))>radius)&&(sqrt(pow(x2-x_center,2)+pow(y2-y_center,2))>radius)&&(sqrt(pow(x1-x_center,2)+pow(y2-y_center,2))>radius)&&(sqrt(pow(x2-x_center,2)+pow(y1-y_center,2))>radius)){
            // cout << 0 <<endl;
            return  false;
        }
        else {
            return true;
        }
            // return overlap;
        
        
        }
        
    
};

