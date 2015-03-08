#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono> 

int main() {
	printf("hello from seperate process");
    for (int i = 0; i < 100; i++) {
        printf("yes %d\n",i);
        fflush(stdout);
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    return 0;
}