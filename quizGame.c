#include <stdio.h>
#include <ctype.h>  // Include ctype.h for the toupper function

void displayQuestion(char *question, char *options[], char correctOption) {
    printf("\n%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%c) %s\n", 'A' + i, options[i]);
    }
    printf("Your answer: ");
}

int main() {
    char *questions[] = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "Which planet is known as the Red Planet?",
    };

    char *options[][4] = {
        {"Berlin", "Madrid", "Paris", "Lisbon"},
        {"3", "4", "5", "6"},
        {"Earth", "Mars", "Jupiter", "Saturn"},
    };

    char correctOptions[] = {'C', 'B', 'B'};

    int score = 0;
    char answer;

    for (int i = 0; i < 3; i++) {
        displayQuestion(questions[i], options[i], correctOptions[i]);
        scanf(" %c", &answer);
        answer = toupper(answer);  // Convert the answer to uppercase
        if (answer == correctOptions[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n", correctOptions[i]);
        }
    }

    printf("\nYour final score is: %d out of 3\n", score);

    return 0;
}
