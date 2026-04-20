// Leetcode  daily problem 

// Approach-1  Brute-Force Search/Enumeration

// Time complexity O(N^2)

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = INT_MIN;
        for(int i =0; i<colors.size(); i++){
            for(int j = 0;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    int result = abs(i-j);
                    ans = max(ans,result); 
                }
            }
        }
        return ans;
    }
};
