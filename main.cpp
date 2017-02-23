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
    /*
    int a[20], i;
    for (i = 0; i < 20; i++){
        a[i] = 19 - i;
    }
    for(i = 0; i < 20; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
    */

    /*Creaţi un program care citeşte valorile unui şir de valori întregi a şi apoi
     schimbă semnul elementelor negative, respectiv dacă a[i] < 0 atunci a[i] = -a[i].
    Observaţie: În aplicaţiile următoare referitoare la şiruri de valori puteţi să nu
    mai citiţi şirul iniţial (ia cam mult timp!) iniţializând şirul în momentul
    declarării după modelul*/

    int a[20], nr, i;
    cout << "Numarul de elemente din sirul a (maxim 20)";
    cin >> nr;
    for (i = 0; i < nr; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (i = 0; i < nr; i++){
        if(a[i] < 0)
            a[i] = -a[i];
    }
    for (i = 0; i < nr; i++){
        cout << a[i] << ", ";
    }
    cout << endl;
    return 0;


}
