
#define NOMINMAX
#include <windows.h>
#include <iostream>
#include <algorithm>


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
  class Solution {
  public:
 
      int pairSum(ListNode* head) {

          ListNode* slow = head;
          ListNode* fast = head;

          while (fast && fast->next) {
              slow = slow->next;
              fast = fast->next->next;
          }

          ListNode* prev = nullptr;
          while (slow) {
              ListNode* temp = slow->next;
              slow->next = prev;
              prev = slow;
              slow = temp;
          }

          ListNode* reverseCurrent = prev;
          ListNode* current = head;
          int maxSum = 0;
          while (reverseCurrent) {
              maxSum = std::max(maxSum, current->val + reverseCurrent->val);
              reverseCurrent = reverseCurrent->next;
              current = current->next;
          }

          return maxSum;
      }
  };

  // Function to print the linked list
  void printList(ListNode* head) {
      while (head) {
          std::cout << head->val << " -> ";
          head = head->next;
      }
      std::cout << "null" << std::endl;
  }

  int main() {
      // Creating a test linked list: 1 -> 2 -> 3 -> 4 -> 5 -> null
      Solution test;
      ListNode* head = new ListNode(1);
      head->next = new ListNode(2);
      head->next->next = new ListNode(3);
      head->next->next->next = new ListNode(4);
      head->next->next->next->next = new ListNode(5);

      std::cout << "Original List: ";
      printList(head);

      int output = test.pairSum(head);


      return 0;
  }
