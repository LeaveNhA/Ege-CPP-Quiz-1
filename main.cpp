#include <iostream>

// Müşteri sayacı sınıfı:
#include "CustomerCounter.h"

void informCustomerCount(const CustomerCounter cc)
{
    using namespace std;

    cout << "Mağazadaki müşteri sayısı:" << cc.getCustomerCount() << endl << endl;
}

int main() {
    // Sürücü program örneği:
    {
        using namespace std;

        cout << "Mağaza ilkleniyor..." << endl;
        CustomerCounter cc;
        informCustomerCount(cc);

        cout << "Mağazaya üç (3) kişi giriş yapıyor." << endl;
        cc.entry(3);
        informCustomerCount(cc);

        cout << "Mağazaya otuz üç (33) kişi giriş yapıyor." << endl;
        cc.entry(33);
        informCustomerCount(cc);

        cout << "Mağazaya altı (6) kişi giriş yapıyor." << endl;
        cc.entry(6);
        informCustomerCount(cc);

        cout << "Mağazadan üç (3) kişi çıkış yapıyor." << endl;
        cc.exit(3);
        informCustomerCount(cc);

        cout << "Mağazadan yirmi yedi (27) kişi çıkış yapıyor." << endl;
        cc.exit(27);
        informCustomerCount(cc);

        cout << "Mağazadan altı (6) kişi çıkış yapıyor." << endl;
        cc.exit(6);
        informCustomerCount(cc);
    }
    return 0;
}

// Sürücü program, Quiz ile verilmediğinden, örnek senaryo üzerinden varye edilmiştir.