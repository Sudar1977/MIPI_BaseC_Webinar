#include <stdio.h>
#include <conio.h>

enum signals { RUBL_1, RUBL_2, CANCEL};
enum states  { READY, PREPFRE, WAIT, CHANGE, RETURN };

enum signals GetUserSignal(void)
{
    char Choice;
    while(1)
    {
        printf("1.Put 1 rubl\n2.Put 2 rubl\n0.Cancel\n");
        Choice = getch();
        switch(Choice)
        {
        case '1':
            return RUBL_1;
        case '2':
            return RUBL_2;
        case '0':
            return CANCEL;
        }
    }
}

int main()
{
    enum states state = READY;
    while (1)
    {
        switch (state)
        {
        case READY:
            printf("Ready\n");
            switch(GetUserSignal())
            {
            case (RUBL_2):
                    state = PREPFRE;
                break;
            case(RUBL_1):
                    state = WAIT;
                break;
            case(CANCEL):
                printf("Error signal CANCEL\n");
                break;                
            }
            break;
        case PREPFRE:
            printf("Preapare cofee\n");
            state = READY;
            break;
        case WAIT:
            printf("Wait\n");
            switch(GetUserSignal())
            {
            case(RUBL_2):
                    state = CHANGE;
                break;
            case(RUBL_1):
                    state = PREPFRE;
                break;
            case(CANCEL):
                    state = RETURN;
                break;
            }
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
    }
    return 0;
}
