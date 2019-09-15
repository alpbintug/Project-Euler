#include <stdio.h>

int main()
{
    unsigned long long number = 600851475143LLU; // C Cannot store value using "int" because an integer has 4 bytes of space
    //Number 600851475143 is hold 10 bytes of space in RAM.
    //Hardest part of this problem was solving the storage issue of the number.
    int i;

    for(i = 2; i <= number; i++){
        if(number%i==0)
        {
            number/=i;
            i--;
        }
    }


    printf("Largest prime factor of your number is: %d",i);
    return 0;
}
