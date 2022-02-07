#include <stdio.h>

typedef struct radio{
    int station;
    int frequency_HZ;
    char station_NAME[20];
}walker;

int main(){
    walker w1 = {2, 56, "mirchi"}, w2;
    w2 = w1;

    printf("%d %d %s\n", w2.station, w2.frequency_HZ, w2.station_NAME);
    
    return 0;
}