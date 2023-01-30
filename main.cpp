    #include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <sstream>
using std::string, std::vector;

vector<int> plusOne(vector<int>& digits) {
    int left = 1;

    for(auto &&it = digits.rbegin(); it != digits.rend(); ++it)
    {
        if (left and *it >= 9)
        {
            *it = 0;
        }
        else
        {
            ++(*it);
            left = 0;
            break;
        }
    };

    if (left)
    {
        (*digits.begin()) = 0;
        digits.insert(digits.begin(), 1);
    }
    /*
     left = 1
go from right to left [..<--..]
    pick digit

    if left and digit > 9
        digit = 0
    else
        ++digit
        left = 0

if last digit(first elem of the vector) more than 9 and left=1
    digit = 0
    push_from_left(1)
    */

    return std::forward<vector<int>>(digits);
}
int main()
{
    //std::vector<int> nms = {};
    //std::vector<int> nms = {3};
    //std::vector<int> nms = {3, 3};
    //std::vector<int> nms = {1};
    std::vector<int> nms = {9};
    vector<int> res = plusOne(nms);
    std::for_each(res.begin(), res.end(), [](int wtf){std::cout << wtf;});
    std::cout << "\n";
    return 0;
}
