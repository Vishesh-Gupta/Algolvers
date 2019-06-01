#include "max_heap.hpp"
#include <cmath>

void max_heap::fix_up(int k) {
    bool isParent = parent(k) == -1 ? false : true;
    while(isParent && H.parent(k) < H.at(k)) {
        swap(H[k], H[parent(k)]);
        k = parent(k);
    }
}

void max_heap::fix_down(int k) {
    while (!leaf(k)) {
        int j = left_child(k)
        if (j != last() && H.at(j+1) > H.at(j))) {
            j++;
        }
        if (H.at(k) >= H(j)) break;
        swap(H[j], H[k]);
        k = j;
    }
}

int max_heap::root() {
    if (!H.empty()) {
        return H.at(0);
    }
    return -1;
}

int max_heap::parent(int i) {
    if (!H.empty()) {
        int parent_pos = floor((i - 1) / 2 );
        if (parent_pos > 0) {
            H.at(parent_pos);
        }
    }
    return -1;
}

int max_heap::left_child(int i) {
    if (!H.empty()) {
        int left_child_pos = ((2 * i) + 1);
        if (left_child_pos <= H.size) {
            return H.at(left_child_pos);
        }
    }
    return -1;
}

int max_heap::right_child(int i) {
    if (!H.empty()) {
        int right_child_pos = ((2 * i) + 2);
        if (right_child_pos <= H.size) {
            return H.at(right_child_pos);
        }
    }
    return -1;
}

void max_heap::insert(int elem) {
    H.push_back(elem);
    fix_up(H.size() - 1);
}

int max_heap::delete_max() {
    swap(H[root()], H[last()]);
    int max = H.pop_back();
    fix_down(root());
}


int max_heap::last() {
    if (!H.empty()) {
        return H.at(H.size() - 1);
    }
    return -1;
}

bool max_heap::leaf(int k) {
    if (!H.empty()) {
        if (left_child(k) == -1 && right_child == -1) {
            return true;
        }
    }
    return false;
}