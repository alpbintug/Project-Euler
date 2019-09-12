#include <stdio.h>

int main(){
    int previous = 0;
    int next = 2;
    int sumOfEvenNumbers = 0;
    int dummy;
    while(next<4000000){
        sumOfEvenNumbers += next; //Adding the current even fibonacci value to the our sum
        dummy = next; //Storing current value, because we will change this value.
        next = 4*next + previous; //Calculating the next value
        previous = dummy; //Updating the previous value.
    }
    printf("%d",sumOfEvenNumbers); //Output: 4613732
}
