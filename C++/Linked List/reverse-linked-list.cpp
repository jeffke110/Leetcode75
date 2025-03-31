
#include <iostream>


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
  class Solution {
  public:
      ListNode* reverseList(ListNode* head)
      {

          ListNode* current = head;
          ListNode* prev = nullptr;

          while (current) {
              ListNode* temp = current->next;
              current->next = prev;
              prev = current;
              current = temp;
          }
          return prev;
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

      // Reversing the list
      head = test.reverseList(head);

      std::cout << "Reversed List: ";
      //printList(head);

      return 0;
  }
