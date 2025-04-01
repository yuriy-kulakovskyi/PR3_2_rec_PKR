#include <gtest/gtest.h>

#include "../functions/functions.h"

TEST(LinkedListTest, RemoveSingleOccurrence) {
  Node* head = nullptr;
  append(head, 1);
  append(head, 2);
  append(head, 3);
  append(head, 4);

  head = removeElements(head, 3);

  std::cout << "Результат після видалення 3: ";
  printList(head);  // Друк списку для перевірки
}