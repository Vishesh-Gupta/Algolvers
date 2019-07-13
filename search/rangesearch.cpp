#include <vector>

/**
 * rangeSearch searches the range with the low and high and returns all the elements
 * within the range
 * @param A: the vector with the values
 * @param low: the lower bound of the range
 * @param high: the upper bound of the range
 * @param inclusivity: a number to change the ranges
 *                  -1 - (low, high]
 *                   0 - [low, high]
 *                   1 - (low, high)
 *                   2 - [low, high)
 */

std::vector<int> &rangeSearch(std::vector<int> &A, int low, int high, int inclusivity) {
    std::vector<int> rangeElements{};
    if (inclusivity == -1) {
        for (auto &elem: A) {
            if (elem > low && elem <= high) {
                rangeElements.emplace_back(elem);
            }
        }
    } else if (inclusivity == 0) {
        for (auto &elem: A) {
            if (elem >= low && elem <= high) {
                rangeElements.emplace_back(elem);
            }
        }
    } else if (inclusivity == 1) {
        for (auto &elem: A) {
            if (elem > low && elem < high) {
                rangeElements.emplace_back(elem);
            }
        }
    } else if (inclusivity == 2) {
        for (auto &elem: A) {
            if (elem >= low && elem <= high) {
                rangeElements.emplace_back(elem);
            }
        }
    }

    return rangeElements;
}