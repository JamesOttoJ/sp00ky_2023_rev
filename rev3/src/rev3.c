#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

// DEBUG flag
int DEBUG = 0;
// BUFFER size
int BUFFER_SIZE = 32;
int FLAGSIZE = 64;

// Signal handler for SIGSEGV
void catch_overflow(int signal){
    fflush(stdout);
    fprintf(stderr, "\n");
    fflush(stderr);
    char buf[FLAGSIZE];
  FILE *f = fopen("flag.txt","r");
  if (f == NULL) {
    fprintf(stderr, "%s %s", "Please create 'flag.txt' in this directory with your",
                    "own debugging flag.\n");
    exit(0);
  }

  fgets(buf,FLAGSIZE,f);
  fprintf(stderr, "%s\n", buf);
    exit(1);
}

// Main function
int main(int argc, char* argv){
    // Print welcome message
    printf("Welcome to the password checker.\n");
    // Set signal handler
    signal(SIGSEGV, catch_overflow);
    // Buffer for password
    char buffer[BUFFER_SIZE];

    // Get password from user
    printf("Enter password: ");
    // Read password from stdin
    scanf("%s", buffer);
    
    // Print entered password if DEBUG is set
    if (DEBUG){
        printf("Entered password: %s\n", buffer);
    }
    // Check if password is correct
    if (strcmp(buffer, "password") == 0){
        // Print flag if correct
        printf("Correct password!\n");
    } else {
        // Print error message if incorrect
        printf("Incorrect password!\n");
    }
    return 0;
}