#include<stdio.h>
#include<math.h>
int main()
{
    int num=100, counter=0;
    bool is_prime;

    for(int i=2; i<=num; i++){
        is_prime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                is_prime=false;
            }
        }
        if(is_prime==true){
            counter++;
            printf("%d", i);
            printf("\n");
        }
    }
    printf("Total prime number in rage %d is: %d", num, counter);
}
