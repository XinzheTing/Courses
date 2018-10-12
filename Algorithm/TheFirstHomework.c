//冒泡排序、快速排序、归并排序的时间比较
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#define N 200000 //生成的数据量（数组大小）
#define n 10000  //每次循环处理的数据
int array[N], tempA[N];
void BubbleSort(int array[], int a) //冒泡排序
{
    int i, j, tag = 0, tem;
    for (i = n * a; i < n * (a + 1); i++)
    {
        for (j = n * a; j < n * (a + 1) + n * a - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tem = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tem;
                tag = 1;
            }
        }
        if (tag == 0)
            return;
        else
            tag = 0;
    }
}

void QuickSort(int array[], int left, int right)
{
    if (left >= right)
        return;
    int i = left;
    int j = right;
    int key = array[left];
    while (i < j)
    {
        while (i < j && (key <= array[j]))
            j--;
        array[i] = array[j];
        while (i < j && (key >= array[i]))
            i++;
        array[j] = array[i];
    }
    array[left] = array[i];
    array[i] = key;
    QuickSort(array, left, i - 1);
    QuickSort(array, i + 1, right);
}

void Merge(int array[], int tempA[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = left;
    while (i != mid + 1 && j != right + 1)
    {
        if (array[i] > array[j])
            tempA[k++] = array[j++];
        else
            tempA[k++] = array[i++];
    }
    while (i != mid + 1)
        tempA[k++] = array[i++];
    while (j != right + 1)
        tempA[k++] = array[j++];
    for (i = left; i <= right; i++)
        array[i] = tempA[i];
}
void MergeSort(int array[], int tempA[], int l, int r)
{
    int m;
    if (l < r)
    {
        m = (l + r) / 2;
        MergeSort(array, tempA, l, m);
        MergeSort(array, tempA, m + 1, r);
        Merge(array, tempA, l, m, r);
    }
}
int *readdat(int array[], char str[]) //读取数据到数组
{
    FILE *fout;
    fout = fopen(str, "r");
    if (fout == NULL)
        printf("Not Found!");
    for (int i = 0; i < N; i++)
    {
        fscanf(fout, "%d", &array[i]);
    }
    return array;
}
int main()
{
    int i, num;
    int c; //用于switch选择顺序、倒序、乱序或等值
    clock_t start1, start2, start3, end1, end2, end3;
    double dur1 = 1, dur2 = 1, dur3 = 1;
    FILE *fdat;
    char name[13] = {"firsthw.dat"};
    fdat = fopen(name, "w");
    printf("1.In Order\n2.Reverse Order\n3.Out of Order\n4.Equal\nEnter the number:");
    scanf("%d", &c);
    //生成数据文件。
    printf("Generating Data files...\n");
    switch (c)
    {
    case 1:
        for (i = 0; i < N; i++)
            fprintf(fdat, "%d ", i);
        break;
    case 2:
        for (i = N; i > 0; i--)
            fprintf(fdat, "%d ", i);
        break;
    case 3:
        srand((unsigned)time(NULL));
        for (i = 0; i < N; i++)
        {
            num = rand() % 1001;
            fprintf(fdat, "%d ", num);
        }
        break;
    case 4:
        for (i = 0; i < N; i++)
            fprintf(fdat, "%d ", 7);
        break;
    default:
        printf("no such a choice");
        getchar();
        getchar();
        return 0;
    }
    fclose(fdat);
    printf("Runnig QuickSort...\n");
    readdat(array, name);
    start1 = clock();
    for (i = 0; i <= N / n - 1; i++)
        QuickSort(array, n * i, n * (i + 1) - 1);
    end1 = clock();
    dur1 = (end1 - start1); // CLOCKS_PER_SEC;

    printf("Runnig BubbleSort...\n");
    readdat(array, name);
    start2 = clock();
    for (i = 0; i <= N / n - 1; i++)
        BubbleSort(array, i);
    //sleep(1);
    end2 = clock();
    dur2 = (end2 - start2); // CLOCKS_PER_SEC;

    printf("Runnig MergeSort...\n");
    readdat(array, name);
    start3 = clock();
    for (i = 0; i <= N / n - 1; i++)
        MergeSort(array, tempA, n * i, n * (i + 1) - 1);
    end3 = clock();
    dur3 = (end3 - start3); // CLOCKS_PER_SEC;

    printf("clock cycle:\nQuickSort%f\nBubbleSoet:%f\nMergeSort%f\n", dur1, dur2, dur3);
    getchar();
    getchar();
    return 0;
}