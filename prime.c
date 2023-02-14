#include<stdio.h>
#include<math.h>
int main(int argc, char*argv[]) // There was no 'int' written before main that's why program crashes.
{
    int n, i;           //There was a comma next to i which is illegal. there should be semicolon instead of a comma otherwise it shows declaration error.
    int d2,count;
    double d1;
    
    while(1){
        printf("enter a number (0to quit):");
        scanf("%d",&n);
        if(n==0)
        break;
        count=0;
        for(i=1; i<=n; i++){        // n should be divisible by 1. In the first line inside the for loop, a program crashes Because when the for loop runs for first time 'i' will be zero and it crashes because we were trying to divide 'n' by zero. I have changed the first two lines in order for a program to execute properly. 
         d1=(double)n/(double)i;
d2=n/i;
if (fabs(d1-(double)d2)<0.00001)
count++;
}


          
        if(count==2)
        printf("%d is prime\n",n);
        else
        printf("%d is not prime\n",n);
    }
}
        
        
        
    
