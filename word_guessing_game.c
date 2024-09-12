#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// Predefined list of words
const char *words[] = {"apple", "banana", "cherry", "date", "elderberry"};
const int MAX_ATTEMPTS = 6;

// Function to choose a random word
const char* choose_random_word() {
    srand(time(NULL));
    int index = rand() % 5;  // Choose a random index from 0 to 4
    return words[index];
}

// Function to display the current guessed state of the word
void display_word(char* word, int word_len, int* guessed) {
    for (int i = 0; i < word_len; i++) {
        if (guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    const char* word = choose_random_word(); // Get random word
    int word_len = strlen(word);
    int guessed[word_len];  // Array to track guessed letters
    int attempts = 0;
    int correct_guesses = 0;
    char guess;
    
    // Initialize guessed array with 0 (all letters are not guessed)
    for (int i = 0; i < word_len; i++) {
        guessed[i] = 0;
    }
    
    printf("Welcome to the Word Guessing Game!\n");
    
    // Loop until the user has guessed all the letters or used all attempts
    while (attempts < MAX_ATTEMPTS && correct_guesses < word_len) {
        printf("\nWord: ");
        display_word((char*)word, word_len, guessed);
        printf("Attempts remaining: %d\n", MAX_ATTEMPTS - attempts);
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        
        guess = tolower(guess); // Convert guess to lowercase
        
        int found = 0;  // Flag to check if the guessed letter is in the word
        for (int i = 0; i < word_len; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correct_guesses++;
                found = 1;
            }
        }
        
        if (!found) {
            printf("Wrong guess!\n");
            attempts++;
        } else {
            printf("Good guess!\n");
        }
    }
    
    // Check if the user won or lost
    if (correct_guesses == word_len) {
        printf("\nCongratulations! You've guessed the word: %s\n", word);
    } else {
        printf("\nYou've used all attempts! The word was: %s\n", word);
    }
    
    return 0;
}

