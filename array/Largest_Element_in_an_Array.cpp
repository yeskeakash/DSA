#include <vector>
#include <algorithm>
#include <climits>

int largestElement(std::vector<int> &arr, int n) {

    // Write your code here.

    int maxEle = INT_MIN;

    for(int &ele:arr) maxEle = std::max(maxEle, ele);

    return maxEle;

}