// Mirror Distance of an Integer
// Approach 1 
// time complexity = O(logN)

class Solution {
public:
    int mirrorDistance(int n) {
        int x = n;
        int rev = 0;
        while(x>0){
            int d = x%10;
            rev = (rev*10)+d;
            x = x/10;
        }
        return abs(n-rev);
    }
};