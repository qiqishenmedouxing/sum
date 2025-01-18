#include <iostream>
using namespace std;
int main() {
    int n,a;
    while(cin>>n)
    {
        if(n==0) {
            break;
        }
        int sum=0;

        //操作执行n次
        while(n--)
        {
            //输入一个数字a
            cin>>a;
            //将输入的数字a累加到sum上，并赋值给sum
            sum+=a;
        }
        //输入完n个数字后，输出sum
        cout<<sum<<endl;
    }
    return 0;
}
