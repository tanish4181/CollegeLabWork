#include <iostream>
using namespace std;

int main()
{
    char preExist[100], find[20], replace[20], result[200];
    int i = 0, j = 0, k = 0, found = 0;
    cout << "Enter Sentence";
    cin.getline(preExist, 100);
    cout << "Enter Targeted text";
    cin >> find;
    cout << "Enter Replacement text";
    cin >> replace;
    while (preExist[i] != '\0')
    {
        int match = 1;
        int tempi = i;
        int l = 0;
        while (find[l] != '\0')
        {
            if (preExist[tempi] != find[l])
            {
                match = 0;
                break;
            }
            tempi++;
            l++;
        }
        if (match)
        {
            while (replace[j] != '\0')
            {
                result[k++] = replace[j++];
            
            }
            
            i=l;
            found =1 ;
        }
        else
        {
            result[k++] = preExist[i++];
        }
    }
    if(found==1){
        result[k] = '\0';

        cout<<"text: "<<result;
    }
    else{
        cout<<"not found";
    
    }
}    