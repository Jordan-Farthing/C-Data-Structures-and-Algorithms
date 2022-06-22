#include "../DataStructuresProject.h"

//When using this program change definition of Array using comment in ArrayADT.h

//int main()
//{
//	struct Array arr1;
//	arr1.length = 0;
//	int ch;
//	int x, index;
//	printf("Enter Size of Array ");
//	scanf_s("%d", &arr1.size);
//	arr1.A = (int*)malloc(arr1.size * sizeof(int));
//	do {
//		printf("Menu\n");
//		printf("1. Insert\n");
//		printf("2. Delete\n");
//		printf("3. Search\n");
//		printf("4. Sum\n");
//		printf("5. Display\n");
//		printf("6. Exit\n");
//
//		printf("enter your choice ");
//		scanf_s("%d", &ch);
//
//		switch (ch)
//		{
//		case 1: printf("Enter an element and index ");
//			scanf_s("%d%d", &x, &index);
//			Insert(&arr1, index, x);
//			break;
//		case 2: printf("Enter index ");
//			scanf_s("%d", &index);
//			x = Delete(&arr1, index);
//			printf("Deleted Element is %d\n", x);
//			break;
//		case 3: printf("Enter element to search ");
//			scanf_s("%d", &x);
//			index = LinearSearch(&arr1, x);
//			printf("Element Index is %d \n", index);
//			break;
//		case 4: printf("Sum is %d\n", Sum(arr1));
//			break;
//		case 5:Display(arr1);
//		}
//	} while (ch < 6);
//	return 0;
//}