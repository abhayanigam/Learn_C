#include <stdio.h>
#include <string.h>

int main() {
  char str1[12] = "Hello";
  char str2[12] = "World";
  char str3[12];

  const char my_name[] = "Imam Sutono";
  const char search = 'S';
  const char my_father[14] = "Samsul Arifin";
  const char needle[7] = "Arifin";

  char *chr, *str;
  int len, cmp;

  // copy str1 into str3
  strcpy(str3, str1);
  printf("strcpy(str3, str1) : %s\n", str3);

  // concatenates str1 and str2
  strcat(str1, str2);
  printf("strcat(str1, str2) : %s\n", str1);

  // total length of str1 after concatenation
  len = strlen(str1);
  printf("strlen(str1) : %d\n", len);

  // compare the string length
  cmp = strcmp(str2, str3);
  printf("strcmp(str2, str3) : %d\n", cmp);

  // search for first occurence of the character search
  chr = strchr(my_name, search);
  printf("strchr(my_name, search) : %s\n", chr);

  // find the first occurence of the substring needle in the my_father
  str = strstr(my_father, needle);
  printf("strstr(my_father, needle) : %s\n", str);

  return 0;
}