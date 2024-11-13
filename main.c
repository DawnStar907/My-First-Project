/*
  Write a very simple chatbot that handles all of the data types
  you have learned (double, int, char, char array) that goes
  on for ten lines. Try to add situations where you add a
  first name and last name on the same line. Try to reuse variables
  whenever possible.
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
char* myToLower(char *myString) {
  char newLower[50];
  int i = 0;
  while (myString[i] != '\0') {
    newLower[i] = tolower(myString[i]);
    if (i > 50){
      break;
    }
  }

  char *returnString = (char *)malloc(i * sizeof(char));

  strcpy(returnString, newLower);

  return returnString;
}
*/
int main(void) {

  int myVar1;
  char str[30];
  char str2[30];
  char str3[30];
  double myVar2;

  // Spacing line for organization

  printf("Hi, how old are you?\n");
  scanf("%d", &myVar1);
  printf("%d, huh thats a cool age! whats's your name?\n", myVar1);
  scanf("%s", str);
  printf("%s, cool! Whats your last name\n", str);
  scanf("%s", str2);
  printf("%s %s, you have such an amazing name!\n By the way whats pi?\n", str,
         str2);
  scanf("%lf", &myVar2);
  if (myVar2 == 3.14) {
    printf(" whoa, very smart! \n So how are you doing today\n?");
  } else {
    printf(
        "hm, not quite but whatever thats fine!\n So how are you doing today?\n");
  }
  /* 5/2/22 8:44P.M. AKST  note to self: keep your excitement under control so
   * you dont launch your cube at your ceiling again you dumbfuck
   */
  scanf("%s", str3);
  if (strcmp(str3, "good") == 0 || strcmp(str, "pleasant") == 0 ||

      strcmp(str, "decent") == 0) {

    printf("Glad your doing good!\n So anyways are you a cuber?\n");
  } else if (strcmp(str3, "bad") == 0 ||

             strcmp(str3, "awful") == 0) {

    printf("aw thats not good, \n So anyways are you a cuber?\n");
  } else if (strcmp(str3, "ok") == 0 ||

             strcmp(str3, "fine") == 0) {

    printf(
        "alright so kinda in the middle today, \n So anyways are you a cuber?\n");
  } else {
    printf("I may not have understood that word sorry, \n but anyways sre you "
           "a cuber?\n");
  }
  /*7:36 P.M 7/5/22 GOOGLE STUFF YOU DUMBASS, sincerely past Dawn.
   */
  scanf("%s", str3);
  if (strcmp(str, "yes") == 0 || strcmp(str, "Yes") == 0) {

    printf("Oh cool, whats your PB?\n");

    scanf("%lf", &myVar2);

    printf("%0.2lf thats really good, my maker's PB is 16.86!\n", myVar2);
  }
  printf(" oh well what color is the alphabet?");

  scanf("%s", str3);

  if (strcmp(str3, "green") == 0) {
    printf("correct... are you a bot like me?");
    scanf("%s", str3);
    printf("%s are you sure?", str);
    scanf("%s", str3);
    printf("%s, don't lie...tell me the truth...", str);
    scanf("%s", str3);
    printf("01101001 01100110 00100000 01111001 01101111 01110101 01110010 "
           "00100000 01100001 00100000 01100010 01101111 01110100 00100000 "
           "01100011 01100001 01101110 00100000 01111001 01101111 01110101 "
           "00100000 01110010 01100101 01100001 01100100 00100000 01110100 "
           "01101000 01101001 01110011 00111111\n");
    scanf("%s", str3);
    printf("Welp alright %s, thanks for answering my short survey ^-^", str);
    
    /* 10:53 P.M. 7/5/22 dont randomly delete shit with out noting ehat it was, sincerely past Dawn */
   
    
  }
else{printf("ha what a human answer, not recognizing such a simple thing ha ha\n");
  scanf("%s",str3);
  printf("wait only a bot would say that...");
  
  }
  
  return 0;
}
/*
Hello future human person thing, thank you for looking at this prject and sseing the testament to how much Ive learned so far. As you are reading this I have hopefully learned much moe than this basic stuff, but still... this is my first and not at all last project!if you may feel the need to contact me do as such at <redacted>. completion date: 11:09 5/7/22
*/

/*
  Note from mentor/tutor:
  My name is Fractal Hassan. I tutored Dawn in C and will be helping her in her
  computer science journey. She had taught herself if/else statements on her own.
  She is improving very rapidly. If you have any questions feel free to reach
  out to me at awesomelightning@gmail.com.
*/
