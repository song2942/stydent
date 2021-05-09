#include<stdio.h>
#include<stdlib.h>

//快速排序
void rapid(int * arr ,int length ,int portion , int left_size) {
	//规则：
	//	1.首先设定一个分界值，通过该分界值将数组分成左右两部分。
	//	2.将大于或等于分界值的数据集中到数组右边，小于分界值的数据集中到数组的左边。此时，左边部分中各元素都小于或等于分界值，而右边部分中各元素都大于或等于分界值。
	//	3.然后，左边和右边的数据可以独立排序。对于左侧的数组数据，又可以取一个分界值，将该部分数据分成左右两部分，同样在左边放置较小值，右边放置较大值。右侧的数组数据也可以做类似处理。
	//	4.重复上述过程，可以看出，这是一个递归定义。通过递归将左侧部分排好序后，再递归排好右侧部分的顺序。当左、右两个部分各数据排序完成后，整个数组的排序也就完成了
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
	//获取用户输入
	int data[10] = { 0 }; //初始化数组
	int input;
	printf("请输入10个整型数字：\n");
	int number = 0;
	while (number < 10)
	{
		int type = scanf_s("%d", &input); //返回值应该是用于判断是否执行成功的状态
		data[number] = input;
		number++;
	}
	//获取数组的长度
	int length_data = sizeof(data) / sizeof(data[0]);
	//排序前输出
	printf("排序前的数字\n");
	for (int i = 0; i < length_data; i++)
	{
		printf("%d  ", data[i]);
	}
	printf("\n");

	////算法--冒泡
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


	////算法--选择排序
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


	////算法--插入排序
	//int over = 1;
	//while (over < length_data)
	//{
	//	for (int i = over - 1; i >= 0; i--)
	//	{
	//		//判断选中的数应该在的位置
	//		if ((data[over] < data[i] && i - 1 < 0) || (data[over] < data[i] && data[over] > data[i - 1])) {
	//			//移动
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

	//快速排序
	rapid(data, length_data , 0 , 0);


	//排序后输出
	printf("\n排序后的数字\n");
	for (int i = 0; i < length_data; i++)
	{
		printf("%d  ", data[i]);
	}


	//printf("\n");
	//system("pause");
	return 0;
}