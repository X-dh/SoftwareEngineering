#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void CharCount(char path[]);  //字符统计函数
void WordCount(char path[]);  //单词统计函数
void LineCount(char path[]);  //行数统计函数
void Muiltiple(char path[]);  //综合统计函数，包括代码行，空行，注释行
int main()
{
    char input[100],path[50];
    gets(input);
    int count=strlen(input);
    strncpy(path, input + 10,  count - 10);//将命令行输入的地址赋值给path
    path[count - 9] = '\0';//路径结尾添加结束符，避免统计类型时出错
    int check = 1;
    //检查类型
    while (check)
    {
        int i = 7;
        if ((input[i] == '-') && (input[i + 1] == 'c'))
        {
            CharCount(path);
            break;
        }
        if ((input[i] == '-') && (input[i + 1] == 'w'))
        {
            WordCount(path);
            break;
        }
        if ((input[i] == '-') && (input[i + 1] == 'l'))
        {
            LineCount(path);
            break;
        }
        if ((input[i] == '-') && (input[i + 1] == 'a'))
        {
            Muiltiple(path);
            break;
        }
    }
    return 0;
}
