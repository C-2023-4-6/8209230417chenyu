#include <iostream>
#include <algorithm> 
void sortArray(int* array, int size);
void printArray(const int* array, int size);

int main() {
    int* dynamicArray = nullptr;
    int size, i;

    std::cout << "请输入数组的大小：";
    std::cin >> size;

    dynamicArray = new int[size];

    std::cout << "请输入数组的元素（空格分隔）：";
    for (i = 0; i < size; ++i) {
        std::cin >> dynamicArray[i];
    }

    sortArray(dynamicArray, size);

    std::cout << "排序后的数组：\n";
    printArray(dynamicArray, size);
    delete[] dynamicArray;
    return 0;
}
void sortArray(int* array, int size) {
    std::sort(array, array + size);
}
void printArray(const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
