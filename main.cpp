#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stack>

using namespace std;

/*

*/

#include <unordered_map>
#include <sstream>


std::unordered_map<char, char> pairs
{
    {'(', ')'},
    {'{', '}'},
    {'[', ']'}
};

bool is_pair(char left_parenthes, char right_parenthes)
{

    // if map has this key and map[key].second == right_parenthes   ===> return true else return false

    return pairs.find(left_parenthes) != pairs.end() && pairs[left_parenthes] == right_parenthes;

}

bool solve(const std::string  &str)
{    
    std::stack<char> stack;

    for(char ch: str)
    {
        if (stack.size()>0 && is_pair(stack.top(), ch))
            stack.pop();
        else
            stack.push(ch);
    }
    return stack.size() == 0;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << (solve("()[]{}") == true) << std::endl;
    std::cout << (solve("()]{}") == false) << std::endl;
    std::cout << (solve("()[]}") == false) << std::endl;
    std::cout << (solve("()") == true) << std::endl;
    std::cout << (solve("(") == false) << std::endl;
    std::cout << (solve("") == true) << std::endl;




    return 0;
}
