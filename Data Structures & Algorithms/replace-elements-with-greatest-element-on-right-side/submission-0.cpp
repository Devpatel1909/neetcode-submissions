class Solution {
   public:
    int findMax(vector<int>& arr, int i) {
        int max = INT_MIN;
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        return max;
    }
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            int mx =findMax(arr, i);
            arr[i] = mx;
        }

        arr[n - 1] = -1;
        return arr;
    }
};