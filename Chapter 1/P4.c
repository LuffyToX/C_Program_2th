/* 华氏温度转换为摄氏温度（0~300，步长为 20） */

#include <stdio.h>

main(){
    int fahr;          // 华氏温度
    int celsius;       // 摄氏温度

    int lower = 0;     // 温度下限
    int upper = 300;   // 温度下限
    int step = 20;     // 步长

    fahr = lower;
    while(fahr <= upper){
        celsius = 5*(fahr-32)/9; // 华氏转摄氏公式
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }

    getchar();
    return 0;
}