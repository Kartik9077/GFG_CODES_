class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        if ( 3 > arr.size()) { return -1; }
        
        int max = -1;
        int secondMax = -1;
        int thirdMax = -1;
        
        for ( int i = 0; i < arr.size(); ++i ) {
            if ( arr[ i ] > max ) {
                thirdMax = secondMax;
                secondMax = max;
                max = arr[ i ];
            } else if ( arr[ i ] > secondMax ) {
                thirdMax = secondMax;
                secondMax = arr[ i ];
            } else if ( arr[ i ] > thirdMax ) {
                thirdMax = arr[ i ];
            }
        }
        
        return thirdMax;
    }
};
