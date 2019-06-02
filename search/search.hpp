#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <vector>

/*
 * linear_search finds the index of the element k
 * 
 * @param A: vector of ints
 * @param k: element to be found
 * 
 * returns: the index of element k. otherwise -1 
 * 
 * Running Time: θ(n)
 */
int linear_search(std::vector<int> A, int k);

/*
 * binary_search finds the index of the element k
 * 
 * @param A: vector of ints
 * @param k: element to be found
 * 
 * returns: the index of element k. otherwise -1 
 * 
 * Running Time: θ(logn)
 */
int binary_search(std::vector<int> A, int k);

#endif