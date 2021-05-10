#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isVowel(char);
bool isConsonant(char);
bool isSpecial(char);

void main(){
    char str[100];
    int vowels = 0, consonants = 0, special = 0;
    int i;
    printf("Enter Sentence: ");
    gets(str);
    for(i=0;i<strlen(str);i++){
        if(isSpecial(str[i])){
            special+=1;
        } else if(isVowel(str[i])){
            vowels+=1;
        } else if(isConsonant(str[i])){
            consonants+=1;
        }
    }
    printf("\n Number of Vowels present are: %d", vowels);
    printf("\n Number of Consonants present are: %d", consonants);
    printf("\n Number of Special characters present are: %d", special);

}

bool isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return true;
    } else {
        return false;
    }
}

bool isConsonant(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return false;
    } else {
        return true;
    }
}

bool isSpecial(char c){
    if(c=='t'||c=='T'||c==' '){
        return true;
    } else {
        return false;
    }
}