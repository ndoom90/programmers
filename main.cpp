#include <iostream>
#include "Solution.cpp"
#include <vector>

using namespace std;

int main() {
    Solution solution = Solution();

    vector<string> participants = {"leo", "kiki", "eden"};
    vector<string> completion = {"eden", "kiki"};

    solution.termTest({1, 3, 2, 4, 2});
    return 0;
}
