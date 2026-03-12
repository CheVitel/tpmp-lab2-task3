#ifndef NOTE2_H
#define NOTE2_H

typedef struct {
        int year;
        int month;
        int day;
} Date;

typedef struct {
        char name[50];
        char tele[20];
        Date date;
} NOTE2;

void input_block(NOTE2 *block, int size);
void sort_by_phone(NOTE2 *block, int size);
void search_by_name(NOTE2 *block, int size, char *name);
void print_note(NOTE2 *note);

#endif
