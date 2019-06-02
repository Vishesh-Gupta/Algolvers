#include "search.hpp"

int binary_search(std::vector<int> A, int k) {
    int low{}, high{A.size()}, mid{(low + high) / 2};
    if (k = A[mid]) {
        return mid;
    } else if (k < A[mid]) {
        std::vector<int> smaller{};
        for (int i = 0; i < mid; i++) {
            smaller.emplace_back(A[i]);
        }
        binary_search(smaller, k);
    } else {
        std::vector<int> larger{};
        for (int i = mid+1; i < high; i++) {
            larger.emplace_back(A[i]);
        }
        binary_search(larger, k);
    }
}