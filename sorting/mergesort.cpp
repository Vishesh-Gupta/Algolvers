/*
 * Merge Sort: A sorting algorithm that uses divide and conquor
 * to sort an array of n integers
 * @param A: Array that needs to be sorted
 * @output: Sorted array
 * 
 * Total Time, T(n) = 2T(n/2) + θ(n-1)
 * 
 * Running Time: O(nlogn)
 * 
 */

#include <stdio>
#include <array>

void merge_sort(std::array<int, 6> A, int left, int right, std::array<int, 6> S) {
    if (S.empty) {
        S = std::array{0}; 
    }
    if (right <= left) {
        return
    } else {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid, S)
        merge_sort(arr, mid+1, right, S);
        merge(arr, left, mid, right, S);
    }

}

void merge(std::array<int, 6> A, int left, int mid, int right, std::array<int,6> S) {
    for (int i = left; i < right; i++) {
        S[i] = A[i]; 
    }
    int left_elem = left;
    int right_elem = m+1;
    for (int k = 0; k < right; k++) {
        if (k > mid) {
            A[k] = S[right_elem++];
        } else if (right_elem > right) {
            A[k] = S[left_elem++];
        } else if (S[left_elem <= S[right_elem]) {
            A[k] = S[left_elem++];
        } else {
            A[k] = S[right_elem++];
        }
    }
}

int main() {
    std::array<int, 6> arr{0, 5, 2, 4, 3, 1};
    std::array<int, 6> S{};
    int left = 0;
    int right = S.size() - 1;
    merge_sort(arr, left, right, S);    
    std::cout << "The sorted array: " << arr[0] << ", "
    for (int i = 1; i < arr.size; i++) {
        std::cout<< ", " << arr[i];
    }
    return 0;
}