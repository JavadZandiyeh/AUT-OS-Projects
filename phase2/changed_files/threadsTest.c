#include "types.h"
#include "stat.h"
#include "user.h"

void childPrint(void* args){
    printf(1, "hi childes function executed properly with argument : %d\n", *(int*)args);
}

int main(void){
    int argument = 0x0F01; // 3841 decimal
    int thread_id = thread_creator(&childPrint, (void*)&argument);
    if(thread_id < 0)
        printf(1, "thread_creator failed");

    thread_wait();

    printf(1, "thread_id : %d\n", thread_id);

    exit();
}
