/* 华氏温度转换为摄氏温度（0~300，步长为 20）打印标题版本 */

#include <stdio.h>

main(){
    float fahr;
    float celsius;

    int lower = 0;
    int upper = 300;
    int step = 20; 

    printf("Fahrenheit to Celsius\n"); // 打印标题行
    fahr = lower;
    while(fahr <= upper){
        celsius = (5./9.)*(fahr-32.);
        printf("%3.0f %6.1f\n", fahr, celsius); 
        fahr += step;
    }

    getchar();
    return 0;
}