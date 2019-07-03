#include "search.hpp"
#include <cmath>

int interpolation_search(std::vector<int> A, int k) {
    int l{0}, r{A.size()-1};
    while(l < r && A.at(r) != A.at(l) && k >= A.at(l) && k <= A.at(r)) {
        int m = l + floor(((k - A.at(l))/(A.at(r) - A.at(l))) * (r - l));
        if (A.at(m) < k) {l = m + 1;}
        else if (k < A.at(m)) {r = m - 1;}
        else return m;
    }
    if (k = A.at(l)) {return l;}
    else return -1;
}