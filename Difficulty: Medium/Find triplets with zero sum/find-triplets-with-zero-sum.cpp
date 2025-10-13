class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        // code here
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                for (int k = j + 1; k < arr.size(); k++) {
                    if (arr[i] + arr[j] + arr[k] == 0) {
                        return true;
                        break;
                    }
                }
            }
        }
        return false;
    }
};