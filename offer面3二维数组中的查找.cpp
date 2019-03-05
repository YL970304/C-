#if 0
#include<iostream>
using namespace std;

bool FindKey(int (*brr)[4], int Row, int Col, int key)
{
	for(int i = 0; i < Row; i++)  //��
	{
		for(int j = 0; j < Col; j++)  //��
		{
			if(brr[i][j] > key)
			{
				Col = j;
			}
			if(brr[i][j] == key)
			{
				return true;
			}
		}
	}
	return false;
}

//��Ϊ�����Ŀ�涨���������У�����˵������Ļ����ϲ��ң�һ��Ҫ�뵽���ֲ���
bool SearchValue(int *brr, int left, int right, int key)
{
	int mid = (right - left +1)/2 + left;
	if(brr[mid] < key)
	{
		SearchValue(brr,mid+1,right,key);
	}
	else if(brr[mid] > key)
	{
		SearchValue(brr,left, mid -1, key);
	}
	else
	{
		return true;
	}
	return false;
	
}


bool BinaryFind(int *brr, int n, int key)
{
	if(brr == NULL || n < 2)
		return false;
	return SearchValue(brr, 0, n-1, key);
}


bool BinarySearch(int *brr, int len, int key)
{
	int left = 0;
	int right = len - 1;
	int mid = (right - left +1)/2 + left;
	while(left <= right)
	{
		int mid = (right - left +1)/2 + left;
		if(brr[mid] < key)
		{
			left = mid + 1;
		}
		else if(brr[mid] > key)
		{
			right = mid-1;
		}
		else
			return true;
	}
	return false;
}

int main()
{
	int arr[][4] = {1,2,8,9,2,4,9,12,2,4,9,12,4,7,10,13,6,8,11,15};//�����ά����ʱ���п���ʡ�Բ�д�������е�һ��Ҫд

	cout<<FindKey(arr,4,4,7)<<endl;

	//cout<<FindKey(arr,4,4,5)<<endl;

	/*int brr[] = {1,2,8,9,2,4,9,12,2,4,9,12,4,7,10,13,6,8,11,15};
	cout<<BinarySearch(brr,16, 21)<<endl;
	cout<<BinaryFind(brr,16,21)<<endl;*/
	return 0;
#endif