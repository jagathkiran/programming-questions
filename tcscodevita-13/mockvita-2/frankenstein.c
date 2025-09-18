#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n, magical_orb, potion_len;
  // bool exist;
  // char recipe[100][100], potion[100][100];

  // printf("Enter the number recipes : ");
  // scanf("%d", &n);
  // if (n > 100) {
  //   return 1;
  // }
  // printf("Enter the recipes : \n");
  // getchar();

  // for (int i = 0; i < n; i++) {
  //   fgets(recipe[i], 100, stdin);
  //   // printf("%d", strcspn(recipe[i], "\n"));
  //   recipe[i][strcspn(recipe[i], "\n")] = '\0';
  //
  //   potion_len = strcspn(recipe[i], "=");
  //   exist = 0;
  //   // printf("%d", potion_len);
  //   for (int j = 0; j < i; j++) {
  //     if (!strncmp(potion[j], recipe[i], potion_len)) {
  //       exist = 1;
  //       break;
  //     }
  //   }
  //   if (!exist) {
  //     strncpy(potion[i], recipe[i], potion_len);
  //     potion[i][potion_len] = '\0';
  //   }
  // }

  // for (int i = 0; i < n; i++) {
  //   printf("%s \n", recipe[i]);
  // }
  //
  // for (int i = 0; i < n; i++) {
  //   printf("%s \n", potion[i]);
  // }

  n = 4;

  char *recipe[] = {
      "awakening=snakefangs+wolfbane", "veritaserum=snakefangs+awakening",
      "dragontonic=snakefangs+velarin", "dragontonic=awakening+veritaserum"};

  char *potion = {"dragontonic"};

  for (int i = 0; i < n; i++) {
    bool exist = 0;
    potion_len = strcspn(recipe[i], "=");
    if (!strncmp(potion, recipe[i], potion_len)) {
      exist = 1;
    }
  }
}
