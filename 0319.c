#include <stdio.h>

int main(void) {

  int a, b, c, d, e, f;
  float x, y;

  printf("a, b, c 입력:");
  scanf("%d, %d, %d", &a, &b, &c);

  printf("d, e, f 입력:");
  scanf("%d, %d, %d", &d, &e, &f);

  printf("방정식 : \n%dx+%dy+%d\n%dx+%dy+%d\n", a, b, c, d, e, f);

  y = (float)(c*d/a - f)/(-b*d/a +e);
  x = -b*y/a - (float)c/a;

  printf("<%.2f, %.2f>", x, y);

  return 0;
}
