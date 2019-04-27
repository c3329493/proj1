#include <stdio.h>
int RotationEncryption(void);

int main(void){
SubsitutionEncryption();
RotationEncryption();
RotationDecryption();
return 0;
}

int RotationDecryption(void)//declare the decryption function definition 
{
    int i;
    char message[500];//declare string
    int key;//initilaise key
        printf("Enter Cipher Key <space> Enter Phrase to be decrypted:\n\n");//user enters the key and piece of text to be decrypted, seperated by a space
        scanf("%d", &key);//the key is scanned as an integer and stored in 'key'
        scanf("%[^\n]s", message);//the text is scanned as a string and stored in 'OriginalText'
    for( i=0; i<500; i++ ){//for loop which increments through the phrase to be decrypted 
        if (message[i]<65 || message[i]>122);//do nothing since the character is outside lower and uppercase alphabet
        else {
            message[i] = message[i] - (key%26); //formula for encryption, roatate around alphabet by key
}
}
printf("%s\n", message);//prints the decrypted text to the console
}

int RotationEncryption(void)//declare the encryption function definition 
{
    int i;//initialise the integer i which is used to count or increment through each chracter
    char message[500];//declare string
    int key;//initilaise key
        printf("Enter Cipher Key <space> Enter Phrase to be encrypted:\n\n");//user enters the key and piece of text to be encrypted, seperated by a space
        scanf("%d", &key);//the key is scanned as an integer into 'key'
        scanf("%[^\n]s", OriginalText);//the text is scanned as a string and stored in 'OriginalText'
    for( i=0; i<500; i++ ){//for loop which increments through the phrase to be encrypted
        if (97 < OriginalText[i] && OriginalText[i] < 122){//boundary ensures if 
OriginalText[i] = OriginalText[i]-32;//if character is lowercase -32 will make it uppercase (in the ASCII table)
        }
        if (OriginalText[i]<65 || OriginalText[i]>122);//do nothing since the character is outside lower and uppercase alphabet (symbols and numerals)
        else {
            OriginalText[i] = OriginalText[i] + (key%26); //formula for encryption, roatate around alphabet by key
    }
}
printf("%s\n", OriginalText);//prints the encrypted message to the console
}

int SubsitutionEncryption(char code[], char char_to_find)
{
    if
    char message[500];//declare string
}