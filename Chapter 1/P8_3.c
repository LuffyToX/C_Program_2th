/* 华氏温度转换为摄氏温度（0~300，步长为 20）for 循环版 */

#include <stdio.h>

main(){
    int fahr;

    for(fahr = 0; fahr <= 300; fahr += 20) // for 循环
    printf("%3d %6.1f\n", fahr, (5./9.)*(fahr-32));

    getchar();
    return 0;
}