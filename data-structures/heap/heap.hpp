#ifndef _HEAP_H_
#define _HEAP_H_

#include <vector>

class max_heap {
    std::vector<int> H;

        /*
         * leaf(i) makes sure if the element at index i
         * is a leaf or not
         * 
         * returns: true if the element at i is leaf,
         *          false otherwise
         */
        bool leaf(int k);
        
    protected:
        /*
         * root() returns the root element of the heap
         * 
         * returns: the value of root of element at i,
         *          -1 if not found
         * 
         * Running Time: O(1)
         */
        int root();

        /*
         * parent(i) returns the parent of the element at
         * index i if that exists
         * 
         * returns: parent if found, -1 otherwise    
         */
        int parent(int i);

        /*
         * left_child(i) finds the left child of element at
         * index i
         * 
         * @param i: index in the heap
         * 
         * returns: the value of left_child of element at i,
         *          -1 if not found
         * 
         * Running Time: O(1)
         */
        int left_child(int i);

        /*
         * right_child(i) finds the right child of element at
         * index i
         * 
         * @param i: index in the heap
         * 
         * returns: the value of right_child of element at i,
         *          -1 if not found
         * 
         * Running Time: O(1)
         */
        int right_child(int i);
        
        /*
         * last returns the element in the heap
         * 
         * Running Time: O(1)
         */
        int last();

        /*
         * fix_up fixes the structure of the tree by bubbling up
         * 
         * @param k: element at k
         * 
         * Running Time: O(height of heap) = O(logn)
         */
        void fix_up(int k);

        /*
         * fix_down the structure of the tree by bubbling down
         * 
         * @param n: 
         * @param k: 
         * 
         * Running Time: O(height of heap) = O(logn)
         */
        void fix_down(int k);

    public: 
        /*
         * insert(elem) inserts the element to the heap
         * 
         * Running Time: O(logn)
         */
        void insert(int key);

        /*
         * deleteMax(elem) deleted the maximum element
         * in the heap
         * 
         * returns: Max in the heap
         * 
         * Running Time: O(logn)
         */
        int deleteMax();

        /*
         * size returns the size of the heap
         * 
         * returns: the size, 0 if empty
         */
        int size();
};

#endif