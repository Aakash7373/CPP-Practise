/*
 * Payment.h
 *
 *  Created on: Mar 2, 2017
 *      Author: pawar
 */

#ifndef PAYMENT_H_
#define PAYMENT_H_

#include <string>
using namespace std;

class Payment {

private:
    float amount;
public:
    Payment(float);
    void setAmount(float);
    float getAmount();
    virtual void paymentDetails();
};




#endif /* PAYMENT_H_ */
