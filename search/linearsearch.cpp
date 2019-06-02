#include "search.hpp"

int linear_search(std::vector<int> A, int k) {
    int len = A.size();
    for (int i = 0; i < len; i++) {
        if (A[i] == k) return i;
    }
    return -1;
}