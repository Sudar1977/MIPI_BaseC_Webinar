#include <stdio.h>
#include <conio.h>

int Rubl_1 = 0,Rubl_2 = 0,Cancel = 0;

void GetUserSignal(void){
    char Choice;
    while(1){
        printf("1.Put 1 rubl\n2.Put 2 rubl\n0.Cancel\n");
        Choice = getch();
        switch(Choice){
            case '1': Rubl_1=1; return;
            case '2': Rubl_2=1; return;
            case '0': Cancel=1; return;
        }
    }
 }

int main(){
    enum states { READY, PREPFRE, WAIT, CHANGE, RETURN } state = READY;
    while (1){
        switch (state)
        {
            case READY:
                printf("Ready\n");
                GetUserSignal();
                if(Rubl_2) state = PREPFRE;
                if(Rubl_1) state = WAIT;
            break;
            case PREPFRE:
                printf("Preapare cofee\n");
                state = READY;
            break;
            case WAIT:
                printf("Wait\n");
                GetUserSignal();
                if(Rubl_2) state = CHANGE;
                if(Rubl_1) state = PREPFRE;
                if(Cancel) state = RETURN;
            break;
            case CHANGE:
                printf("Change 1 Rubl\n");
                state = PREPFRE;
            break;
            case RETURN:
                printf("Change 1 Rubl\n");
                state = READY;
            break;
        }
    Rubl_1 = 0;Rubl_2 = 0;Cancel = 0;
    }
    return 0;
}
