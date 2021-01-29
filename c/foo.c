// Compile with `gcc foo.c -std=c99 -lpthread`, or use the makefile

#include <pthread.h>
#include <stdio.h>

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    int i = 0;
    while (i < 1000000 ) {
        i++;
    }
    return NULL;
}

void* decrementingThreadFunction(){
    int i = 0;
    while (i < 1000000 ) {
        i--;
    }
    return NULL;
}


int main(){
    printf("The magic number is: %d\n");
    pthread_t incrementingThread;
    pthread_t decrementingThread;
    // TODO: declare incrementingThread and decrementingThread (hint: google pthread_create)
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}
