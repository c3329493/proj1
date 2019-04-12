#include <stdio.h>
int RotationEncryption(void);

int main(void){
RotationEncryption();
return 0;
}


int RotationEncryption(void)
{
    int i;
    char message[500];//declare string
    int key;//initilaise key
        printf("Enter Cipher Key <space> Enter Phrase to be encrypted:\n\n");
        scanf("%d", &key);
        scanf("%[^\n]s", message);
    for( i=0; i<500; i++ ){
        if (97 < message[i] && message[i] < 122){
            message[i] = message[i]-32;//if character is uppercase -32 will make it lower case (in the ASCII table)
        }
        if (message[i]<65 || message[i]>122);//do nothing since the character is outside lower and uppercase alphabet
        else {
            message[i] = message[i] + (key%26); //formula for encryption, roatate around alphabet by key
    }
}
printf("%s\n", message);
}
