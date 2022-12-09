#include <iostream>
#include <vector>
#include <algorithm>
#include<iostream>
#include<math.h>
using namespace std;

int main() {

    vector<char> n;
    vector<vector<char>> h;
    //VARIABLES
    char chars[] = { '0', '1', '2', '3' };
    int password[4]{ 0 };

    //SIZES OF VERIABLES
    int chars_length = sizeof(chars) / sizeof(char);
    int password_length = sizeof(password) / sizeof(int);

    //CYCKLE TROUGH ALL OF THE COMBINATIONS
    for (int i = 0; i < pow(chars_length, password_length); i++) {

        //CYCKLE TROUGH ALL OF THE VERIABLES IN ARRAY
        for (int i2 = 0; i2 < password_length; i2++) {
            //IF VERIABLE IN "PASSWORD" ARRAY IS THE LAST VERIABLE IN CHAR "CHARS" ARRRAY
            if (password[i2] == chars_length) {
                //THEN INCREMENT THE NEXT VERIABLE IN "PASSWORD" ARRAY
                password[i2 + 1]++;
                //AND RESET THE VERIABLE BACK TO ZERO
                password[i2] = 0;
            }
        }

        //PRINT OUT FIRST COMBINATION
        std::cout << i << ": ";
        for (int i2 = 0; i2 < password_length; i2++) {
            cout << chars[password[i2]] << " ";
            n.push_back(chars[password[i2]]);
        }
        h.push_back(n);
        n.clear();
        std::cout << "\n";

        //INCREMENT THE FIRST VERIABLE IN ARRAY
        password[0]++;
    }

    cout << "\n_______________________________________________________________________\n" << endl;

    for (int i = 0; i < h.size(); i++)
    {
        for (int j = 0; j < sizeof(chars); j++)
        {
            cout << h[i][j] << " ";
        }
        cout << "\n";
    }

}