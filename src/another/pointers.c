int sum(int* a, int* b) {
    return *a + *b;
}

int sum_array(int *a, int size) {
    int rv = 0;
    for (int i = 0; i < size; i++) {
        rv += *(a+i);
    }
    return rv;
}