#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int remainder;
int remainder2;
long long number=600851475143;
 for(int i=2;i<=sqrt(number);i++){
  remainder=number%i;
  if(remainder==0){
    for(int j=2;j<=sqrt(i);j++){
      remainder2=i%j;
       if(remainder2==0){
        break;
         }
        } 
    if(remainder2!=0){
     printf("%d\t",i);
      } 
    } 
 } 
return 0;
}
