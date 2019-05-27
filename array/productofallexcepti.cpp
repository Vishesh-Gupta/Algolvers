/*
 * Problem: Product of all the numbers except i-th
 * 
 * Analysis: To find the product there are couple different
 * ways of doing this.
 * 
 * Method 1: Brute Force - To generate the product for every number
 * Method 2: Find the product for one number and divide by i-th and
 *           multiply by i+1-th
 * 
 * Running Time:
 * Method 1: O(n²)
 * Method 2: O(n) or O(2n)
 */

#include <array>

// Brute Force Method 
std::array<int, 5> productofi(std::array<int, 5> arr) {
    std::array<int, 5> res;
    res.fill(1);
    for (auto i: arr) {
        for (auto j: arr) {
            if (i != j) {
                res[i] *= arr[j];
            }
        }
    }
    return res;
}

// Optimized method
std::array<int, 5> productofi_opt(std::array<int, 5> arr) {
    std::array<int, 5> res;
    res.fill(1);
    for (int i = 1; i < arr.size; i++) {
        res[0] *= arr[i];
    }

    for (int i = 1; i < arr.size; i++) {
        res[i] = (res[i-1] / arr[i]) * arr[i-1];
    }

    return res;
}

int main() {
    std::array<int, 5> arr = {1,2,3,4,5};
    std::array res = productofi(arr);
    std::array res_opt = productofi_opt(arr);
    
    bool same = res == res_opt;

    return 0;
}