
#include <stdio.h>

// int main() {
//     char ch;
//     char str[100];
//     char sentence[100];

//     // Read the character
//     scanf("%c", &ch);
    
//     // To consume the newline character left by the previous scanf
//     getchar();
    
//     // Read the string
//     scanf("%s", str);
    
//     // To consume the newline character left by the previous scanf
//     getchar();
    
//     // Read the sentence
//     scanf("%[^\n]%*c", sentence);
    
//     // Print the results
//     printf("%c\n", ch);
//     printf("%s\n", str);
//     printf("%s\n", sentence);
    
//     return 0;
// }


int main() {
    // Declare variables
    int int1, int2;
    float float1, float2;
    
    // Read input
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);
    
    // Perform operations and print results
    // Sum and difference of integers
    printf("%d %d\n", int1 + int2, int1 - int2);
    
    // Sum and difference of floats
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);
    
    return 0;
}