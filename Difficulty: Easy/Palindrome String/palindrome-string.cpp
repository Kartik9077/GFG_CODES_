class Solution {
  public:
    bool isPalindrome(string& s) {
        
        int left = 0;
        int right = s.length() - 1;
        
        vector<char> m(s.begin(), s.end());
        vector<char> x(s.begin(), s.end());
        string x1(x.begin(), x.end());
        
        while (left < right) {
            char temp = m[left];
            m[left] = m[right];
            m[right] = temp;
            left++;
            right--;
        }
        string m1(m.begin(), m.end());
        
        if(m1 == x1) {
            return true;
        } else {
            return false;
        }
    }
};