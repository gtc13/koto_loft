//Вариант 7. Сортровка массива действительных чисел методом пузырька в порядке возрастания. 

#include <iostream> // ввод/вывод
#include <iomanip> // форматирование вывода
#include <cstdlib> // генератор псевдослучайных чисел
#define n 5 // строк в массиве
#define m 6 // элементов в строке

using namespace std;

int main()
{
    const int w = 6;
    int count1=0, count2=0;
    int arr[n][m];
    srand(time(NULL));

    //заполнение массива
    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<m; ++j)
        {
            arr[i][j] = rand()%10000;
        }
    }

    //Вывод входного массива
    cout << endl << "Входной массив: " << endl;
    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<m; ++j)
        {
            cout << setw(w) << arr[i][j];
        }
        cout << endl;
    }

    //Сортровка
    for (int k=0; k<n; ++k)
    {
        for (int l=0; l<m; ++l)
        {
            for (int i=0; i<n; ++i)
            {
                for (int j=0; j<m; ++j)
                {
                    if (i+1 == n and j+1 == m)
                    {
                        count1=count1+1; 
                        continue;
                    }
                    else
                    {
                        count1=count1+1;
                        if (j+1 == m and arr[i][j] > arr[i+1][0])
                        {
                            int temp = arr[i][j];
                            arr[i][j] = arr[i+1][0];
                            arr[i+1][0] = temp;
                            count2=count2+1;
                        }
                        else
                        {
                            if (arr[i][j] > arr[i][j+1])
                            {
                                int temp = arr[i][j];
                                arr[i][j] = arr[i][j+1];
                                arr[i][j+1] = temp;
                                count2=count2+1;
                            }
			}
                    }
                }
            }
        }
    }



    cout << endl << "Количество сравнений:    " << count1 <<endl;
    cout << endl << "Количество перестановок:    " << count2 <<endl;
    //Вывод выходного массива
    cout << endl << "Выходной массив: " << endl;
    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<m; ++j)
        {
            cout << setw(w) << arr[i][j];
        }
        cout << endl;
    }

    cout << endl << "Programed by Vlad Gribov" << endl;
    return 0;
}
