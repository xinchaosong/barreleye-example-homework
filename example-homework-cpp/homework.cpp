/*********************************************************************
 * Created by Xinchao Song, contact@xinchaosong.com.                *
 * April 21, 2020                                                   *
 * Copyright © 2020 Xinchao Song. All rights reserved.              *
*********************************************************************/

#include "homework.hpp"

#ifdef _WIN32

#include <Windows.h>

#else
#include <unistd.h>
#endif

#include <iostream>
#include <thread>
#include <cstdlib>

int Homework::method_normal() {
    std::cout << "A normal method." << std::endl;

    return 0;
}

int Homework::method_error() {
    std::cout << "A method with segmentation fault." << std::endl;

    int *p = nullptr;
    *p = 5;
    return 0;
}

int Homework::method_timeout() {
    std::cout << "A method with a timeout issue." << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(3600));
    return 0;
}

int Homework::method_leak() {
    std::cout << "A method with memory leak." << std::endl;

    void *ptr = malloc(4);
    return 0;
}
