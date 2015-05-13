# include <stdio.h>
# include <stdbool.h>
# define sz 18
# define len(array) sizeof( array ) / sizeof( array[0] )
# define itob(num) (num ? "true" : "false")

void status(bool ary[]){
    int i;
    for (i=0; i<sz; i++){
        printf("  %d\t", i);
    }
    printf("\n");
    for (i=0; i<sz; i++){
        printf("%s\t", itob(ary[i]));
    }
    printf("\n");
}

int main(){
    bool ary[sz];
    int i, j, count=0;

    // initialize all array element
    for(i=0; i<sz; i++){
        ary[i] = true;
    }

    ary[0] = false;
    ary[1] = false;
    status(ary);

    for(i=2; i<sz; i++){
        if(ary[i] == true){
            printf("\n\n%d\n", i);
            for(j = i+i; j< sz; j=j+i){
                ary[j] = false;
            }
            status(ary);
        }
    }
    return 0;
}
