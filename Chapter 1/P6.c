/* 华氏温度转换为摄氏温度（0~300，步长为 20）浮点数版本 */

#include <stdio.h>

main(){
    float fahr;
    float celsius;

    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = (5./9.)*(fahr-32.);           // 如果 / 两侧都是整型数，那么结果也将是整型数（直接舍位）
        printf("%3.0f %6.1f\n", fahr, celsius); // 如果在 printf 函数的第一个参数中指明打印宽度，那么打印的数字会在打印区域内右对齐
        fahr += step;
    }

    getchar();
    return 0;
}