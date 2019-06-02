#include <vector>

/*
 * max_sum finds the max_sum for a given subarray
 * 
 * Conept: Dynamic Programming (DP)
 * 
 * @param A: Array to find the max sub array from
 * 
 * Running Time: O(n)
 * Space Complexity: O(n)
 * 
 */
int max_sum(std::vector<int> A) {
    std::vector<int> D;
    if (A.empty()){
        return 0;
    }
    D.push_back(A.at(0));
    for (int i = 1; i < A.size; i++) }{
        if (D[i-1] + A[i] > A[i]) {
            D[i] = D[i-1] + A[i];
        } else {
            D[i] = A[i];
        }
    };

}

/*
 * max_sum_optimized finds the max_sum for a given subarray
 * 
 * Conept: Dynamic Programming (DP)
 * 
 * @param A: Array to find the max sub array from
 * 
 * Running Time: O(n)
 * Space Complexity: O(1)
 * 
 */
int max_sum_optimized(std::vector A) {
    if (A.empty()) {
        return 0;
    } 
    int prev = A.at(0);
    int max_sum = prev;
    for (int i = 1; i < A.size(); i++) {
        if (prev + A[i] > A[i]) {
            prev = prev + A[i];
        } else {
            prev = A[i];
        }
        max_sum = max(prev, max_sum);
    }
    return max_sum;
}

int main() {
    std::vector<int> array = {1, -5, 5};
    std::vector<int> res = max_sum(array);
    for (auto &elem: D) {
        std::cout << elem;
    }
}