#include <stdio.h>

int main(){
 float numberOfItemsInFirstGroup = (float)(999-3)/3+1;
 float numberOfItemsInSecondGroup = (float)(995-5)/5+1;
 float numberOfItemsInThirdGroup = (float)(990-15)/15+1;
 float medianOfItemsInFirstGroup = (float)(999+3)/2;
 float medianOfItemsInSecondGroup = (float)(995+5)/2;
 float medianOfItemsInThirdGroup = (float)(990+15)/2;

 printf("%f",numberOfItemsInFirstGroup*medianOfItemsInFirstGroup + numberOfItemsInSecondGroup*medianOfItemsInSecondGroup - numberOfItemsInThirdGroup * medianOfItemsInThirdGroup);

}
