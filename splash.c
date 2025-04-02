#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Include this for strcspn()
#include <time.h>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR "cls"
    #define SLEEP(ms) Sleep(ms)
#else
    #include <unistd.h>
    #define CLEAR "clear"
    #define SLEEP(ms) usleep((ms) * 1000)
#endif

void display_splash_screen(const char *name, const char *date) {
    system(CLEAR);  // Clear screen before displaying splash
    printf("\n************************************************\n");
    printf(" Magrathea, where a shining planet is created in\n");
    printf(" a wasteland with no grass, a place where unseen\n");
    printf(" potential is discovered and gems are polished\n");
    printf(" by the hands of experts. Welcome to Magrathea.\n");
    printf("\n [Date]: %s\n", date);
    printf(" [User]: %s\n", name);
    printf("************************************************\n");
}

int main() {
    char name[50], date[11];

    printf("Please enter the current date in 'yyyy-mm-dd' format: ");
    fgets(date, sizeof(date), stdin);
    
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline from fgets()
    date[strcspn(date, "\n")] = '\0';
    name[strcspn(name, "\n")] = '\0';

    printf("**The input has been processed successfully**\n");

    SLEEP(3000); // Wait for 3 seconds before clearing the screen
    display_splash_screen(name, date);

    return 0;
}
