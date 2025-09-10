#include <iostream>
using namespace std;

void insert(int a[], int n, int pos, int val)
{
    for (int i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = val;
    n++;
}

void delet(int a[], int n, int pos)
{
    for (int i = pos - 1; i <= n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void createArray(int arr[], int n)
{
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int search(int arr[], int val_find, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val_find)
        {
            cout << "found element at" << i << "position";
            return 1;
        }
    }
    return 0;
    cout<<"not found";
}

int main()
{
    int a[100];
    int n, step, pos, val, val_f;

    do
    {
        cout << "choose which operation to use:" << endl
             << "1.create array" << endl
             << "2.print array" << endl
             << "3.insert element in array" << endl
             << "4.delete element in array" << endl
             << "5.search element in array" << endl
             << "6. to exit" << endl;
        cin >> step;
        switch (step)
        {
        case 1:
            /* create an array*/
            cout << "how many element you want in a array" << endl;
            cin >> n;
            createArray(a, n);
            break;
        case 2:
            /* print array*/
            cout << "Array is:" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << endl;
            }
            break;
        case 3:
            /*insert in array*/

            cout << "enter postion and value to insert in array";
            cin >> pos >> val;

            insert(a, n, pos, val);
            break;
        case 4:
            /* delete element in array*/
            cout << "delete element" << endl
                 << "position of element to delete";
            cin >> pos;
            delet(a, n, pos);

            break;
        case 5:
            /* search element in array*/
            cout << "search element" << endl
                 << "value of element to search";
            cin >> val_f;
            search(a, val_f, n);

            break;
        case 6:
            cout << "exit";
            break;

        default:
            break;
        }
    } while (step != 5);

    return 0;
}