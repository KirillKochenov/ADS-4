// Copyright 2021 NNTU-CS
int countPairs1(int* arr, int len, int value) {
    int para = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i+1; j < len; j++) {
            if (arr[i] + arr[j] == value)
                para++;
            }
        }
    return para;
}
int countPairs2(int* arr, int len, int value) {
    int para = 0;
    len--;
    while (arr[len] > value) {
        len--;
    }
    for (int i = 0; i < len; i++) {
        for (int j = len; j > i; j--) {
            if (arr[i] + arr[j] == value) {
                para++;
            }
        }
    }
    return para;
}
int countPairs3(int *arr, int len, int value) {
    int para = 0;
    for (int i = 0; arr[i] < value; i++) {
        for (int j = len - 1; j > i; j--) {
            if ((arr[i] + arr[j]) == value) {
                para++;
            }
        }
    }
    return para;
}
