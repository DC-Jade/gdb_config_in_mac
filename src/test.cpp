#include  <stdio.h>
#include <vector>

using std::vector;
std::vector<int> iv{1, 2, 3, 4, 5};

int main() {
  for (int i = 0; i < iv.size(); ++i) {
    printf("%d\t", iv.at(i));
  }
  printf("\nhello world\n");
}