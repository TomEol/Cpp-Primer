int main() {
  const int size = 5;
  int a[size] = {1, 2, 3, 4, 5};
  for (int *ptr = a, i = 0; i != size && ptr != a + size; ++i, ++ptr) {
    /* some code */
  }

  // First - created a pointer `ptr` point to the first element of the array `a` and an index `i`.

  // Then the loop will check index and pointer ( if pointer point to the element at one past the last of the array)
  // if these are not true, the loop continues.

  // Every time, the index will increase 1 and the pointer will move to point the next element.

  return 0;
}
