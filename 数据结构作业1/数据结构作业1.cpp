// 数据结构作业1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//此程序实现从scores.txt读取数据进行操作，并将操作结果写入scoresAnalysis.txt中

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#define MAX_LINE 16  //文件行数
using namespace std;


//定义结构体studentInfo
struct studentInfo
{
	char name[10];
	int nanlysis;
	int algebra;
	int analGeo;
	double Average;
};

int main()
{
	studentInfo student[MAX_LINE];//定义studentInfo结构体数组
	char name[10];//学生姓名缓存
	int l = 31;//跳过标题行
	FILE *fp1;
	//D:\\users\\lenovo\\source\\数据结构作业源代码\\数据结构作业1
	fp1 = fopen("scores.txt","r");//创建文件句柄，打开用于读取数据
	if (fp1 == NULL)//判断是否成功打开文档
		cout << "打开失败" << endl;
	//读取学生姓名
	fseek(fp1, l, SEEK_SET);//文件指针移动到距文档开头l个偏移量
	int i = 0;
	while (fscanf(fp1, "%s%d%d%d", name,&student[i].nanlysis,&student[i].algebra,&student[i].analGeo) != EOF)//遍历文档读取学生姓名直到文档末尾
	{
		
		strcpy(student[i].name, name);//将学生姓名存入结构体
		i++;
	}
	fclose(fp1);
	//求学生平均成绩*/
	double s1=0, s2=2, s3=0;
	for (int n = 0; n < 15; n++)
	{
		student[n].Average = (student[n].nanlysis + student[n].algebra + student[n].analGeo) / 3.0;
		s1 += student[n].nanlysis;
		s2 += student[n].algebra;
		s3 += student[n].analGeo;
	}
	//写入文档scoresAnalysis.txt中
	FILE *ftp;
	ftp = fopen("scoresAnalysis.txt", "w");//创建文件句柄，用于写入
	if (ftp != NULL)
	{
		fprintf(ftp, "%s\t\t%s\t%s\t%s\t%s\n", "姓名","数学分析","高等代数 ","解析几何","平均成绩");//将字符串格式输入文档
		for (int i = 0; i < 15; i++)
			fprintf(ftp, "%s\t\t%d\t\t%d\t\t%d\t\t%.1f\n", student[i].name, student[i].nanlysis, student[i].algebra, student[i].analGeo, student[i].Average);
		fprintf(ftp, "%s\t%.1f\t\t%.1f\t\t%.1f\n", "各科平均成绩", s1 / 15, s2 / 15, s3 / 15);
	}
	else
		cout << "写入失败" << endl;
	fclose(ftp);
	//向屏幕打印文档scoresAnalysis.txt中的情况
	FILE *f;
	f= fopen("scoresAnalysis.txt", "r");
	char buf[20];
	cout << "scoresAnalysis.txt中的数据" << endl;
	if (f != NULL)
	{
		while (fgets(buf, 20, f) != NULL)
		{
			cout << buf;
		}
	}
	else
		cout << "打开失败" << endl;
	cout << "=========================" << endl;
	cout << "Sp指向结构体读取scoresAnalysis.txt数据并输出" << endl;
	FILE *f2;
	f2 = fopen("scoresAnalysis.txt", "r");
	studentInfo *Sp = new studentInfo;
	char buf2[44];
	fgets(buf2, 44, f2);
	cout << buf2 ;
	for (int i = 0; i < 15; i++)
	{
		fscanf(f2, "%s%d%d%d%lf", &Sp->name,&Sp->nanlysis,&Sp->algebra,&Sp->analGeo,&Sp->Average);
		printf("%s\t\t%d\t\t%d\t\t%d\t\t%.1f\n", Sp->name, Sp->nanlysis, Sp->algebra, Sp->analGeo, Sp->Average);
	}
	fclose(f2);
	
	return 0;
}