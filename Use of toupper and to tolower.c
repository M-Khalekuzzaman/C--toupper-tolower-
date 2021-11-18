#include<stdio.h>
int main()
{
        char ch1,ch2,lower,upper;

        printf("Enter an one capital letter:");
        scanf("%c",&ch1);

        lower = tolower(ch1);
        printf("The Small letter is : %c\n",lower);

        ch2 = lower;

      upper = toupper(ch2);
      printf("The capital letter is : %c\n",upper);

        getch();



}
