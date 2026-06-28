#include <stdio.h>
int main() {

char ch = '$';
printf("enter a character: ");
scanf(" %c", &ch);
if (ch >= 'a' && ch <= 'z') {
    printf("Alphabet");
} else if (ch >= '0' && ch <= '9') {
    printf("Digit");
} else {
    printf("Special Character");
}
return 0;
}