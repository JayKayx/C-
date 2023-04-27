/*Print the ASCII value of character ‘U’. (Easy)
Sample Input : already mentioned as ‘U’
Sample Output : 85*/

#include <iostream>

using namespace std;

int main(){
    char x;
    cout<<"enter character for ascii value:";
    cin>>x;
    int ascii=int(x);
    cout<<"ASCII value:"<<ascii;
    return 0;

}