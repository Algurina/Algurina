include <iostream>
using namespace std;

int main()
 {
    int num;
    int i;
    int max_elem;
    int int_part;
    int j;
    
    cout << "Enter dimention array: ";
    cin >> num;
    cout << endl;
    
    int *p_darr = new int[num];
    for (i = 0; i<num; i++) {
        cout << "Enter element p_darr[" << i << "]: ";
        cin >> p_darr[i];
        cout << endl;
    }    
    // find max element of array
    max_elem = p_darr[0];
    for (i = 1; i<num; i++) 
{
        if (max_elem < p_darr[i])
 {
            max_elem = p_darr[i];
        }
    
    
    int num1;
    int *p_darr_new;
    for (i = 0; i<num; i++)
 {
        int_part = p_darr[i] / max_elem;
        if (p_darr[i] == (max_elem*int_part))
 {
            num1 = num - i ;
            p_darr_new = new int[num1];
            for (j = i; j<num; j++) 
{
                p_darr_new[j - i] = p_darr[j + 1];
            }
        }
        
        // sort array p_darr_new
        for (i = 0; i<num1; i++) 
{
            for (j = 0; j<num1 - i - 1; j++) 
{
                if (p_darr_new[j] < p_darr_new[j + 1]) 
{
                    int temp = p_darr_new[j];
                    p_darr_new[j] = p_darr_new[j + 1];
                    p_darr_new[j + 1] = temp;
                }
            }
        }
        break;
    }
    }
    
    // print array p_darr_new
    cout << "begin array: ";
    for (i = 0; i<num1; i++)
 {
        cout << p_darr_new[i] << " ";
    }
    cout << endl;
    
    delete[] p_darr;
    delete[] p_darr_new;
    
    return 0;
}
