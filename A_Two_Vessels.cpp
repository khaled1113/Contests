#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--) {
        int counter = 0;
        int a, b, c;
        cin >> a >> b >> c;
        int max = std::max(a, b);
        int min = std::min(a, b);

        // Calculate the number of steps to make 'a' and 'b' equal using 'c'
        while (max > min) {
            max -=c;
            min +=c;
            counter++;

        }
    
        cout << counter << endl;
    }
    return 0;
}
