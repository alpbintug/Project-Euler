#include <stdio.h>

int main(){
    int previous = 0;
    int next = 2;
    int sumOfEvenNumbers = 0;

    while(next<4000000){
        sumOfEvenNumbers += next;
        int dummy = next;
        next = 4*next + previous;
        previous = dummy;
    }
    printf("%d",sumOfEvenNumbers);
}
