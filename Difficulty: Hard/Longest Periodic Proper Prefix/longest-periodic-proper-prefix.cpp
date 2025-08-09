#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int getLongestPrefix(const string &s) {
        int n = s.size();
        if (n <= 1) return -1;

        // build prefix-function (lps)
        vector<int> lps(n, 0);
        for (int i = 1; i < n; ++i) {
            int len = lps[i - 1];
            while (len > 0 && s[i] != s[len]) len = lps[len - 1];
            if (s[i] == s[len]) ++len;
            lps[i] = len;
        }

        int l = lps[n - 1];           // longest border
        if (l == 0) return -1;        // no border -> no periodic proper prefix

        // follow the chain to the smallest positive border
        while (l > 0 && lps[l - 1] > 0) {
            l = lps[l - 1];
        }

        // largest periodic proper prefix length = n - smallest_border
        return n - l;
    }
};