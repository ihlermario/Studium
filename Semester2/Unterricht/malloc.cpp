#include <iostream>

int z1;

auto main() -> int {
  int num_of_elements = 5;
  int *mal_ptr = new int[num_of_elements];

  std::cout << "\n\033[31m=====================================\033[0m\n"
            << std::endl;
  std::cout << "Mahlzeit, schreib mal ne Zahl rein\n" << std::endl;
  scanf("%d", &z1);

  mal_ptr[0] = z1;

  for (int i = 1; i < num_of_elements; i++) {
    printf("Noch eine:\n");
    scanf("%d", &z1);
    mal_ptr[i] = z1;
  }
  std::cout << "\033[31m=====================================\033[0m\n"
            << std::endl;
  std::cout << "\033[31m=====================================\033[0m\n"
            << std::endl;
  std::cout << "\033[33mSooooooo, deine Zahlen, falls se nimmer weisch, "
               "sind:\033[0m\n"
            << std::endl;

  for (int i = 0; i < num_of_elements; i++) {
    std::cout << mal_ptr[i] << std::endl;
  }
  std::cout << "\033[31m=====================================\033[0m\n"
            << std::endl;
  delete[] mal_ptr;
}