#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define N 16
void startGame();
void mainMenu();
void instructions();
void exitGame();

int main() {
	printf("DotFleet");
	mainMenu();
	return 0;
}




void startGame() {
	int choice;
	int arr1[N] = { 0 };
	for (int i = 0; i < N; i++) {
		arr1[i] = i;
	}

	char arr2[N] = {' '};
	for (int i = 0; i < N; i++) {
		arr2[i] = ' ';
	}
	int n1 = rand() % N;
	int n2 = rand() % N;
	while (n2 == n1) n2 = rand() % N;
	int n3 = rand() % N;
	while (n3 == n1 || n3 == n2) n3 = rand() % N;
	arr2[n1] = arr2[n2] = arr2[n3] = 'X';
	
	int counter = 0;
	int left = 3;
	
	while (1) {
		
		
		for (int i = 0; i < N; i++) {
			if (i % (int)sqrt(N) == 0) printf("\n");
			if (arr1[i] != i) {
				printf("%5c", arr2[i]);
				continue;
			}
			printf("%5d", arr1[i]);
		}
		printf("\n\n GUESSES: %d    LEFT: %d \n\n", counter , left);

		scanf("%d", &choice);
		arr1[choice]++;
		counter++;
		if (arr2[choice] == 'X') left--;
		if (!left) break;
	}

	printf("***WELL DONE!*** \n you guessed %d times \n\n", counter);
	printf("1. PLAY AGAIN \n");
	printf("2. MAIN MENU \n\n");
	scanf("%d", &choice);
	if (choice == 1) startGame();
	if (choice == 2) mainMenu();
}

void mainMenu(){
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
	printf("The game board has %d cells numbered from 0 to %d.\n" , N , N - 1);
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
