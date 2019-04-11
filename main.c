#include<stdio.h>
#include<string.h>
 /*
ASCII 65>letter>90
Encrypted letter = (InputLetter + Key)%26  
PlainTextLetter = ( Encrypted letter - key)%26
if resultafter brackets is negative, + 26 to it before %26
*/
void rotationcipher(char* inputText, int k)

int main(void){
    int k=1
    char InputText[101]
    printf("Input Text to be Encrypted")
    scanf("%c", InputText)
}
if (n>122 || n<65){ // ASCII code of alphabet lower and uppercase i lies between 65 and 122
    printf("%n") // print value of character without encryption
}
/*If an input byte is outside of the ranges [65, 90] and [97, 122] then it can be copied to the output without
modification. If an input byte is in the lower case range, [97, 122], then you should subtract 32 from its
value to make it an upper case letter prior to encryption.*/