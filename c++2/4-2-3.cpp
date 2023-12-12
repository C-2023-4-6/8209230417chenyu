#include <iostream>
#include <algorithm> 
void sortArray(int* array, int size);
void printArray(const int* array, int size);

int main() {
    int* dynamicArray = nullptr;
    int size, i;

    std::cout << "����������Ĵ�С��";
    std::cin >> size;

    dynamicArray = new int[size];

    std::cout << "�����������Ԫ�أ��ո�ָ�����";
    for (i = 0; i < size; ++i) {
        std::cin >> dynamicArray[i];
    }

    sortArray(dynamicArray, size);

    std::cout << "���������飺\n";
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
