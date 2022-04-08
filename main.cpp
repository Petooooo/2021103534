//
//  main.cpp
//  wws
//
//  Created by 진재영 on 2022/04/08.
//

#include <iostream>

using namespace std;

int main(void){
    
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d X %d = %d\t", i, j, (i*j));
        }
        printf("\n");
    }
    return 0;
}
