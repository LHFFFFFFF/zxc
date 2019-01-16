#include <stdio.h>


char arr[1024];
int index = 0;

int main()
{
    int code = 0;

    printf("minganzifuguanlixitong\n");

    while (1)
    {
        printf("1---tianjiaminganzifu\n");
        printf("2---shanchuminganzifu(zuihouyige)\n");
        printf("3---chakansuoyouminganzifu\n");
        printf("4---tihuanneirongzhongdeminganzifu\n");
        printf("5---tuichu\n");

        printf("qingxuanzexiangyinggong\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
        printf("qingshuruyaotianjiademinganzifu\n");
        char m;
        scanf("%c",&m);
        scanf("%c",&m);

        arr[index] = m;
        index++;
        index++;

        printf("tianjiachenggong,dainjihuichejixu\n");
        char x;
        scanf("%c",&x);
        scanf("%c",&x);
    }

    if(code == 2){
        
        printf("shanchuzuihouyigeminganzifu\n");
        index--;

        printf("shanchuchenggong,dianjihuichejixu\n");
        char x;
        scanf("%c",&x);
        scanf("%c",&x);

    }
    if(code == 3){
        printf("suoyouminganzifuruxia\n");

        for(int i = 0;i < index; i++)
        {
            printf("di%dgrminganzifuwei%c\n",i + 1,arr[i]);
        }
            printf("shanchuchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
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