//
//  main.c
//  HackerQuoteStaff
//
//  Created by Napat on 3/12/2559 BE.
//  Copyright © 2559 MithTaParb-KarnProgram. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void primeProblem(int n)
{
    printf("%d", n);
}

void loadProblem(char load_input[300], int n)
{
    if(!strcmp(load_input, "PRIME")) {
        primeProblem(n);
    }
    //bla bla bla
}

int main(int argc, const char * argv[]) {
    char load_input[300];
    int n_input;
    
    printf("load:");
    scanf("%s", load_input);
    
    printf("n:");
    scanf("%d", &n_input);
    
    loadProblem(load_input, n_input);
    
    return 0;
}
