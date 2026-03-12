#include <stdio.h>
#include "note2.h"

int main(void)
{
        NOTE2 block[7];
        char name[50];

        input_block(block, 7);
        sort_by_phone(block, 7);

        printf("\nСписок после сортировки по первым 3 цифрам телефона:\n");
        int i;
        for (i = 0; i < 7; i++)
                print_note(&block[i]);

        printf("\nВведите фамилию для поиска: ");
        scanf(" %[^\n]", name);
        search_by_name(block, 7, name);

        return 0;
}
