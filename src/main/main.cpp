#include "../hash_table/hash_table.hpp"
#include "../linked_list/linked_list.hpp"

int main(int argc, char **argv) {
    ListNode* l1 = new ListNode[3];
    l1[0].val = 2;
    l1[0].next = l1+1;
    l1[1].val = 4;
    l1[1].next = l1+2;
    l1[2].val = 3;
    
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    
    ListNode* result = addTwoNumbers1(l1, l2);
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}