# Rock-Paper-Scissors Game

This is a simple command-line Rock-Paper-Scissors game written in C++. The player competes against the computer in multiple rounds, and the program keeps track of the total score. This project demonstrates the use of basic programming concepts such as functions, conditionals, loops, and random number generation in C++.

## How to Play

1. **Enter your name**:
   - The program will prompt you to enter your name to personalize the game.

2. **Play the game**:
   - Select your move: `r` for Rock, `p` for Paper, or `s` for Scissors.
   - The computer will randomly select its move.
   - The result of the round (win, loss, or draw) will be displayed, and your total score will be updated.

3. **Exit the game**:
   - Choose the `Exit` option from the menu to end the game.

## Features

- User-friendly menu to navigate through the game.
- Randomized computer moves for fairness.
- Real-time score tracking.
- Input validation to ensure correct player moves.

## Code Overview

The program consists of the following functions:

- **`main()`**:
  Handles the main game loop, displays the menu, and processes user choices.

- **`enterName()`**:
  Prompts the user to enter their name.

- **`playGame(string name)`**:
  Manages a single round of the game and updates the score based on the result.

- **`playerMove(string name)`**:
  Accepts and validates the player's move.

- **`computerMove()`**:
  Generates a random move for the computer.

- **`gameResult(char pMove, char cMove, string name)`**:
  Determines the outcome of the game round and displays the result.

## Example Output

```
1) Enter name
2) Play Game
3) Exit
Enter Choice (1-3): 1
Enter player name: Alex
Name Entered: Alex

1) Enter name
2) Play Game
3) Exit
Enter Choice (1-3): 2
Enter your move (r, p, s): r
Alex won! Computer chose Scissors.
Current Score: 1

1) Enter name
2) Play Game
3) Exit
Enter Choice (1-3): 3
Goodbye!
```

## Requirements

- A C++ compiler (e.g., GCC, Clang, or Visual Studio).
- C++11 or later.
