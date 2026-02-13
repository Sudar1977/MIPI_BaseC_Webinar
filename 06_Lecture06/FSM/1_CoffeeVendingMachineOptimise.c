/*
 * 1_CoffeeVendingMachine.c
 *
 * Copyright 2026 Tisha <Tisha@DESKTOP-TSPB5RM>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#include <stdio.h>
#include <conio.h>

typedef enum
{
    READY,
    WAIT,
    STATE_MAX
} STATE_t;

typedef enum
{
    RUBL_1,
    RUBL_2,
    CANCEL,
    EVENT_MAX
} EVENT_t;

typedef STATE_t (*stateCoffee)(void);

STATE_t ready(void);
STATE_t prepfre(void);
STATE_t wait(void);
STATE_t change(void);
STATE_t myReturn(void);
STATE_t error(void);
EVENT_t getEvent(void);

const stateCoffee transition_table[STATE_MAX][EVENT_MAX] =
{
    [READY]     [RUBL_1]    = wait,
    [READY]     [RUBL_2]    = prepfre,
    [READY]     [CANCEL]    = error,
    [WAIT]      [RUBL_1]    = prepfre,
    [WAIT]      [RUBL_2]    = change,
    [WAIT]      [CANCEL]    = myReturn,
};

int main(int argc, char **argv)
{
    STATE_t state = ready();
    while(1)
        state = transition_table[state][getEvent()]();
    return 0;
}

EVENT_t getEvent(void)
{
    char choice;

    while(1)
    {
        printf("1.Put 1 rubl\n2.Put 2 rubl\n0.Cancel\n");
        choice = _getch();
        switch(choice)
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

STATE_t ready(void)
{
    printf("Ready\n");
    return READY;
}

STATE_t prepfre(void)
{
    printf("Preapare cofee\n");
    return ready();
}

STATE_t wait(void)
{
    printf("Wait\n");
    return WAIT;
}

STATE_t change(void)
{
    printf("Change 1 Rubl\n");
    return prepfre();
}

STATE_t myReturn(void)
{
    printf("Change 1 Rubl\n");
    return ready();
}

STATE_t error(void)
{
    printf("Error signal CANCEL\n");
    return ready();
}
