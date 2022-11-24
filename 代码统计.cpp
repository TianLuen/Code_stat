#include<bits/stdc++.h>
using namespace std;
char ops[]="!@#$%^&*()_+-={}|:\"<>?[]\\;',./~`";
int main()
{
	printf("请将文件拖入本程序中。\n");
	char fl[1000];
	scanf("%s",fl);
	freopen(fl,"r",stdin);
    int all=0,a_z=0,A_Z=0,num=0,space=0,op=0;
    long len=sizeof ops;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        all++;
        a_z+=('a'<=ch&&ch<='z');
        A_Z+=('A'<=ch&&ch<='Z');
        num+=('0'<=ch&&ch<='9');
        space+=(ch==' '||ch=='\t'||ch=='\n'||ch=='\r');
        for(int i=0;i<len;i++)
        	if(ch==ops[i])
        		op++;
    }
    printf("统计信息：\n全文共有%d个字符\n\n其中小写字母有%d个\n大写字母有%d个\n英文字母共有%d个\n\n",all,a_z,A_Z,a_z+A_Z);
    printf("共有数字%d个\n共有普通符号%d个\n共有空白字符（空格、换行、制表）%d个\n\n",num,op,space);
    printf("其它未知字符共有%d个\n\n",all-a_z-A_Z-num-space-op);
	long flen=strlen(fl);
	if(fl[flen-1]=='p'&&fl[flen-2]=='p'&&fl[flen-3]=='c'&&fl[flen-4]=='.')
		printf("该文件类型为：C++ File");
	else if(fl[flen-1]=='y'&&fl[flen-2]=='p'&&fl[flen-3]=='.')
		printf("该文件类型为：Python File");
	else if(fl[flen-1]=='c'&&fl[flen-2]=='.')
		printf("该文件类型为：C File");
	else if(fl[flen-1]=='s'&&fl[flen-2]=='a'&&fl[flen-3]=='p'&&fl[flen-4]=='.')
		printf("该文件类型为：Pascal File");
	else if(fl[flen-1]=='n'&&fl[flen-2]=='i'&&fl[flen-3]=='b'&&fl[flen-4]=='.')
		printf("该文件类型为：二进制文件");
	else if(fl[flen-1]=='t'&&fl[flen-2]=='a'&&fl[flen-3]=='b'&&fl[flen-4]=='.')
		printf("该文件类型为：批处理文件");
	else if(fl[flen-1]=='d'&&fl[flen-2]=='m'&&fl[flen-3]=='c'&&fl[flen-4]=='.')
		printf("该文件类型为：批处理文件");
	else if(fl[flen-1]=='t'&&fl[flen-2]=='x'&&fl[flen-3]=='t'&&fl[flen-4]=='.')
		printf("该文件类型为：文本文档");
	else
		printf("该文件类型为：未知格式或非文本文件");
	
    Goto:goto Goto;
}
