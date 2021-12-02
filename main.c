#include <stdio.h>
#include "my_mat.h"

int main (){
    
    int i,j;
    char ch;
    scanf("%c",&ch);

    while(ch!='D'){
        if (ch=='A'){
            userinput();
        }
       else if(ch=='B'){
            scanf("%d",&i);
            scanf("%d",&j);

            if (isconnected(i, j))
                printf("True\n");
            else
                printf("False\n");
        }
        else if(ch=='C'){
            scanf("%d",&i);
            scanf("%d",&j);
            
            printf("%d\n", Shortest_route(i, j));
        }
         scanf("%c",&ch);
    }
    return 0;
}
