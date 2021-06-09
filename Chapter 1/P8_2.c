/* 摄氏温度转换为华氏温度（0~300，步长为 20） */

#include <stdio.h>

main(){
    int fahr;
    int celsius;

    int lower = 0;
    int upper = 300;
    int step = 20; 

    celsius = lower;
    while(celsius <= upper){
        fahr = (9./5.)*celsius + 32; // 摄氏转华氏公式
        printf("%d\t%d\n", celsius, fahr);
        celsius += step;
    }

    getchar();
    return 0;
}