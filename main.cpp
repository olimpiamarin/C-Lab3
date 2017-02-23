#include <iostream>

using namespace std;

int main()
{
    /*Realizați o aplicație care realizează
    numărătoarea inversă care precede lansarea unei
    rachete*/
    // use Sleep() pentru a opri aplicatia pentru 1000
    // milisecunde

    for(int i = 10; i > 0; i--){
        cout << i << endl;
        Sleep(1000); // temporizare 1s
    }
    cout << "Racheta lansata." << endl;
    return 0;
}
