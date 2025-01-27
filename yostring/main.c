//
//  main.c
//  yostring
//
//  Created by Edwin Cardenas on 27/01/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char x = 0x21;
    
    while (x <= 0x7e) {
        printf("%x is %c\n", x, x);
        
        x++;
    }

    return 0;
}
