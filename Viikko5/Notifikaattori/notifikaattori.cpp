#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout << "Luodaan notifikaattori olio" << endl;
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja * uusi)
{
    cout << "Notifikaattori lisaa seuraajan " << uusi->getNimi() << endl;
    if (!seuraajat)
    {
        seuraajat = uusi;
        return;
    }
    uusi->next = seuraajat;
    seuraajat = uusi;
}

void Notifikaattori::poista(Seuraaja * poistettava)
{
    if (!seuraajat)
    return;
    cout << "Notifikaattori poistaa seuraajan " << poistettava->getNimi() << endl;
    if (seuraajat == poistettava)
    {
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* edellinen = seuraajat  ;
    while (edellinen->next && edellinen->next != poistettava)
    {
        edellinen = edellinen->next;
    }
    if (edellinen->next == poistettava)
    {
        edellinen->next = poistettava->next;
    }
}

void Notifikaattori::tulosta()
{
    cout << "Notifikaattorin seuraajat: " << endl;
    Seuraaja* ptr = seuraajat;
    while (ptr)
    {
        cout << ptr->getNimi() <<endl;
        ptr = ptr->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    cout << "Notifikaattori postaa viestin " << endl;
    Seuraaja* ptr = seuraajat;
    while (ptr)
    {
        ptr->paivitys(viesti);
        ptr = ptr->next;
    }
}
