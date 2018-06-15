#include <iostream>
using namespace std;

#include "Payment.h"

Payment::Payment(float a) {
    amount = a;
}
void Payment::setAmount(float a) {
    amount = a;
}
float Payment::getAmount() {
    return amount;
}


void Payment::paymentDetails() {
    cout << "Payment value: " << amount << endl;
}
