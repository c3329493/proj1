#include <stdio.h>
  int main(void){ //declare main function which constitutes all of the code
       
int number = 4; //setting up switch case to naviagte through code
switch (number){/*start switch statement will allow user to navigate through code 1 being rotational decrypting, 
2 being rotational encrypting, 3 being substitution encryption and 4 being substitution decryption */
      case 1://start of case one = the code for decrypting a rotational cipher
{//Rotation Cipher Decrypting
    int i;//initialise integer i
    char message[500] = {"zebra"};//declare string for the phrase to be decrypted
    int key = 1 ;//initilaise key or the amount of letters to rotate backwards through the alphabet
      
    for( i=0; message[i] != 0; i++ ){//for loop which increments through the phrase to be decrypted 
    if (96 < message[i] && message[i] < 123){
    message[i] = message[i]-32;//preiovus line and this line ensure the message is only an uppercase letter by altering the ASCII value of lower case letters
    }
//if character is lowercase -32 will make it uppercase (in the ASCII table)
        if (message[i]<65 || message[i]>122);//do nothing since the character is outside lower and uppercase alphabet 
        else {
            message[i] = message[i] - (key%26); //formula for decryption, roatate around alphabet by key
             if (message[i] <65){
        message[i]=message[i]+26; }/*this line and the previous line are implemented to rotate 
        a character back to the start of the alphabet, e.g if the loop reaches a it will scroll back to z and continue*/
}
  printf("%c", message[i]);//prints the decrypted message to the console
}
 }
break; // breaks out of case 1 and tells the compiler to not execute the code below
case 2://encrypted rotaional cipher

{
    int i;
    char message[500] = {"ABCDE"};//declare string
    int key = 2  ;//initilaise key which is used to rotate around the alphabet 
      
    for( i=0; message[i] != 0; i++ ){//for loop which increments through the phrase to be decrypted 
    if (96 < message[i] && message[i] < 123){//boundary ensures if 
    message[i] = message[i]-32;
    }
//if character is lowercase -32 will make it uppercase (in the ASCII table)
        if (message[i]<65 || message[i]>122);//do nothing since the character is outside lower and uppercase alphabet
        else {
            message[i] = message[i] + (key%26); //formula for encryption, roatate around alphabet by key
             if (message[i] >90){
        message[i]=message[i]-26; }/*this line and the line above rotates the character back to the 
        end of the alphabet e.g. if it reaches above A it will rotatate it back to Z */
}
  printf("%c", message[i]);//prints the encrypted message to the console
}
}
break;//breaks out of case 2 and tells the compiler to not execute the code below
case 3://substitution encryption
{
    int i;//initialise integer i
    int m;//initialise integer m
    char message[150] = "test text"; //initialise array for phrase to be encrypted
    char key[26] = {"QWERTYUIOPASDFGHJKLZXCVBNM"};//initialise array for key which can be randomised to test code

for (i=0; message[i] != '\0'; i++ ){ //initialise i equal to 0, provide a exit condition and increment i to cycle through the phrase
    if (96 < message[i] && message[i] < 123){ //boundary ensures if lowercase make it upper
    message[i] = message[i]-32;//if character is lowercase -32 will make it uppercase (in the ASCII table)
        if (message[i]<65 || message[i]>122);//do nothing since the character is outside lower and uppercase alphabet
        else{ 
        message[i] = message[i]-65;//take the character from ASCII characters to the 0-25 alphabet
        }  
        m = message[i];// assign the value of m to the array message[i]
        message[i] = key[m]; //assign the vlaue of message[i] to key[m]
    }
}

printf("%s\n", message);//print encrypted phrase to the console
    
}
break;//breaks out of case 3 and tells the compiler to not execute the code below
case 4: //decrypting substitution cipher
    {
    int i;
    char message[] = {"TTST TTXT qwerty"};//initialise array for encrypted phrase
    char key[] = {"QWERTYUIOPASDFGHJKLZXCVBNM"};//initialise array for key 
       for ( i = 0; message[i] != 0; i++){ //initialise i equal to 0, provide a exit condition and increment i to cycle through the phrase
       if (message[i]<123 && message[i]>96)//if the ASCII value of the character is within this range it is lowercase
           message[i] = message[i] - 32;//subtract 32 from its value to change it to an uppercase leter
        if( message[i]<91 && message[i]>64) {//if the character is uppercase
            int m=0;//start m at 0
        while ( message[i] != key[m]){//while the phrase to be decrypted doesnt equal the provided key do the following..
            m=m+1;//increment x by 1 after each loop 
   }   
            m=m+65;//assign the value of m to (m + 65) to put it into ASCII values from alphabetical values
            message[i] = m;//assign the array message[i] to integer m which is now an ASCII character
            }
                   printf("%c", message[i]); //print the decrypted phrase to the console
       }
       break;//break out of case 4 and dont run the rest of the code below
}
       default: //thecompiler will run the code from default if the user enters a value outside of 1-4 in theline "int number = 4;"
 {
       }
         printf("select a case 1-4!");//message to tell user that they have not entered a number 1-4
   }
   return 0;
  }
     