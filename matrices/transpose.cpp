#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>>& A) {
        std::vector<std::vector<int>> transpose{};
        for (int i = 0; i < A[0].size(); i++) {
            std::vector<int> B{};
            for (int j = 0; j < A.size(); j++) {
                B.push_back(A[j][i]);
            }
            transpose.push_back(B);
        }
        return transpose;   
    }
};