#include <stdio.h>

  int compareStrings(char str1[], char str2[]) {
  int i = 0;

  while (str1[i] && str2[i]) {
  if (str1[i]-str2[i]==0) {
  return 1;
  }
 else {
 return 0;
 }

 i++;
 }
 }
 int main() {
 char str1[100], str2[100]; // array size: 100
 int result;
 printf("Enter first string: ");
 scanf("%s", &str1);

 printf("Enter second string: ");
 scanf("%s", &str2);

 result = compareStrings(str1, str2);

 if (result == 0) { printf("Both strings are different.\n");
 }
 else {
 printf("Both strings are equal.\n");
}
return 0;
}
