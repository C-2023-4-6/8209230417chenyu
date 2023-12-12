#include <iostream>


int indexOf(const char s1[], const char s2[]) {
    int i = 0, j = 0;

    while (s2[i] != '\0') {
        if (s1[j] == s2[i]) {
            int originalI = i;
            while (s1[j] != '\0' && s1[j] == s2[i]) {
                j++;
                i++;
            }
            if (s1[j] == '\0') {
                return originalI;
            }
            j = 0;  
            i = originalI + 1;
        }
        else {
            i++;
        }
    }

    return -1;
}

int main() {
    const int maxSize = 100;  
    char s1[maxSize], s2[maxSize];

    std::cout << "�����һ���ַ���: ";
    std::cin.getline(s1, maxSize);

    std::cout << "����ڶ����ַ���: ";
    std::cin.getline(s2, maxSize);

    int result = indexOf(s1, s2);

    if (result != -1) {
        std::cout << "s1��s2���Ӵ�����ʼλ����: " << result << std::endl;
    }
    else {
        std::cout << "s1����s2���Ӵ�" << std::endl;
    }

    return 0;
}
