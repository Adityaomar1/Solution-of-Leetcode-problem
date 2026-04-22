// Leetcode problem 57 (Insert Intervals)

// Approach-1  Array / Simulation / Two Pointers

// Time complexity O(N)

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // Insert Intervals
        vector<vector<int>> res;
        bool insert = false;
        for(int i =0;i<intervals.size();i++)
        {
            if(insert==false && intervals[i][0] > newInterval[0] )
            {
                res.push_back(newInterval);
                insert = true;
            }
            res.push_back(intervals[i]);
        }
        if(insert == false){
            res.push_back(newInterval);
        }
        
        // Merge Intervals
        vector<vector<int>> ans;
        int start1 = res[0][0];
        int end1 = res[0][1];
        for(int i = 1; i<res.size(); i++){
            int start2 = res[i][0];
            int end2 = res[i][1];
            if(end1 >= start2){
                // Merge
                start1 = start1;
                end1 = max(end1,end2);
                continue;
            }
            ans.push_back({start1,end1});
            start1 = start2;
            end1 = end2;
        }
        ans.push_back({start1,end1});
        return ans;
    }
};
