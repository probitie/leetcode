#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <sstream>
using namespace std;


int removeElement(vector<int>& nums, const int val) {
    int *startpos = &nums[0]; // nums.data()
    int *v = startpos;
    int *x = startpos;
    size_t size = nums.size();
    int *endpos = startpos + size;

    while (x < endpos)
    {
        if (*x != val) ++v;
        ++x;
        *v = *x;

    }

    return std::distance(startpos, v);
}


int main()
{

    std::vector<int> nms = {1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 5, 5, 5, 5};
    int res_len = removeElement(nms, 2);
    return 0;
}
