#include <stdio.h>

    int RotationEncryption(void);
    int RotationDecryption(void);
    int SubsitutionEncryption(void);
    int SubstitutionDecryption(void);
    
    int main(void){
    SubsitutionEncryption();
    SubstitutionDecryption();
    RotationEncryption();
    RotationDecryption();
return 0;
}
int number =2;
switch (number){
      case 1:
int RotationDecryption(void)//declare the decryption function definition 
{
    int i;
    char message[500];//declare string
    int key;//initilaise key
        printf("Enter Cipher Key <space> Enter Phrase to be decrypted:\n\n");//user enters the key and piece of text to be decrypted, seperated by a space
        scanf("%d", &key);//the key is scanned as an integer and stored in 'key'
        scanf("%[^\n]s", message);//the text is scanned as a string and stored in 'OriginalText'
    for( i=0; i<500; i++ ){//for loop which increments through the phrase to be decrypted 
    if (96 < message[i] && message[i] < 123){//boundary ensures if 
    message[i] = message[i]-32;
//if character is lowercase -32 will make it uppercase (in the ASCII table)
        if (message[i]<65 || message[i]>122);//do nothing since the character is outside lower and uppercase alphabet
        else {
            message[i] = message[i] - (key%26); //formula for encryption, roatate around alphabet by key
}
       if (message[i] <65){
        message[i]=message[i]+26; }
}
}
    printf("%s\n", message);//prints the encrypted message to the console
}
    break;
    case 2:
int RotationEncryption(void)//declare the encryption function definition 
{
    int i;//initialise the integer i which is used to count or increment through each chracter
    char OriginalText[500];//declare string
    int key;//initilaise key
        printf("Enter Cipher Key <space> Enter Phrase to be encrypted:\n\n");//user enters the key and piece of text to be encrypted, seperated by a space
        scanf("%d", &key);//the key is scanned as an integer into 'key'
        scanf("%[^\n]s", OriginalText);//the text is scanned as a string and stored in 'OriginalText'
    for( i=0; i<500; i++ ){//for loop which increments through the phrase to be encrypted
        if (96 < OriginalText[i] && OriginalText[i] < 123){//boundary ensures if 
OriginalText[i] = OriginalText[i]-32;//if character is lowercase -32 will make it uppercase (in the ASCII table)
       
        if (OriginalText[i]<65 || OriginalText[i]>122);//do nothing since the character is outside lower and uppercase alphabet (symbols and numerals)
        else {
            OriginalText[i] = OriginalText[i] + (key%26); //formula for encryption, roatate around alphabet by key
    }
      if (OriginalText[i] >90){
       OriginalText[i]=OriginalText[i]-26; }
}
 }
printf("%s\n", OriginalText);//prints the encrypted message to the console
}
    break;
    case 3:
int SubstitutionEncryption(void){
    int i;
    int m;
    char message[150] = "test text"; //initialise array for phrase to be encrypted
    char key[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};//initialise array for key which can be randomised to test code

for (i=0; message[i] != '\0'; i++ ){ //initialise i equal to 0, provide a exit condition and increment i to cycle through the phrase
    if (96 < message[i] && message[i] < 123){       //boundary ensures if lowercase make it upper
    message[i] = message[i]-32;                     //if character is lowercase -32 will make it uppercase (in the ASCII table)
        if (message[i]<65 || message[i]>122);       //do nothing since the character is outside lower and uppercase alphabet
        else{ 
        message[i] = message[i]-65;
        }  
        m = message[i];
        message[i] = key[m];//to get number  0 -25
    }
}

printf("%s\n", message);//print encrypted phrase to the console
    
}
break;
case 4:
 int SubstitutionDecryption(){
    int i;
    int m;
    char message[] = {"TTST TTXT"};//initialise array for encrypted phrase
    char key[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};//initialise array for key 
       for ( i = 0; message[i] != 0; i++){ //initialise i equal to 0, provide a exit condition and increment i to cycle through the phrase
       if (message[i]<123 && message[i]>96)//if the ASCII value of the character is within this range it is lowercase
           message[i] = message[i] - 32;//subtract 32 from its value to change it to an uppercase leter
       }
    
        if( message[i]<91 && message[i]>64) {//if the character is uppercase
            int x=0;//start x at 0
        while ( message[i] != key[x]){
            x=x+1;//increment x by 1 after each loop 
   }   
            x=x+65;//assign the value of x to (x + 65) 
            message[i] = x;
            
        }}
            printf("%c", message[i]); //print the decrypted phrase to the console
    }
}
        
     
     