#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("================================\n");
    printf("       C LANGUAGE QUIZ GAME\n");
    printf("================================\n");

    // Question 1
    printf("\n1. Which extension is used for C files?\n");
    printf("A. .cpp\n");
    printf("B. .c\n");
    printf("C. .py\n");
    printf("D. .java\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B.\n");
    }

    // Question 2
    printf("\n2. Which function displays output in C?\n");
    printf("A. scanf()\n");
    printf("B. print()\n");
    printf("C. printf()\n");
    printf("D. display()\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n");
    }

    // Question 3
    printf("\n3. Which symbol ends a C statement?\n");
    printf("A. ;\n");
    printf("B. :\n");
    printf("C. .\n");
    printf("D. ,\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is A.\n");
    }

    // Question 4
    printf("\n4. Which data type stores whole numbers?\n");
    printf("A. float\n");
    printf("B. char\n");
    printf("C. int\n");
    printf("D. double\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n");
    }

    // Question 5
    printf("\n5. Which header file is used for printf()?\n");
    printf("A. math.h\n");
    printf("B. stdio.h\n");
    printf("C. string.h\n");
    printf("D. conio.h\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B.\n");
    }

    printf("\n================================\n");
    printf("         QUIZ RESULT\n");
    printf("================================\n");

    printf("Your score: %d out of 5\n", score);

    if (score == 5) {
        printf("Excellent! All answers are correct!\n");
    } else if (score >= 3) {
        printf("Good job! Keep practicing.\n");
    } else {
        printf("Keep learning and try again!\n");
    }

    return 0;
}
