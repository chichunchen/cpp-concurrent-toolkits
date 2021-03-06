#include <iostream>
#include <thread>
#include <vector>

#include "lamport_test.hpp"
#include "mcs_test.hpp"
#include "mutex_tas_tatas_ticket.hpp"
#include "ds_test.hpp"

using namespace std;

void lock_tests() {
    test_mutex_tas_tatas_ticket_driver();
    test_scalable_tas_tatas_ticket_driver();
    lamport_test_driver();
    mcs_test();
}

void concurrent_ds_tests() {
    lockfree_stack_test_driver();
}

int main() {
    concurrent_ds_tests();
//    lock_tests();
    return 0;
}
