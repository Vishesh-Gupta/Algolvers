#include <vector>

class Solution {
public:
    bool isMonotonic(std::vector<int>& A) {
        bool hasDecreasing{};
        for (int i = 0; i < A.size() - 1; i++) {
            if (A[i] > A[i+1]) {
                hasDecreasing = true;
                break;
            }
        }
        if (!hasDecreasing) {
            return true;
        }
        for (int i = 0; i < A.size() - 1; i++) {
            if (A[i] < A[i+1]) return false;
        }
        return true;
    }
};