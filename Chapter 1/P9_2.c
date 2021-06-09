/* 华氏温度转换为摄氏温度（0~300，步长为 20）for 循环版 符号常量版 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main(){
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr += STEP) // 常量不需要声明
        printf("%3d %6.1f\n", fahr, (5./9.)*(fahr-32));

    getchar();
    return 0;
}