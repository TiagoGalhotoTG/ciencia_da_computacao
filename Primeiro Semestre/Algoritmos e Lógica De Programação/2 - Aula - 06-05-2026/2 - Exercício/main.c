# include <stdio.h>
# include <stdlib.h>

int main(){

    int  cont;

    for( cont = 10; cont>=0; cont -- )
    {
        printf("%d", cont);
        sleep(2);
    }

    printf("\N FOGO!");

    return 0;
}

