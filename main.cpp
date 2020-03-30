#include <iostream>
using namespace std;
const int n = 10;
int sampleArray[n] = {23,6,92,30,4,55,59,12,80,46};

int* insertSort(int array[]){
    int aux, j;
    for(int i = 1; i < n; i++ ){
        aux = array[i];
        for(j = i -1; (j >= 0) && (array[j] > aux); j--){
            array[j+1] = array[j];
            array[j] = aux;
        }
    }
    return array;
}

int* selectionSort(int array[]){
    int aux, j, min;
    for(int i = 0; i < (n-1); i++){
        min = i;
        for(j = i+1; j < n; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        aux = array[min];
        array[min] = array[i];
        array[i] = aux;
    }
    return array;
}

void displayArray(int array[]){
    for(int i = 0; i < n; i++){
        cout<<array[i]<<",";
    }
    cout<<endl;
}

int main(int, char*[]){
    int* insertArray = insertSort(sampleArray);
    displayArray(insertArray);
    int* selectArray = selectionSort(sampleArray);
    displayArray(selectArray);
    return 1;
}