#include <stdio.h>
#include <string.h>
char* alphabet[] = {" ","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9","0"};
char* morse_code[] = {"/",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};

int index (char* s[], char* word){
    for (int i = 0; i < 36; i++)
        if (!strcmp(s[i], word))
            return i;
}
void decode_Morse (char s[])
{
    char plain_text[]= "";
    int i = 0;
    while (i < strlen(s)){
        char word[] = "";
        while (i < strlen(s) && s[i] != ' '){
        	char temp[1] = {s[i]};
            strcat (word, temp);
            i++;
        }
        strcat (plain_text, alphabet[index(morse_code, word)]);
        i++;
    }
    for (int j = 0; plain_text[j] != '\0'; j++)
    	printf ("%c ", plain_text[j]);
    //return plain_text;
}
int main(){
    //Code your solution here
    char s[100];
    scanf ("%s",s);
    decode_Morse(s);
    //printf ("%s", decode_Morse(s));
    return 0;
}
