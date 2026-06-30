//mini project-  Maze Game ek puzzle-based game hota hai jisme player ko ek starting point (`S`) se end point (`E`) tak pahunchna hota hai.
// Maze mein kuch raste khule hote hain aur kuch jagah deewaron (`#`) se blocked hoti hain. Is program mein maze ko 2D array ke roop mein store kiya gaya hai aur Recursive Backtracking technique ka use karke solution dhoonda jata hai. 
//Program har possible direction (up, down, left, right) mein move karne ki koshish karta hai aur galat raste par pahunchne par wapas aakar doosra rasta try karta hai. Jab end point mil jata hai, to successful path ko dots (`.`) ke saath mark karke display kiya jata hai. 
//Backtracking is an algorithmic technique that uses recursion to find solutions by exploring choices incrementally and undoing them ("backtracking") if they lead to a dead end. Think of it as a methodical system of trial and error. Instead of guessing blindly, the program builds a solution path step-by-step. If it hits a dead end or breaks a rule, it steps backward to the last valid point, changes its choice, and tries a different path.
#include <stdio.h>

char maze[7][7] = {
    {'#', '#', '#', '#', '#', '#', '#'},
    {'S', ' ', ' ', '#', ' ', ' ', '#'},
    {'#', '#', ' ', '#', ' ', '#', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', '#', '#', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', 'E', '#'},
    {'#', '#', '#', '#', '#', '#', '#'}
};

void printMaze() {
    int i, j;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int solve(int r, int c) {

    // out of bounds check
    if (r < 0 || r >= 7 || c < 0 || c >= 7)
        return 0;

    // cant go through walls or places we already been
    if (maze[r][c] == '#' || maze[r][c] == '.')
        return 0;

    // reached the end
    if (maze[r][c] == 'E')
        return 1;

    // mark current cell so we dont visit again
    if (maze[r][c] != 'S')
        maze[r][c] = '.';

    // try moving in all 4 directions
    if (solve(r+1, c)) return 1;   // down
    if (solve(r-1, c)) return 1;   // up
    if (solve(r, c+1)) return 1;   // right
    if (solve(r, c-1)) return 1;   // left

    // if nothing worked, undo the mark and go back
    if (maze[r][c] != 'S')
        maze[r][c] = ' ';

    return 0;
}

int main() {

    printf("Maze before solving:\n");
    printMaze();

    int result = solve(1, 0);

    if (result == 1) {
        printf("Path found! (dots show the way)\n");
        printMaze();
    } else {
        printf("No path found\n");
    }

    return 0;
}