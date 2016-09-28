#include<iostream>
using  namespace std;
int main()
{
    int initial_errors;
    cin >> initial_errors;
    int temp = initial_errors;
    int initial_sum = 0;
    while(temp--)
    {
        int in;
        cin>>in;
        initial_sum += in;
    }
    int final_sum = 0;
    temp = initial_errors - 1;
    while(temp--)
    {
        int in;
        cin>>in;
        final_sum += in;
    }
    cout << initial_sum - final_sum<<endl;

    temp = initial_errors - 2;
    initial_sum = 0;
    while(temp--)
    {
        int in;
        cin>>in;
        initial_sum += in;
    }
    cout << final_sum - initial_sum;
    return 0;
}
