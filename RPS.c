#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    int playerChoice, computerChoice;
    char playAgain;
    
    // Seed the random number generator
    srand(time(NULL));
    
    do {
        printf("Welcome to Rock-Paper-Scissors game!\n");
        printf("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
        scanf("%d", &playerChoice);
        
        if (playerChoice < 1 || playerChoice > 3) {
            printf("Invalid choice! Please choose a number between 1 and 3.\n");
            continue;
        }
        
        computerChoice = generateRandomNumber(1, 3);
        
        printf("\n");
        printf("You chose: ");
        switch (playerChoice) {
            case 1:
                printf("Rock\n");
                break;
            case 2:
                printf("Paper\n");
                break;
            case 3:
                printf("Scissors\n");
                break;
        }
        
        printf("Computer chose: ");
        switch (computerChoice) {
            case 1:
                printf("Rock\n");
                break;
            case 2:
                printf("Paper\n");
                break;
            case 3:
                printf("Scissors\n");
                break;
        }
        
        if (playerChoice == computerChoice) {
            printf("It's a draw!\n");
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            printf("You win!\n");
        } else {
            printf("Computer wins!\n");
        }
        
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);  // Note the space before %c to skip any leading whitespace
        
    } while (playAgain == 'y' || playAgain == 'Y');
    
    return 0;
}
