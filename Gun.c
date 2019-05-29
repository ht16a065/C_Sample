#include<stdio.h>

int Gun[10] = {0,1,2,3,4,5,6,7,8,9};
int Slot[10] = {10,11,12,13,14,15,16,17,18,19};
int null;
void shot(){
    printf("%d\n",Gun[0]);

    Gun[0] = Gun[1];
    Gun[1] = Gun[2];
    Gun[2] = Gun[3];
    Gun[3] = Gun[4];
    Gun[4] = Gun[5];
    Gun[5] = Gun[6];
    Gun[6] = Gun[7];
    Gun[7] = Gun[8];
    Gun[8] = Gun[9];
    Gun[9] = null;
    
   
}

void reload()
{
    for(int i = 0; i <= 9; i++ ){
    if(Gun[i] == null){
        Gun[i] = Slot[0];
    Slot[0] = Slot[1];
    Slot[1] = Slot[2];
    Slot[2] = Slot[3];
    Slot[3] = Slot[4];
    Slot[4] = Slot[5];
    Slot[5] = Slot[6];
    Slot[6] = Slot[7];
    Slot[7] = Slot[8];
    Slot[8] = Slot[9];
    Slot[9] = null;
    }
    }
}

int main(void){
for(;;){
    char c = getchar();
    if(c == 's') {shot(); printf("次の弾丸は%dです。\n", Gun[0]);}
    if(c == 'r')  {reload(); printf("リロードしました\n");}
    if(c == 'e') {return 0;}
    if(c == 'l') {printf("%d",Slot[0]);}
}
}