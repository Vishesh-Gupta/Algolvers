class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int result{0};
        std::map<int, int> mymap;
        for (auto &i: A) {
            if (mymap.find(i) != mymap.end()) {
                mymap[i]++;
            }
            mymap.insert(std::pair<int, int>(i, 1));
        }
        int len = A.size() / 2;
        for (auto it = mymap.begin(); it != mymap.end(); it++) {
            if (it->second == len) {
                result = it->first; 
            }
        }
        return result;
    }
};