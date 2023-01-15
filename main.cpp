#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

/*
 *
 *
 *
 *
 *TODO rewrite
 *
 *
 get min length
 take first word
 peek one letter
 make sure it is common in all words
 if true > add to result prefix, go check next char
 if false > return current result prefix

 if all letters chekcked(min length)
 return prefix
 --|
  tele
  telephone
  tell
  temeria


*/

#include <unordered_map>
#include <sstream>

string solve(const std::vector<std::string>  &strs)
{    
    // get min length

    int min_len = std::min_element(strs.begin(), strs.end(), [](const string &left, const string &right) -> bool{
        return left.length() < right.length();
    })->length();

    std::string res;
    char pref_char;

    if (min_len == 0) return "";

    for (int i = 0; i < min_len; i++)
    {
        pref_char = strs.at(0).at(i);
        for (auto &str : strs)
        {
            if (str.at(i) != pref_char)
            {
                goto end;
            }
        }
        res += pref_char;
    }
    end:
    return res;
}

int main()
{
    std::cout << solve({"test", "testtest", "test_s", "te"}) << std::endl;
    std::cout << solve({"aaa", "aaa", ""}) << std::endl;
    std::cout << solve({""}) << std::endl;
    std::cout << solve({"a"}) << std::endl;

    return 0;
}
