/*
*   Palindrome Number in C
*   Determine whether an integer is a palindrome. 
*   An integer is a palindrome when it reads the same backward as forward.
*/

#include <stdbool.h>

bool isPalindrome(int x) {
    int check = 0;
    
    if(x < 0 || x != 0 && x % 10 == 0){
        //return false;
    }
    else while(x > check){
        check = check * 10 + x % 10;
        x /= 10;
    }
    return (x == check || x == check / 10);
}