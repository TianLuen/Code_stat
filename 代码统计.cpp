#include<bits/stdc++.h>
using namespace std;
char ops[]="!@#$%^&*()_+-={}|:\"<>?[]\\;',./~`";
int main()
{
	printf("�뽫�ļ����뱾�����С�\n");
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
    printf("ͳ����Ϣ��\nȫ�Ĺ���%d���ַ�\n\n����Сд��ĸ��%d��\n��д��ĸ��%d��\nӢ����ĸ����%d��\n\n",all,a_z,A_Z,a_z+A_Z);
    printf("��������%d��\n������ͨ����%d��\n���пհ��ַ����ո񡢻��С��Ʊ�%d��\n\n",num,op,space);
    printf("����δ֪�ַ�����%d��\n\n",all-a_z-A_Z-num-space-op);
	long flen=strlen(fl);
	if(fl[flen-1]=='p'&&fl[flen-2]=='p'&&fl[flen-3]=='c'&&fl[flen-4]=='.')
		printf("���ļ�����Ϊ��C++ File");
	else if(fl[flen-1]=='y'&&fl[flen-2]=='p'&&fl[flen-3]=='.')
		printf("���ļ�����Ϊ��Python File");
	else if(fl[flen-1]=='c'&&fl[flen-2]=='.')
		printf("���ļ�����Ϊ��C File");
	else if(fl[flen-1]=='s'&&fl[flen-2]=='a'&&fl[flen-3]=='p'&&fl[flen-4]=='.')
		printf("���ļ�����Ϊ��Pascal File");
	else if(fl[flen-1]=='n'&&fl[flen-2]=='i'&&fl[flen-3]=='b'&&fl[flen-4]=='.')
		printf("���ļ�����Ϊ���������ļ�");
	else if(fl[flen-1]=='t'&&fl[flen-2]=='a'&&fl[flen-3]=='b'&&fl[flen-4]=='.')
		printf("���ļ�����Ϊ���������ļ�");
	else if(fl[flen-1]=='d'&&fl[flen-2]=='m'&&fl[flen-3]=='c'&&fl[flen-4]=='.')
		printf("���ļ�����Ϊ���������ļ�");
	else if(fl[flen-1]=='t'&&fl[flen-2]=='x'&&fl[flen-3]=='t'&&fl[flen-4]=='.')
		printf("���ļ�����Ϊ���ı��ĵ�");
	else
		printf("���ļ�����Ϊ��δ֪��ʽ����ı��ļ�");
	
    Goto:goto Goto;
}
