#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to clear the screen based on the platform (Windows/Linux)
#ifdef _WIN32
#include <windows.h>
#define clearScreen() system("cls")
#else
#include <unistd.h>
#define clearScreen() system("clear")
#endif

void printWelcomeMessage();
void playGame();
void printGameOver(int attempts);

int main() {
    int choice;

    printWelcomeMessage();

    do {
        printf("1. Start the Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            playGame();
        } else if (choice == 2) {
            printf("\nThank you for playing! Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 2);

    return 0;
}

void printWelcomeMessage() {
    printf("\n********************************************\n");
    printf("         Welcome to the Guess Game!        \n");
    printf("********************************************\n");
    printf("I will pick a number between 1 and 100.\n");
    printf("Your task is to guess the number!\n");
    printf("Good luck!\n");
    printf("\n********************************************\n");
}

void playGame() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1; // Generate random number between 1 and 100

    printf("\nI have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("\033[0;31mToo low! Try again.\033[0m\n"); // Red for too low
        } else if (guess > number) {
            printf("\033[0;34mToo high! Try again.\033[0m\n"); // Blue for too high
        } else {
            printf("\033[0;32mCorrect! You guessed the number in %d attempts.\033[0m\n", attempts); // Green for correct
            printGameOver(attempts);
        }

    } while (guess != number);
}

void printGameOver(int attempts) {
    char playAgain;

    printf("\nWould you like to play again? (Y/N): ");
    scanf(" %c", &playAgain);

    if (playAgain == 'Y' || playAgain == 'y') {
        clearScreen();
        printf("Starting a new game...\n");
        playGame();
    } else {
        printf("\nThanks for playing! See you next time!\n");
    }
}
