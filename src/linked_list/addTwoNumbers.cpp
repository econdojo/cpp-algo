#include "linked_list.hpp"

/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list. You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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
    
    ListNode* result = addTwoNumbers(l1, l2);
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}
*/

// Method 1: time O(n), space O(1)

ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0);
    ListNode* tail = dummyHead;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int digit1 = (l1 != nullptr) ? l1->val : 0;
        int digit2 = (l2 != nullptr) ? l2->val : 0;

        int sum = digit1 + digit2 + carry;
        int digit = sum % 10;
        carry = sum / 10;

        ListNode* newNode = new ListNode(digit);
        tail->next = newNode;
        tail = tail->next;

        l1 = (l1 != nullptr) ? l1->next : nullptr;
        l2 = (l2 != nullptr) ? l2->next : nullptr;
    }

    ListNode* result = dummyHead->next;
    delete dummyHead;
    return result;
}