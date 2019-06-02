#include "partition.hpp"
#include "pivot_selection.hpp"
#include <utility>

int partition(std::vector<int> A,int p) {
    std::vector<int> smaller{}, equal{}, larger{};
    int v = A[p];
    for (auto elem: A) {
        if (elem < v) {smaller.emplace_back(elem);}
        else if (elem > v) {larger.emplace_back(elem);}
        else {equal.emplace_back(elem);}
    }
    int i{smaller.size()};
    int j{equal.size()};
    for (int k{}; k < i; k++) {
        A[k] = smaller[k];
    }
    for (int k{i}; k < (i+j-1); k++) {
        A[k] = equal[k];
    }
    for (int k{i+j}; k < A.size(); k++) {
        A[k] = larger[k];
    }
    return i;
}

int inplace_partition(std::vector<int> A, int p) {
    int n = A.size();
    std::swap(A[n-1], A[p]);
    int i{-1}, j{n-1}, v{A[n-1]};
    while (i < n) {
        
    }
}