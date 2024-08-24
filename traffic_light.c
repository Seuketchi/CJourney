#include <stdio.h>
#include <unistd.h>  // for sleep function


int main() {
    while (1)
    {
        printf("Red\n");
        sleep(5);
        printf("Yellow\n");
        sleep(5);
        printf("Green\n");
        sleep(2);
    }
    
    
    return 0;
}