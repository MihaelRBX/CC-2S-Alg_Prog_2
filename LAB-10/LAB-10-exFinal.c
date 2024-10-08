#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int count(int list[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (list[i] == value) {
            count++;
        }
    }
    return count;
}

//index ja é utilizado na biblioteca C, entao mudei para acharIndex, assim evitando problemas 
int acharIndex(int list[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (list[i] == value) {
            return i;
        }
    }
    return -1;
}

void reverse(int list[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = list[i];
        list[i] = list[size - i - 1];
        list[size - i - 1] = temp;
    }
}

void sort(int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (list[i] > list[j]) {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

bool append(int list[], int *size, int value) {
    if (*size < MAX_SIZE) {
        list[*size] = value;
        (*size)++;
        return true;
    }
    return false;
}

bool insert(int list[], int *size, int index, int value) {
    if (*size < MAX_SIZE && index >= 0 && index <= *size) {
        for (int i = *size; i > index; i--) {
            list[i] = list[i - 1];
        }
        list[index] = value;
        (*size)++;
        return true;
    }
    return false;
}

bool remove_element(int list[], int *size, int value) {
    int pos = acharIndex(list, *size, value);
    if (pos != -1) {
        for (int i = pos; i < *size - 1; i++) {
            list[i] = list[i + 1];
        }
        (*size)--;
        return true;
    }
    return false;
}

int pop(int list[], int *size) {
    if (*size > 0) {
        int value = list[*size - 1];
        (*size)--;
        return value;
    }
    return -1;
}

void print_list(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int main() {
    int list[MAX_SIZE];
    int size = 0;

    append(list, &size, 5);
    append(list, &size, 3);
    append(list, &size, 7);

    printf("Count of 3: %d\n", count(list, size, 3));

    printf("Index of 7: %d\n", acharIndex(list, size, 7));

    insert(list, &size, 1, 2);
    printf("Lista com inserção: ");
    print_list(list, size);

    int popped_element = pop(list, &size);
    printf("Popped element: %d\n", popped_element);
    printf("Lista com pop: ");
    print_list(list, size);

    remove_element(list, &size, 2);
    printf("Lista com remoção: ");
    print_list(list, size);

    reverse(list, size);
    printf("Lista com reversão: ");
    print_list(list, size);

    sort(list, size);
    printf("Lista com ordenação: ");
    print_list(list, size);

    return 0;
}
