#include <stdio.h>


char arr[1024];
int index = 0;

int main()
{
    int code = 0;

    printf("minganzifuguanlixitong\n");

    while (1){

    scanf("%d",&code);

    if(code == 1){
        printf("qingshuruyaotianjiademinganzifu\n");
        char m;
        scanf("%c",&m);
        scanf("%c",&m);

        arr[index] = m;
        index++;

        printf("tianjiachenggong,dainjihuichejixu\n");
        char x;
        scanf("%c",&x);
        scanf("%c",&x);
    }

    if(code == 2){

    }
    if(code == 3){
        
    }
    if(code == 4){
        
    }
    if(code == 5){
        printf("tuichuxitong\n");
        break;
    }

    }
    
    return 0;
    
}