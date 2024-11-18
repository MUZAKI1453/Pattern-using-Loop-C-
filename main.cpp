#include <iostream>

int main()
{
    int pilihan, n;

    std::cout << "   Program Pattern Loop   \n" << std::endl;
    std::cout << "==========================\n" << std::endl;

    std::cout << "masukkan pilihan 1,2,3,4 =\n" << std::endl;
    std::cin >> pilihan;

    if (pilihan == 1) {
        std::cout << "masukkan n =" << std::endl;
        std::cin >> n;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if((i % 2 == 0 && j % 2 != 0) || (i % 2 == 1 && j % 2 != 1)) {
                    std::cout << "|";
                } else {
                    std::cout << "*";
                }
            }
            std::cout << std::endl;
        }
    } else if (pilihan == 2) {
        std::cout << "masukkan n =" << std::endl;
        std::cin >> n;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if(i % n == 0 && j % n == 0) {
                    std::cout << "*";
                } else if (i % n == n / 2  || j % n == n / 2) {
                    std::cout << "I";
                } else {
                    std::cout << ".";
                }
            }
            std::cout << std::endl;
        }
    } else if (pilihan == 3) {
        std::cout << "masukkan n =" << std::endl;
        std::cin >> n;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if(i % n == 0 ) {
                    std::cout << "I";
                } else if ( j % n == n / 2) {
                    std::cout << "I";
                } else {
                    std::cout << ".";
                    if (i % n == n / 2 )
                        break;
                }
            }
            std::cout << std::endl;
        }
    } else if (pilihan == 4) {
        std::cout << "masukkan n =" << std::endl;
        std::cin >> n;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if((i % n == n / 2 - 1) || (i % n == n / 2 + 1) || j % n == n / 2) {
                    std::cout << "I";
                } else if ( i % n == n / 2 ) {
                    std::cout << " ";

                } else {
                    std::cout << ".";
                }
            }
            std::cout << std::endl;
        }
    } else {

    }
    return 0;
}
