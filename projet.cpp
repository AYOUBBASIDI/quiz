#include <stdio.h>
#include <conio.h>

main()
{
int score=0;
int answer;

printf("Welcom to my Quiz\nThe rules are :\nIf the answer is correct you have +2 point\nIf the answer is fault you have -1\n\nAlert:Just write the answer number.\n\n\n");

printf("\nQ1) H2O is the chemical formula for what?");
printf(" \n1- Iron \n2- Water  \n3- Zink  \n4- Gold \n");
scanf("%d", &answer);

if(answer == 2)
{
printf("That's Correct!\n\n\n");
score=score+2;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("nQ2)Will the owner of this quiz continue in YouCode or not??\n");
printf("1-Yes \n2-No \n");
scanf("%d", &answer);

if(answer==1)
{
printf("That's Correct!\n\n\n");
score=score+2;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("Q3) Which of these is not a C keyword ?\n");
printf("1)typedef\n2)signed\n3)entert\n4)break\n");
scanf("%d", &answer);

if(answer==3)
{
printf("That's Correct!\n\n\n");
score=score+2;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("Q4)From which language is the word 'ketchup' derived?  \n");
printf("1)English\n2)Arabic\n3)Chinese\n4)Frensh\n");
scanf("%d", &answer);

if(answer==3)
{
printf("That's Correct!\n\n\n");
score=score+2;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("\nQ5)Which is the country with the biggest population in Europe?\n");
printf("1-Frensh\n2-Russia\n3-Allemagne\n4-Pologne\n");
scanf("%d", &answer);

if(answer==2)
{
printf("That's Correct!\n\n\n");
score=score+2;
}
else
{
printf("Wrong Answer\n\n\n");
score=score-1;
}

printf("\nThank You for taking the Quiz.\n Your Total Score is %d out of 10", score);

if(score<0)
printf("\nYou're an idiot.");
else if (score<5)
printf("\nGood.");
else 
printf("\nYou're a genius.");

getch();

}
