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
    
    const char *start = "Love";
    
//    start[2] = "z"; compiler error if const, runtime error if not
    
    printf("%s has %zu characters\n", start, strlen(start));
    printf("The third letter is %c\n", start[2]);

    return 0;
}
