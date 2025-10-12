class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n = s.size();
        int unique = 0;
        int maxSize = -1;
        int freq[26] = {0};
        
        for(int i=0, j=0; j<n; j++){
            // freq of element will be 0 only when it is a new char in window hence a unique char increases
            if(freq[s[j]-'a'] == 0){ 
                unique++;
            }        
            freq[s[j]-'a']++;
            while(unique>k){
                freq[s[i]-'a']--;
                if(freq[s[i]-'a'] == 0) unique--;    
               // the freq of an elment is 0 only when we have removed all its occrences from the window
                i++;
            }
            if(unique == k)  maxSize = max(maxSize, j-i+1);
        }
        
        return maxSize;
    }
};

