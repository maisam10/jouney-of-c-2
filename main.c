#include <stdio.h>

int main(void) {
  
  int passing_marks = 40;
  int perce;
  printf("So you want to know whether u passed or failed ha?");
  printf("What was you percentage = ");
  scanf("%d",&perce);
  if (perce < passing_marks)
    printf("You have failed , better luck next time");
  
  else if(perce>passing_marks)
    printf("You have passed congrats");

  else if(perce == passing_marks)
    printf("oh that was a close call but u passed");

  
  
  
  return 0;
}