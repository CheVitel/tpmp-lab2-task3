#include <stdio.h>
#include <string.h>
#include "note2.h"

void input_block(NOTE2 *block, int size)
{
        int i;
        for (i = 0; i < size; i++) {
                printf("Запись %d:\n", i + 1);
                printf("Фамилия и инициалы: ");
                scanf(" %[^\n]", block[i].name);
                printf("Номер телефона: ");
                scanf(" %s", block[i].tele);
                printf("Дата рождения (год месяц день): ");
                scanf("%d %d %d", &block[i].date.year,
                        &block[i].date.month,
                        &block[i].date.day);
        }
}

void sort_by_phone(NOTE2 *block, int size)
{
        int i, j;
        NOTE2 temp;
        for (i = 0; i < size - 1; i++) {
                for (j = 0; j < size - i - 1; j++) {
                        if (strncmp(block[j].tele, block[j+1].tele, 3) > 0) {
                                temp = block[j];
                                block[j] = block[j+1];
                                block[j+1] = temp;
                        }
                }
        }
}

void search_by_name(NOTE2 *block, int size, char *name)
{
        int i;
        int found = 0;
        for (i = 0; i < size; i++) {
                if (strcmp(block[i].name, name) == 0) {
                        print_note(&block[i]);
                        found = 1;
                }
        }
        if (!found)
                printf("Такого человека нет.\n");
}

void print_note(NOTE2 *note)
{
        printf("Фамилия: %s\n", note->name);
        printf("Телефон: %s\n", note->tele);
        printf("Дата рождения: %d.%d.%d\n",
                note->date.day,
                note->date.month,
                note->date.year);
}
