//Ciaran McErlean
//9/26/22
//Palidrome Project x
#include <iostream>
#include <string.h>
#include <string>
#include <cctype>
using namespace std;


int main(){

  char text [80]; //Array for text 
    char temp;
    int isPalindrome = 1;
    int i = 0, j, length;

    cout << "Enter a word or sentence no longer than 80 letters: "; // Asks user for there word sentence, etc

    gets(text);  //Grabs text 
    
    length = strlen(text);
   

    for (i = 0; i < length; i++) { //Both removes spaces and puncation 
       if (isalpha(text[i]) == false || text[i] == ' ' )
      { 
	for (j = i; j < length; j++) 
	  text[j] = text[j+1];
	length--;
	i--;
	}
    }
    

    for (int i = 0; i < length; i++) {//Lower cases the text
      text[i] = tolower(text[i]);
    }








    for(int i=0; i<length; i++){ //reverses the text and checks if equal 

        if(text[0+i] == text[(length-1)-i]){
            temp = text[0+i];
            text[0+i] = text[(length-1)-i];
            text[(length-1)-i] = temp;
        }
        else{
            isPalindrome = 0;
            break;
        }
    }



    if(isPalindrome == 0) // Tells you wether or not it is a palindrome 
        cout << text << " is not a Palindrome." << endl;
    if(isPalindrome == 1)
        cout << text << " is a Palindrome." << endl;

    return 0;
}

