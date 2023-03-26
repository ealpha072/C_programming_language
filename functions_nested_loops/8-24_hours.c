/*
Write a function that prints every minute of the day of Jack Bauer,
starting from 00:00 to 23:59.

Prototype: void jack_bauer(void);
*/

void jack_bauer(){
    int hour, minute;

    for (hour = 0; hour < 24; hour++){
        for(minute = 0; minute < 60; minute++){
            printf("%02d:%02d\n", hour, minute);
        }
    }
}

int main(){
    jack_bauer();
}
