#include <vector>
#include <utility>
#include "../../extra/pivot_selection.hpp"
#include "../../extra/partition.hpp"

/*
 * quick_select selects the element k from the array A
 * 
 * Recursive Running Time: {
 *  T(n)= T(n-1) + cn, n >= 2,
 *        c          , n = 1
 * } 
 * 
 * Running Time: θ(n²)
 */
int quick_select(std::vector<int> A, int k) {
    if (int p{choose_pivot(A)}, i{partion(A, p)}; i = k) {
        return A[i];
    } else if(i > k) {
        std::vector<int> smaller{};
        for (int l = 0; l < i; l++) { smaller.push_back(A[l]); }
        return quick_select(smaller, k);
    } else if (i < k) {
        std::vector<int> larger{};
        for (int l = i+1; l < A.size(); l++) { larger.push_back(A[l]); }
        return quick_select(larger, k);
    }
}