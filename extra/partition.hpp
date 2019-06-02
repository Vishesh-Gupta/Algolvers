#ifndef _PARTITION_H_
#define _PARTITION_H_

#include <vector>

/*
 * partition rearranges A w.r.t to the pivot value at p
 * 
 * returns: pivot-index i
 * 
 * Running Time: θ(n)
 * 
 * Space Complexity: θ(n) 
 */
int partion(std::vector<int> A, int p);

/*
 * HOARE'S PARTITION
 * 
 * partition rearranges A w.r.t to the pivot value at p
 * 
 * returns: pivot-index i
 * 
 * Running Time: θ(n)
 * 
 * Space Complexity: θ(1) 
 */
int inplace_partition(std::vector<int> A, int p);

#endif