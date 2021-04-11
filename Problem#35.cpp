#include <string>
#include <iostream>
using namespace std;

// Given an array of strictly the characters 'R', 'G', and
// 'B', segregate the values of the array so that all the
// Rs come first, the Gs come second, and the Bs come last.
// You can only swap elements of the array.

char* RGBorder(char* c_a)
{

    size_t sz = sizeof(c_a)/sizeof(*c_a);
    char* ptr_ca = c_a;
    char* prv_ptr = ptr_ca;
    ptr_ca++;
    char temp;

    while(*ptr_ca)
    {
        switch(*ptr_ca)
        {
            case 'R' :
                if( *prv_ptr < *ptr_ca ) {
                    temp = *prv_ptr; *prv_ptr = *ptr_ca; *ptr_ca = temp;
                } else if( *prv_ptr == *ptr_ca ) {
                    continue;
                } else { ptr_ca--; RGBorder(ptr_ca); }

            case 'G' :
                if( *prv_ptr < *ptr_ca ) {
                    temp = *prv_ptr; *prv_ptr = *ptr_ca; *ptr_ca = temp;
                } else if( *prv_ptr == *ptr_ca ) {
                    continue;
                } else { ptr_ca--; RGBorder(ptr_ca); }
            default:
                ptr_ca++;
                continue;
        }
        ptr_ca++;
        cout << *ptr_ca;
    }

    return c_a;
}

int main()
{
    char ca[] =  {'G', 'B', 'R', 'R', 'B', 'R', 'G'};
    char *oca =RGBorder(ca);
    char *pca = oca;
    while(*pca)
    {
        cout << *pca << endl;
        pca++;
    }
}
