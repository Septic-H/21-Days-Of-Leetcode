class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        if (haystack.empty()) return -1;
        int n = haystack.length();
        int m = needle.length();
        
        for (int i = 0; i < n; i++) {
            if (haystack[i] == needle[0]) {
                int j = 0;
                while (j < m && i+j < n && haystack[i+j] == needle[j]) {
                    j++;
                }
                if (j == m) return i;
            }
        }
        return -1;
    }
};