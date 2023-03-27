// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int para = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j != i && j < len; j++) {
            if ((arr[i] + arr[j]) == value) {
                para++;
            }
        }
    }
    return para;
}
int countPairs2(int *arr, int len, int value) {
    int para = 0;
    for (int i = 0; i < len; i++) {
        for (int j = len-1; j > i; j--) {
            if ((arr[i] + arr[j]) == value) {
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
