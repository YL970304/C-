#include<iostream>
#include<string>
using namespace std;
//1����i=0��ʼ������������ո����������ʱi��λ��Ҫ��\0��
//2���µ����鳤�Ⱦ͵ȶȾɵ����鳤��+�ո���*2��j �� �³��ȵ�λ��
//3���ڱ�֤i>0��i<j�������£�arr[i]��arr[j]λ�õ�ֵ���бȽϣ����Ϊ�վͰ�20%���ȥ��ÿ����һ���ַ���Ҫj--,����֮��i��ʼ�������iλ�ò�Ϊ�գ��Ͱ�i����ֵ����jλ��
#if 0
//C����
void Replace(char *arr, int len, int length)
{
	if(arr == NULL || length < 0)
	{
		return ;
	}
	int countBlank = 0;
	int index1 =0;
	int index2 = 0;
	while(arr[index1] != '\0')
	{
		if(arr[index1] == ' ')
		{
			countBlank++;
		}
		index1++;
	}
	int newLength = len + countBlank*2;
	if(newLength > length )
	{
		return ;
	}
	index2 = newLength;
	while(index1 > 0 && index1 < index2)
	{
		if(arr[index1] == ' ')
		{
			arr[index2--] = '0';
			arr[index2--] = '2';
			arr[index2--] = '%';
			index1--;
		}
		else
		{
			arr[index2--] = arr[index1--];
		}
	}
	int i = 0;
	while(arr[i] != '\0')
	{
		printf("%c",arr[i]);
		i++;
	}
	printf("\n");
}
#endif

#if 0
//C++
class Replace
{
public:
	void FullBlank(char *arr, int len, int length)
{
	if(arr == NULL || length < 0)
	{
		return ;
	}
	int countBlank = 0;
	int index1 =0;
	int index2 = 0;
	while(arr[index1] != '\0')
	{
		if(arr[index1] == ' ')
		{
			countBlank++;
		}
		index1++;
	}
	int newLength = len + countBlank*2;
	if(newLength > length )
	{
		return ;
	}
	index2 = newLength;
	while(index1 > 0 && index1 < index2)
	{
		if(arr[index1] == ' ')
		{
			arr[index2--] = '0';
			arr[index2--] = '2';
			arr[index2--] = '%';
			index1--;
		}
		else
		{
			arr[index2--] = arr[index1--];
		}
	}
	int i = 0;
	while(arr[i] != '\0')
	{
		cout<<arr[i];
		i++;
	}
	cout<<endl;
}
};
#endif

#if 0
//ֱ�ӵ���string���е�replace����
//ԭ�ͣ� **string& replace(size_t pos, size_t len, const string &str)
string ReplaceSpace(string iniString, int length)
{
	if(length <= 0) //�ַ�������Ϊ��ʱ�������ж�
	{
		return NULL;
	}
	string tag = " ";
	for(size_t i = 0; i<iniString.size(); i++)
	{
		if(iniString[i] == ' ')
		{
			iniString.replace(i,tag.size(),"%20"); //tag.size()����ո�ĸ���
		}
	}
	return iniString;
}


int main()
{
	char s[100] = "h l o d";
	Replace(s,strlen(s),sizeof(s)/sizeof(s[0]));
	/*Replace re;
	re.FullBlank(s,strlen(s),sizeof(s)/sizeof(s[0]));*/
	/*string str = "we are  happy!";
	cout<<ReplaceSpace(str,strlen(s));*/
	return 0;
}
#endif


