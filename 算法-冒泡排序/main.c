#include<stdio.h>
#include<stdlib.h>

//��������
void rapid(int * arr ,int length ,int portion , int left_size) {
	//����
	//	1.�����趨һ���ֽ�ֵ��ͨ���÷ֽ�ֵ������ֳ����������֡�
	//	2.�����ڻ���ڷֽ�ֵ�����ݼ��е������ұߣ�С�ڷֽ�ֵ�����ݼ��е��������ߡ���ʱ����߲����и�Ԫ�ض�С�ڻ���ڷֽ�ֵ�����ұ߲����и�Ԫ�ض����ڻ���ڷֽ�ֵ��
	//	3.Ȼ����ߺ��ұߵ����ݿ��Զ������򡣶��������������ݣ��ֿ���ȡһ���ֽ�ֵ�����ò������ݷֳ����������֣�ͬ������߷��ý�Сֵ���ұ߷��ýϴ�ֵ���Ҳ����������Ҳ���������ƴ���
	//	4.�ظ��������̣����Կ���������һ���ݹ鶨�塣ͨ���ݹ齫��ಿ���ź�����ٵݹ��ź��Ҳಿ�ֵ�˳�򡣵������������ָ�����������ɺ��������������Ҳ�������
	int less = 0;
	int greater = 0;
	if (length < 2) { 
		return;
	}
	for (int i = portion + 1; i < 10; i++) 
	{
		if (arr[i] < arr[portion]) {
			int tmp = arr[i];
			for (int j = portion + greater; j >= portion; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[portion] = tmp;
			portion++;
			less++;
		}
		else if (arr[i] >= arr[portion]) {
			greater++;
		}
	}
	if (less == 0) {
		left_size++;
	}
	rapid(arr, less, 0 + left_size, left_size);
	rapid(arr, greater, less + left_size, left_size);
}

int main()
{
	//��ȡ�û�����
	int data[10] = { 0 }; //��ʼ������
	int input;
	printf("������10���������֣�\n");
	int number = 0;
	while (number < 10)
	{
		int type = scanf_s("%d", &input); //����ֵӦ���������ж��Ƿ�ִ�гɹ���״̬
		data[number] = input;
		number++;
	}
	//��ȡ����ĳ���
	int length_data = sizeof(data) / sizeof(data[0]);
	//����ǰ���
	printf("����ǰ������\n");
	for (int i = 0; i < length_data; i++)
	{
		printf("%d  ", data[i]);
	}
	printf("\n");

	////�㷨--ð��
	//int index1 = length_data - 1;
	//while (index1) {
	//	for (int i = 0; i < index1; i++)
	//	{
	//		if (data[i] > data[i + 1]) {
	//			int tmp = data[i];
	//			data[i] = data[i + 1];
	//			data[i + 1] = tmp;
	//		}
	//	}
	//	index1--;
	//}


	////�㷨--ѡ������
	//int over = 0;
	//while (over < length_data) {
	//	int min_index = over;
	//	for (int i = over + 1; i < length_data; i++)
	//	{
	//		if (data[i] < data[min_index]) {
	//			min_index = i;
	//		}
	//	}
	//	int tmp = data[over];
	//	data[over] = data[min_index];
	//	data[min_index] = tmp;
	//	over++;
	//}


	////�㷨--��������
	//int over = 1;
	//while (over < length_data)
	//{
	//	for (int i = over - 1; i >= 0; i--)
	//	{
	//		//�ж�ѡ�е���Ӧ���ڵ�λ��
	//		if ((data[over] < data[i] && i - 1 < 0) || (data[over] < data[i] && data[over] > data[i - 1])) {
	//			//�ƶ�
	//			int tmp = data[over];
	//			for (int j = over; j >= i; j--)
	//			{
	//				data[j] = data[j - 1];
	//			}
	//			data[i] = tmp;
	//		}
	//	}
	//	over++;
	//}

	//��������
	rapid(data, length_data , 0 , 0);


	//��������
	printf("\n����������\n");
	for (int i = 0; i < length_data; i++)
	{
		printf("%d  ", data[i]);
	}


	//printf("\n");
	//system("pause");
	return 0;
}