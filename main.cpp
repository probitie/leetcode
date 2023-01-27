#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <sstream>
using std::vector;

int searchInsert(vector<int>& nums, int target) {
    int * vecdata = nums.data();
    int min_index = 0;
    int max_index = nums.size();
    int distance = max_index - min_index;

#define mid vecdata[middle_index]
#define min vecdata[min_index]
#define max vecdata[max_index]

    int middle_index = (min_index + max_index)/2;
    while(vecdata[middle_index] != target)
    {
        if (target > mid)
        {
            min_index = middle_index;
        }
        else
        {
            max_index = middle_index;
        }
        distance = max_index - min_index;

        if (distance <= 1 && target == min)
        {
            return min_index;
        }
        else if (distance <= 1)
        {
            return max_index;
        }

        middle_index = min_index + (distance/2);
    }
    return middle_index;
}

int main()
{
    //std::vector<int> nms = {};
    //std::vector<int> nms = {3};
    //std::vector<int> nms = {3, 3};
    //std::vector<int> nms = {1, 1};
    std::vector<int> nms = {1, 3, 5, 6};
    int res_index = searchInsert(nms, 3);
    std::cout << res_index << "\n";
    return res_index;
}
