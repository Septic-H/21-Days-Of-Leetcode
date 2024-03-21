class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        
        int count = 0;
        int end = INT_MIN;

        for (auto i : intervals) {
            if (i[0] < end) {
                count++;
            } else {
                end = i[1];
            }
        }
        return count;
    }
};