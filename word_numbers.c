//
//  word_numbers.c
//  
//
//  Created by Chris Becker on 4/5/18.
//
/*
 this program takes a word as input and depending on the characters converts them into numbers
 and stores those numbers in another array.
 
 
 
 
 */
#include <stdio.h>
int read_line(char *str, int n);
void convert(char *word, char *numbers);

int main(void){
    //set up variables
    char word[1001];//leaving space for terminator character
    char nums[1001];
    
    //get the string to be converted
    printf("enter a word ");
    read_line(word, 1000);
    
    //pass the convert
    convert(word,nums);
    printf("input: %s \n", word);
    printf("output: %s \n", nums);

    return 0;
}


void convert(char *word, char *numbers){
    //go through every value of word test if the character is between the ascii values needed for converting, convert
    char *p;
    for (p = word; *p != '\0'; p++)
    {
        //if the character is between a and c or A and C; make it a 2
        if((*p >= 97 && *p <= 99) || (*p >= 65 && *p <= 67)){
            *numbers = '2';
            numbers++;
        }
        //if the character is between d and f or D and F; make it a 3
        if((*p >= 100 && *p <= 102) || (*p >= 68 && *p <= 70)){
            *numbers = '3';
            numbers++;
        }
        //if the character is between g and i or G and I; make it a 4
        if((*p >= 103 && *p <= 105) || (*p >= 71 && *p <= 73)){
            *numbers = '4';
            numbers++;
        }
        //if the character is between j and l or J and L; make it a 5
        if((*p >= 106 && *p <= 108) || (*p >= 74 && *p <= 76)){
            *numbers = '5';
            numbers++;
        }
        //if the character is between m and o or M and O; make it a 6
        if((*p >= 109 && *p <= 111) || (*p >= 77 && *p <= 79)){
            *numbers = '6';
            numbers++;
        }
        //if the character is between p and s or P and S; make it a 7
        if((*p >= 112 && *p <= 115) || (*p >= 80 && *p <= 83)){
            *numbers = '7';
            numbers++;
        }
        //if the character is between t and v or t and v; make it a 8
        if((*p >= 116 && *p <= 118 ) || (*p >= 84 && *p <= 86)){
            *numbers = '8';
            numbers++;
        }
        //if the character is between w and z or W and Z; make it a 9
        if((*p >= 119 && *p <= 122) || (*p >= 87 && *p <= 90)){
            *numbers = '9';
            numbers++;
        }
        *numbers = '\0'; //add terminator character
    }
    
    
}


int read_line(char *str, int n){
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){
        if (i < n){
            *str++= ch;
            i++;
        }
        
    }
    *str = '\0';   /* terminates string */
    return i;        /* number of characters stored */
    
}
