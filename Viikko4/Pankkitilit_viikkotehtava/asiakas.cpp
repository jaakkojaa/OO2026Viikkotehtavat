#include "asiakas.h"
using namespace std;
Asiakas::Asiakas(string n, double raja) : nimi(n), kayttotili(n), luottotili(n, raja)
{

}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin saldo: " <<kayttotili.getBalance() <<endl;
    cout << "Luottotilin saldo: " <<luottotili.getBalance() <<endl;
}

bool Asiakas::talletus(double maara)
{
    return kayttotili.deposit(maara);
}

bool Asiakas::nosto(double maara)
{
    return kayttotili.withdraw(maara);
}

bool Asiakas::luotonMaksu(double maara)
{
    return luottotili.deposit(maara);
}
bool Asiakas::luotonNosto(double maara)
{
    return luottotili.withdraw(maara);
}

bool Asiakas::tiliSiirto(double maara, Asiakas &vastaanottaja)
{
    if (kayttotili.withdraw(maara))
    {
        vastaanottaja.kayttotili.deposit(maara);
        return true;
    }
    return false;
}
