#include <stdio.h>


struct dmy {
   int day;
   int month;
   int year; 
}; 
struct dmy x;  // a record x of the dmy kind
struct dmy y;  // a record y of the dmy kind

typedef struct dmy date; // Rename struct dmy -> date
date x, y; // Create instances of the struct


//? Complete the code of the eventend function.

// date eventend (date beginnig, int duration) {
//    int date_end;
//    end.day;
//    end.month;
//    end.year;
//    return end;
// }


int main (void) 
{
    date a, b;
    printf(" Dia Mes e Ano: ");
    scanf ("%d %d %d", &a.day, &a.month, &a.year);
    // &a.day means &(a.day)

    
    int duration;
    scanf ("%d", &duration);
    b = eventend (a, duration);
    printf ("%d %d %d\n", b.day, b.month, b.year);


    return 0;
}