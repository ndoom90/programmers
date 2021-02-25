#include <iostream>
#include "Solution.cpp"
#include <vector>

using namespace std;

int main() {
    Solution solution = Solution();

    vector<int> lost = {2, 3, 4, 5};
    vector<int> reserve = {1, 3, 5};

    cout << solution.gymSuit(5, lost, reserve);
    return 0;
}
