// FIX ME: put your function template definition here
template<typename T>
int indexOfSmallest(T arr[], int size) {
    T min = arr[0];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }
    return index;
}