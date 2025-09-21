#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#define N 4
void startGame();
void mainMenu();
void instructions();
void exitGame();
void getTargets(int targets[3][2]);
int inTargets(int targets[3][2], int choice);
int main() {
	printf("DotFleet");
	mainMenu();
	return 0;
}




void startGame() {
	int choice;
	int board[N][N] = {0};
	int targets[3][2];
	getTargets(targets);

	int counter = 0;
	int left = 3;

	while (1) {


		for(int row = 0; row < N; row++){
			printf("\n");
			for (int colum = 0; colum < N; colum++) {
				if (board[row][colum] == 0) printf("  %d,%d", row, colum);
				if (board[row][colum] == 1) printf("     ");
				if (board[row][colum] == 2) printf("    X");
			}
		}
		printf("\n\n GUESSES: %d    LEFT: %d \n\n", counter, left);

		scanf("%d", &choice);
		counter++;

		if (inTargets(targets, choice)) {
			left--;
			board[choice / 10][choice % 10] = 2;
		}else{
			board[choice / 10][choice % 10] = 1;
		}

		if (!left) break;
	}

	printf("***WELL DONE!*** \n you guessed %d times \n\n", counter);
	printf("1. PLAY AGAIN \n");
	printf("2. MAIN MENU \n\n");
	scanf("%d", &choice);
	if (choice == 1) startGame();
	if (choice == 2) mainMenu();
}

void mainMenu() {
	int choice = 0;

	printf("\n\n1. START GAME \n");
	printf("2. INSTRUCTIONS \n");
	printf("3. EXIT \n\n");

	scanf("%d", &choice);
	if (choice == 1) startGame();
	if (choice == 2) instructions();
	if (choice == 3) exitGame();


}

void instructions() {

	printf("\nGame Instructions:\n");
	printf("The game board has %d cells numbered from 0 to %d.\n", N, N - 1);
	printf("There are 3 hidden 'X' marks placed randomly on the board.\n");
	printf("Your goal is to guess the positions of the 'X' marks by entering numbers.\n");
	printf("If you guess correctly, the 'X' will be revealed at that position.\n");
	printf("If you guess an empty cell, it will be marked as empty.\n");
	printf("The game continues until all three 'X's are found.\n");
	printf("Try to guess in as few attempts as possible to get a better score.\n");
	printf("Good luck!\n\n");

	int choice = 0;
	while (1) {
		printf("1. BACK TO MAIN MENU \n");
		scanf("%d", &choice);
		if (choice == 1) mainMenu();
	}
}


void exitGame() {
	printf("\n GOODBYE! \n");
	return;
}

void getTargets(int targets[3][2]) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 3; i++) {
		targets[i][0] = rand() % N;
		targets[i][1] = rand() % N;
	}
}


    int inTargets(int targets[3][2], int choice) {
        int row = choice / 10;
        int col = choice % 10;
        for (int i = 0; i < 3; i++) {
            if (targets[i][0] == row && targets[i][1] == col) {
                return 1;
            }
        }
        return 0;
    }
