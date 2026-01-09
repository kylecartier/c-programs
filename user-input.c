// Header Files

#include <stdio.h>   // For standard input / output functions to function
#include <string.h>  // For manipulating strings

// Main function

int main()

{

    // Make a variable with a fixed length of 40 characters

    char user_input[40] = "";

    // Prompt the user for intput

    printf("Enter user input: ");

    // Read the user's line of input

    fgets(user_input, sizeof(user_input), stdin);

    // Eliminates the extra line for when the user presses the enter key

    user_input[strlen(user_input) - 1] = '\0';   

    // Print the user's input 

    printf("%s", user_input);

    // This indicates that the program has run sucessfully.

    return 0;

}

// End of Code

// -------------------------------------------------------------------------------------------------------------------------------------------------------

// Additional information for Windows and macOS

// Windows:
// Install gcc on your Linux distribution if needed via Terminal: sudo apt / dnf install gcc -y (pacman -S gcc -y for Arch based distributions)
// Make an executable on Linux for Windows via gcc utility: x86_64-w64-mingw32-gcc user-input.c

// macOS:
// Make an executable for macOS after downloading it to your Mac via Terminal: gcc user-input.c -o user-input
// Make that file executable on macOS via Terminal if it is not already: chmod +x user-input