#include <stdio.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
  // Declare second integer, double, and String variables.
    int a;
    double b;
    char c[100];
   
    // Read and save an integer, double, and String to your variables.
    scanf("%d %lf %[^\n]",&a,&b,c);
  //Here I used %[^\n] to read the entire string until a newline character is encountered, ie so that it reads the whole thing and not just the first word.
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n",(i+a));
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+b);
    // Concatenate and print the String variables on a new line. Note that if you are using a language like C that does not support string concatenation, just print one variable followed by another on the same line.
    printf("%s%s",s,c);
    // The 's' variable above should be printed first.

    return 0;
}
