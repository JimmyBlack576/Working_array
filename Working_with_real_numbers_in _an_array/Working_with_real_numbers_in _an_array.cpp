#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    const size_t n = 10;
    int arr[n] = { 1,-2,5,4,-3,7,2,-1,8,6 };
    int min =0, max=0, productBetween=1,
        sumNegative=0, sumBetweenNegative = 0,n1,n2,
        prodEven = 1,first,last;
    //Вывод массива
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    //Сумма отрицательных чисел
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            sumNegative += arr[i];
        }
    }
    //Произведение чисел между min и max
    for (int i = 0; i < n; i++) {
        
        if (arr[i] > max) {
            max = arr[i];
            n1 = i;
        }
        else if (arr[i] < min) {
            min = arr[i];
            n2 = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i<n1&&i>n2) {
            productBetween *= arr[i];
        }
    }
    //Произведение элементов с чётными номерами
    for (int i = 0; i < n; i++) {
        if (i > 0 && i % 2 == 0) {
            prodEven *= arr[i];
        }
    }
    //Сумма элементов между первым и последним отрицательными элементами
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            first = i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] < 0) {
            last = i;
            break;
        }
    }
    for (int i = first+1; i < last; i++) {
        sumBetweenNegative += arr[i];
    }
    
    cout << "\n\nСумма отрицательных чисел = " << sumNegative << endl;
    cout << "Произведение чисел между минимальным и максимальным значением = " << productBetween << endl;
    cout << "Произведение элементов с чётными номерами = " << prodEven << endl;
    cout << "Сумма элементов между первым и последним отрицательными элементами = "<<sumBetweenNegative<<endl;

    return 0;
}

