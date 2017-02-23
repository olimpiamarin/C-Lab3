#include <iostream>

using namespace std;

int main()
{
    /*Realizați o aplicație care realizează
    numărătoarea inversă care precede lansarea unei
    rachete*/
    // use Sleep() pentru a opri aplicatia pentru 1000
    // milisecunde
    /*
    for(int i = 10; i > 0; i--){
        cout << i << endl;
        Sleep(1000); // temporizare 1s
    }
    cout << "Racheta lansata." << endl;
    return 0;
    */

    /* Creaţi un program care iniţializează cu 0 valorile elementelor unui şir*/

    int a[20], i;
    for (i = 0; i < 20; i++){
        a[i] = i + 1;
    }
    for(i = 0; i < 20; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;


}
