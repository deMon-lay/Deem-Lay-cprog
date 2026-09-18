// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);
    if(grade >= 90){
         printf("Your Grade is A");
    } else if(grade >= 80){
         printf("Your Grade is B");
    } else if(grade >= 70){
         printf("Your Grade is C");
    } else if(grade >= 60){
         printf("Your Grade is D");
    } else{
         printf("Your Grade is F");
    }
    
    return 0;
}