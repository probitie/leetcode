#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <sstream>
using namespace std;
/**/

struct ListNode {
    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


ListNode* solve(ListNode* list1, ListNode* list2) {

   ListNode *result = new ListNode();
   ListNode *cur_result = result;

   if (list1 == nullptr && list2 == nullptr)
   {
       delete result;
       return nullptr;
   }

   while(list1 != nullptr || list2 != nullptr)
   {
       if (list1 != nullptr && list2 != nullptr)
       {
           if (list1->val < list2->val)
           {
               cur_result->next = new ListNode(list1->val);
               cur_result = cur_result->next;
               list1 = list1->next;
           }
           else
           {
               cur_result->next = new ListNode(list2->val);
               cur_result = cur_result->next;
               list2 = list2->next;
           }
       }
       else if (list1 != nullptr)
       {
           cur_result->next = new ListNode(list1->val);
           cur_result = cur_result->next;
           list1 = list1->next;
       }
       else if (list2 != nullptr)
       {
           cur_result->next = new ListNode(list2->val);
           cur_result = cur_result->next;
           list2 = list2->next;
       }

   }

   return result->next;  // todo return next element as first is initialized above
}

int main()
{
    std::cout << std::boolalpha;

    ListNode l13{3, nullptr};
    ListNode l12{2, &l13};
    ListNode l11{1, &l12};
    ListNode *n = nullptr;
    //solve(&l11, &l11);
    //solve(&l11, &l12);
    //solve(&l13, &l11);
    solve(n, &l13);
    //solve(n, n);



    return 0;
}
