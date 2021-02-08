//
// Created by Seçkin KÜKRER on 8.02.2021.
//

#ifndef QUIZ1_CUSTOMERCOUNTER_H
#define QUIZ1_CUSTOMERCOUNTER_H

#include <iostream>

class CustomerCounter {
protected:
    int customerCount;

public:
    CustomerCounter(): customerCount(0)
    {}

    int getCustomerCount() const;
    void entry(int entryCount_);
    void exit(int exitCount_);
};


#endif //QUIZ1_CUSTOMERCOUNTER_H
