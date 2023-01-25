#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <sstream>
using namespace std;


int removeElement(vector<int>& nums, const int val) {
    if (nums.empty()) return 0;
    int *startpos = &nums[0]; // nums.data()
    int *v = startpos;
    int *x = startpos;
    size_t size = nums.size();
    int *endpos = startpos + size;
    int res_size = 0;

    while (x < endpos)
    {
        if (*x != val) {++v; ++res_size;}
        ++x;
        if (x >= endpos) break;
        *v = *x;
    }
    return res_size;
}


int main()
{
    //std::vector<int> nms = {};
    //std::vector<int> nms = {3};
    //std::vector<int> nms = {3, 3};
    //std::vector<int> nms = {1, 1};
    std::vector<int> nms = {3, 2, 2, 3};
    int res_len = removeElement(nms, 2);
    return res_len;
}
