//
//  main.c
//  DailyTaskManager
//
//  Created by Fergus Cooney on 13/11/2013.
//  Copyright (c) 2013 Fergus Cooney. All rights reserved.
//

#include <stdio.h>
#include <libc.h>
#include <stdlib.h>

void performDailyTasks();

int main(int argc, const char * argv[])
{
    system("clear");
    while(1){
        performDailyTasks();
        sleep(1);
        system("clear");
    }
    return 0;
}

void performDailyTasks(){
    printf("Eat\n");
    sleep(1);
    printf("Sleep\n");
    sleep(1);
    printf("Rave\n");
    sleep(1);
    printf("Repeat\n");
}

