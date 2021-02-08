//
// Created by Seçkin KÜKRER on 8.02.2021.
//

#include "CustomerCounter.h"

int CustomerCounter::getCustomerCount() const {
    return this->customerCount;
}

void CustomerCounter::entry(int entryCount_) {
    const int maxLimitOfCustomerCount = 30;

    int customerCountWithEntries = entryCount_ + this->customerCount;

    if(customerCountWithEntries > maxLimitOfCustomerCount)
        std::cout << "Mağazadaki otuz (30) kişilik müşteri üst sınırı aşıldı,"
        << std::endl << (customerCountWithEntries - maxLimitOfCustomerCount) << " kişi dışarıda bekliyor  olacak."
        << std::endl;

    this->customerCount = std::min(maxLimitOfCustomerCount, customerCountWithEntries);
}

void CustomerCounter::exit(int exitCount_) {
    const int minLimitOfCustomerCount = 0;

    int customerCountWithEntries = this->customerCount - exitCount_;

    if(customerCountWithEntries < minLimitOfCustomerCount)
        std::cout << "Mağazadaki sıfır (0) kişilik müşteri alt sınırı aşıldı,"
        << std::endl << "müşteri girişleri sayımında hata yapılmış gibi duruyor." << std::endl;

    this->customerCount = std::max(minLimitOfCustomerCount, customerCountWithEntries);
}
