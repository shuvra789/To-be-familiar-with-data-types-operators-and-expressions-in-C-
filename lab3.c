//Write a program to take input of ID and marks obtained by a student in 5 subjects each have its 100 full marks and display the ID with percentage score secured.
#include<stdio.h>
int main(void)
{
    int id, mark1, mark2, mark3, mark4, mark5;
    double mark_sum, score;

    printf("Enter ID>");
    scanf("%d",&id);

    printf("Enter marks for 5 subjects>\n");
    scanf("%d%d%d%d%d", &mark1, &mark2, &mark3, &mark4, &mark5);

    mark_sum = (double) (mark1 + mark2 + mark3 + mark4 + mark5);
    score = (mark_sum / 500) * 100;

    printf("ID: %d\n", id);

    printf("Percentage Score Secured: %2.2f%%\n", score);

    return 0;
      }
