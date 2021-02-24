#include <iostream>
#include "Solution.cpp"
#include <vector>

using namespace std;

int main() {
    Solution solution = Solution();

    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}, {1, 7, 5}};

    solution.kthNumber(array, commands);
    return 0;
}
