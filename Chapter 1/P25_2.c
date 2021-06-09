/* 编写程序将较长的输入行"折"成短一些的行，折行的位置在输入行的第 n 列之前的最后一个非空格符之后 */

#include <stdio.h>

#define TABINC 8                           // 每 8 位出现一个制表符终止位
#define MAXCOL 10                          // 每行的最大长度

char line[MAXCOL];                         // 输入行

int exptab(int pos);
int findblank(int pos);
int newpos(int pos);
void print1(int pos);

main() {
	int c;                                 // 存储键入值
	int pos = 0;                           // position in the line

	while ((c = getchar()) != EOF) {
		line[pos] = c;                     // store current character

		if (c == '\t')                     // expand tab character
			pos = exptab(pos);
		else if (c == '\n') {
			print1(pos);                   // print current input line
			pos = 0;
		}
		else if (++pos >= MAXCOL) {
			pos = findblank(pos);
			print1(pos);
			pos = newpos(pos);
		}
	}
}

/* print line until pos column */
void print1(int pos)
{
	for (int i = 0; i < pos; i++)
		putchar(line[i]);

	if (pos > 0)
		putchar('\n');    // 换行
}

/* expand tab into blanks */
int exptab(int pos)
{
	line[pos] = ' ';     // tab is at least one blank
	for (pos++; pos < MAXCOL && pos % TABINC != 0; pos++)
		line[pos] = ' ';

	if (pos < MAXCOL)   // room left in current line
		return pos;
	else {              // current line is full
		print1(pos);
		return 0;
	}
}

/* find blank's position */
int findblank(int pos)
{
	// 从输入行的 pos 处开始倒退着寻找一个空格
	while (pos > 0 && line[pos] != ' ')
		pos--;
	if (pos == 0)       // 没找到空格
		return MAXCOL;  
	else
		return pos + 1; // 找到了空格
}

/* rearrange line with new positon */
int newpos(int pos)
{
	int i, j;

	if (pos <= 0 || pos >= MAXCOL)
		return 0;       // nothing to rearrange
	else {
		i = 0;
		// 把从位置 pos 开始的字符复制到下一个输出行的开始
		for (j = pos; j < MAXCOL; j++) {
			line[i] = line[j];
			i++;
		}
		return i;       // 返回变量 pos 的新值
	}
}