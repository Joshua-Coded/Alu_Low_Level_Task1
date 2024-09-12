Developer: Joshua Alana

## C Programming Tasks

This project contains two C programs designed to demonstrate proficiency in applying loops, control flows, and conditional statements. The tasks include a Word Guessing Game and a Number Counter program.


### Task 1: Word Guessing Game

#### Description
The Word Guessing Game allows a player to guess the letters of a randomly selected word from a predefined list. The player is given 6 attempts to guess the word correctly, and with each correct guess, the program reveals the positions of the letters in the word.

#### Game Rules
1. The computer selects a word randomly from a predefined list of words.
2. The word is hidden, and underscores (`_`) represent each letter in the word.
3. The player guesses letters one at a time:
    - If the letter is correct, the computer reveals its position(s) in the word.
    - If the letter is incorrect, the computer notifies the player and deducts an attempt.
4. The player has 6 incorrect guesses before the game ends.
5. The player wins if they guess all letters before running out of attempts, or they lose if they exceed 6 incorrect guesses.

#### How to Run
1. Compile the program using a C compiler:
    ```bash
    gcc -o word_guessing_game word_guessing_game.c
    ```
2. Run the program:
    ```bash
    ./word_guessing_game
    ```

#### Example Gameplay
```
Word: _ _ _ _ _ 
Attempts remaining: 6
Guess a letter: a
Good guess!

Word: a _ _ _ _
Attempts remaining: 6
Guess a letter: z
Wrong guess!

...
Congratulations! You've guessed the word: apple
```

### Task 2: Number Counter

#### Description
The Number Counter program counts the number of digits in a user-entered number and checks if the number of digits is odd or even. The user must input a number between 10 and 9999999 (2 to 7 digits).

#### Program Logic
1. The user inputs a number with 2 to 7 digits.
2. The program counts how many digits are in the number.
3. The program determines whether the number of digits is odd or even and displays the result.

#### How to Run
1. Compile the program using a C compiler:
    ```bash
    gcc -o number_counter number_counter.c
    ```
2. Run the program:
    ```bash
    ./number_counter
    ```

#### Example Output
```
Enter a number between 10 and 9999999: 234
The number 234 has 3 digits.
The number of digits is odd.
```

### Prerequisites
- A C compiler (e.g., GCC)

### Compiling and Running
1. To compile each program, use the following commands:
    ```bash
    gcc -o word_guessing_game word_guessing_game.c
    gcc -o number_counter number_counter.c
    ```
2. To run the compiled programs, use:
    ```bash
    ./word_guessing_game
    ./number_counter
    ```

### File Structure
- `word_guessing_game.c` - Source code for the Word Guessing Game.
- `number_counter.c` - Source code for the Number Counter.

### Contributing
Feel free to fork the repository and submit pull requests for improvements such as:
- Adding more words to the guessing game.
- Implementing additional features like scoring or a countdown timer.
- Enhancing input validation for both programs.

### License
This project is open-source and available under the MIT License.


