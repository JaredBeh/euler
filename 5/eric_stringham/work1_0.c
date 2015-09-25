#include <stdio.h>
#include <stdlib.h>

#define ANSI_RESET   "\x1b[0m"
#define ANSI_BLACK   "\x1b[30m"
#define ANSI_RED     "\x1b[31m"
#define ANSI_GREEN   "\x1b[32m"
#define ANSI_YELLOW  "\x1b[33m"
#define ANSI_BLUE    "\x1b[34m"
#define ANSI_MAGENTA "\x1b[35m"
#define ANSI_CYAN    "\x1b[36m"
#define ANSI_WHITE   "\x1b[37m"

#define UTL "\u2554"
#define USH "\u2550"
#define USV "\u2551"
#define UCD "\u2566"
#define UTR "\u2557"

int main() {
printf(UTL USH USH USH USH USH USH USH USH USH USH USH USH USH USH USH UCD USH USH USH USH USH USH USH USH USH USH USH UTR "\n");
printf(USV " " ANSI_RED "PROJECT EULER" ANSI_RESET " " USV  " " ANSI_YELLOW "Problem 1" ANSI_RESET  " " USV "\n");
printf(ANSI_GREEN "Multiples of 3 and 5" ANSI_RESET "\n");
}
