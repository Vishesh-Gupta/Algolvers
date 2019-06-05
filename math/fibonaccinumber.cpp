class Solution {
public:
    int fib(int N) {
        int first{0}, second{1}, sum{};
        for (int i = 0; i < N; i++) {
            sum = first + second;
            second = first; 
            first = sum;
        }
        return sum;
    }
};