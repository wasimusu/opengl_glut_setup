/**
 * Objective: Demonstrate data race.
 *
 * Definition: Data race is multiple threads trying to manipulate shared data at the same time.
 * For instance, if two threads are trying to increment the same counter the counter may be incremented by 1 or 2
 * which is not a desirable outcome when in fact the counter should be incremented by 2.
 *
 * To resolve this see: thread_safe_counters.cpp
 *
 * */

#include <bits/stdc++.h>
#include <thread>
#include <mutex>

using namespace std;

int main() {
    thread mu;
    return 0;
}