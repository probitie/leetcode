#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <sstream>
using namespace std;
/*
return length of the new array

prev num=nums[0]
prev i = 0

for num in nums[1:]:
    if num != prev_num:
        prev num = num
        prev i ++
        nums[i] = prev_num

return i+1;
*/


int removeDuplicates(vector<int>& nums) {
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
    return nums.size();
}


int main()
{
    std::cout << std::boolalpha;

    std::vector<int> nms = {1, 1, 1, 2, 3, 4, 4, 5};
    int res_len = removeDuplicates(nms);
    return 0;
}
