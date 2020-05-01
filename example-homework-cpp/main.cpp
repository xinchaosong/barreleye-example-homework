/*********************************************************************
 * Created by Xinchao Song, contact@xinchaosong.com.                *
 * April 21, 2020                                                   *
 * Copyright © 2020 Xinchao Song. All rights reserved.              *
*********************************************************************/

#include "homework.hpp"

int main() {
    Homework hw;

    hw.method_normal();

    hw.method_error();

    hw.method_timeout();

    hw.method_leak();

    return 0;
}
