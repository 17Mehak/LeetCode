class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0; i <= 30; i++){
            int an = pow(2,i);
        
        if (an == n){
            return true;
        }
        }
        return false;
    }
};