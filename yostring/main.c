//
//  main.c
//  yostring
//
//  Created by Edwin Cardenas on 27/01/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char x = '!';
    
    while (x <= '~') {
        printf("%x is %c\n", x, x);
        
        x++;
    }
    
    char *start = malloc(5);
    
    *start = 'L';
    *(start + 1) = 'o';
    *(start + 2) = 'v';
    *(start + 3) = 'e';
    *(start + 4) = '\0';
    
    printf("%s has %zu characters\n", start, strlen(start));
    printf("The third letter is %c\n", *(start + 2));
    
    free(start);
    start = NULL;

    return 0;
}
