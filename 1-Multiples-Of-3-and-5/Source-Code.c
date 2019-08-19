#include <stdio.h>

int main(){
 int firstSums[3] = {23,55,117};
 int i,sum=0;
 for(i=0;i<34;i++){
    sum+= firstSums[0] +i*150;
 }
 for(i=0;i<33;i++){
    sum+= firstSums[1] + i*120;
 }
 for(i=0;i<33;i++){
    sum+= firstSums[2] + i*150;
 }

 printf("%d",sum);//Output: 233168
}
