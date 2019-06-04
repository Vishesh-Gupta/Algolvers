#include <vector>

class Solution {
public:
    
    
    bool isSelfDivising(int i) {
        int num{i};
        while (i > 0) {
            int digit = i % 10;
            i = (i - digit) / 10;
            if (digit == 0 || num % digit != 0) {
                return false;
            }
        }
        return true;
    }
    
    std::vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> arr{};
        for (int i = left; i <= right; i++) {
            if (isSelfDivising(i)) {
                arr.emplace_back(i);
            }
        }
        return arr;
    }
};