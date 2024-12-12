#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string enterName();
int playGame(string name);
char playerMove(string name);
char computerMove();
int gameResult(char pMove, char cMove, string name);

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    int choice, totalScore = 0;
    string name;

    do {
        cout << "1) Enter name" << endl;
        cout << "2) Play Game" << endl;
        cout << "3) Exit" << endl;
        cout << "Enter Choice (1-3): ";

        cin >> choice;

        switch (choice) {
        case 1:
            // Enter Name Function
            name = enterName();
            cout << "Name Entered: " << name << endl;
            break;

        case 2:
            // Ensure the user has entered a name
            if (name.empty()) {
                cout << "Please enter your name first!" << endl;
            }
            else {
                totalScore += playGame(name); // Update totalScore
                cout << "Current Score: " << totalScore << endl; // Display current score
            }
            break;

        case 3:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid Choice. Please select 1, 2, or 3." << endl;
            break;
        }

    } while (choice != 3);

    return 0;
}

/* Purpose: Ask the user for a name and return it
* Parameters: none
* Return: string with the name
*/
string enterName() {
    string name;
    cout << "Enter player name: ";
    cin >> name;
    return name;
}

/* Purpose to allow playing against the computer
* Parameter: string name
* Return: Score (1: win, -1: loss, 0: draw)
*/
int playGame(string name) {
    int score;
    char pMove, cMove;

    // Player Moves
    pMove = playerMove(name);

    // Computer Moves
    cMove = computerMove();

    // Game Result
    score = gameResult(pMove, cMove, name); // Pass name to gameResult
    return score;
}

/* Purpose: Ask the user for the move (r: rock, p: paper, s: scissors)
* Parameters: string name
* Return: char with the move
*/
char playerMove(string name) {
    char move;
    cout << "Enter your move (r, p, s): ";
    cin >> move;

    while (move != 'r' && move != 'p' && move != 's') {
        cout << "Invalid move. Try again." << endl;
        cout << "Enter your move (r, p, s): ";
        cin >> move;
    }

    return move;
}

/* Purpose: Obtain a random move from the computer (0: rock, 1: paper, 2: scissors) and return the initial of the move
* Parameters: none
* Return: char with the move
*/
char computerMove() {
    int moveNumber = rand() % 3;
    if (moveNumber == 0)
        return 'r';
    else if (moveNumber == 1)
        return 'p';
    else
        return 's';
}

/* Purpose: Obtain the result of the game (1: player win, -1: computer win, 0: draw)
* Parameters: char pMove, char cMove, string name
* Return: The Score
*/
int gameResult(char pMove, char cMove, string name) {
    int score;
    if (pMove == cMove) {
        score = 0;
        cout << "It is a draw!" << endl;
    }
    else if (pMove == 'r' && cMove == 'p') {
        score = -1;
        cout << name << " lost! Computer chose Paper." << endl;
    }
    else if (pMove == 'r' && cMove == 's') {
        score = 1;
        cout << name << " won! Computer chose Scissors." << endl;
    }
    else if (pMove == 'p' && cMove == 'r') {
        score = 1;
        cout << name << " won! Computer chose Rock." << endl;
    }
    else if (pMove == 'p' && cMove == 's') {
        score = -1;
        cout << name << " lost! Computer chose Scissors." << endl;
    }
    else if (pMove == 's' && cMove == 'r') {
        score = -1;
        cout << name << " lost! Computer chose Rock." << endl;
    }
    else if (pMove == 's' && cMove == 'p') {
        score = 1;
        cout << name << " won! Computer chose Paper." << endl;
    }

    return score;
}
