#include <iostream>
#include "functions.h"

// Рекурсивна функція додавання елемента в кінець списку
void append(Node*& head, int val) {
  if (!head) {
    head = new Node(val);
    return;
  }
  append(head->next, val);
}

// Рекурсивна функція друку списку
void printList(Node* head) {
  if (!head) {
    std::cout << std::endl;
    return;
  }
  std::cout << head->data << " ";
  printList(head->next);
}

// Рекурсивна функція видалення всіх елементів зі значенням target
Node* removeElements(Node* head, int target) {
  if (!head) return nullptr; // Base case: list is empty

  // Recursively process the next element
  head->next = removeElements(head->next, target);

  // If the current element has the target value, remove it
  if (head->data == target) {
    Node* temp = head->next;
    delete head;
    return temp;
  }

  return head; // Return the updated list
}