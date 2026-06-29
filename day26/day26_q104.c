// Write a program to Create quiz application
#include <stdio.h>

#define MAX_QUESTIONS 5

// Ek question ka data store karne ke liye structure
typedef struct {
    char question[256];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char correctOption;   // Sahi option 'A', 'B', 'C', ya 'D' hoga
} QuizQuestion;

// Ye function ek question poochta hai aur sahi hone par 1, galat hone par 0 return karta hai
int askQuestion(QuizQuestion q) {
    char answer;

    printf("\n%s\n", q.question);
    printf("A. %s\n", q.optionA);
    printf("B. %s\n", q.optionB);
    printf("C. %s\n", q.optionC);
    printf("D. %s\n", q.optionD);
    printf("Enter your choice (A/B/C/D): ");

    // %c se pehle space dene se pichhla newline ignore ho jata hai
    scanf(" %c", &answer);

    // Agar user lowercase letter dale to usse uppercase me convert kar do
    if (answer >= 'a' && answer <= 'z') {
        answer = answer - 'a' + 'A';
    }

    if (answer == q.correctOption) {
        printf("Correct!\n");
        return 1;
    } else {
        printf("Wrong! Correct answer is %c.\n", q.correctOption);
        return 0;
    }
}

int main() {
    QuizQuestion quiz[MAX_QUESTIONS] = {
        {
            "Which language is primarily used for system programming?",
            "Python",
            "C",
            "HTML",
            "SQL",
            'B'
        },
        {
            "Which of the following is a linear data structure?",
            "Binary tree",
            "Graph",
            "Stack",
            "Hash table",
            'C'
        },
        {
            "Which keyword is used to define a constant in C?",
            "constant",
            "final",
            "const",
            "#define",
            'C'
        },
        {
            "Which operator is used to access a pointer's pointed value?",
            "&",
            "*",
            "->",
            ".",
            'B'
        },
        {
            "What is the correct file extension for a C source file?",
            ".java",
            ".cpp",
            ".py",
            ".c",
            'D'
        }
    };

    int i;
    int score = 0;

    printf("===== Welcome to the C Quiz =====\n");
    printf("Total questions: %d\n", MAX_QUESTIONS);
    printf("Each question has one correct answer.\n");

    for (i = 0; i < MAX_QUESTIONS; i++) {
        printf("\nQuestion %d:\n", i + 1);
        score += askQuestion(quiz[i]);
    }

    printf("\n===== Quiz Finished =====\n");
    printf("Your score: %d / %d\n", score, MAX_QUESTIONS);

    double percentage = (score * 100.0) / MAX_QUESTIONS;
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage == 100.0) {
        printf("Excellent! Perfect score.\n");
    } else if (percentage >= 60.0) {
        printf("Good job! You passed.\n");
    } else {
        printf("Keep practicing! You can do better.\n");
    }

    return 0;
}