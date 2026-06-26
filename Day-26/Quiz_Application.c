#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    printf("\n1. What is the National animal of India?\n");
    printf("1. Cheetah\n2. Tiger\n3. Lion\n4. Dog\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 2)
    {
        score++;
    }
    printf("\n2. who is the God of Cricket?\n");
    printf("1. Rohit Sharma\n2. Virat Kohli\n3. Sachin Tendulkar\n4. MS Dhoni\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 3)
    {
        score++;
    }
    printf("\n3. How many planets are there in the Solar System?\n");
    printf("1. 5\n2. 6\n3. 8\n4. 7\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 3)
    {
        score++;
    }
    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/3\n", score);

    if (score == 3)
    {
        printf("Excellent!\n");
    }    
    else if (score == 2)
    {
        printf("Very Good!\n");
    }    
    else if (score == 1)
    {
        printf("Good! Keep Practicing.\n");
    }    
    else
    {
        printf("Better Luck Next Time!\n");
    }
    return 0;
}