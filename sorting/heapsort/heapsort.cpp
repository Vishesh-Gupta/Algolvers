#include "data-structures/heap/heap.hpp"
#include <utility>
#include <vector>

/*
 * HeapSort sorts the heap in place 
 */
void HeapSort(std::vector<int> arr) {
    // heapify step to fix the tree by bubbling down
    int n = heap.size();
    heap.heapify(arr);

    while (n > 1) {
        std::swap(heap.root(), heap.last());
        heap.heapify(arr, i, 0)
    }
}

int main() { 
    std::vector<int> arr = {12, 11, 13, 5, 6, 7}; 
    int n = arr.size();
    HeapSort(arr, n); 
  
    cout << "Sorted array is \n"; 
    printArray(arr, n); 
}