/*
 * Problem: Sum of Two Numbers to equak K
 * 
 * Analysis: To find the sum of two numbers to equal
 * to K, we need to look at every combination.
 * 
 * Running Time: θ(n²)
 */

#include <array>

bool sumOf2ToK(std::array<int, 5> arr, int K) {
    for (auto i: arr) {
        for (auto j: arr) {
            if (i + j == K) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::array<int, 5> arr = {10, 15, 3, 7};
    int K = 17;
    bool result = sumOf2ToK(arr, K);
    return 0;
}