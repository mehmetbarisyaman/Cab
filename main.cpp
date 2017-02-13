//
//  main.cpp
//  Cab
//
//  Created by Baris on 2/11/17.
//  Copyright © 2017 MBY. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


int main(int argc, const char * argv[]) {
    vector<long long>tests;
    long testcase;
    long store;
    long long input;
    cin >> testcase;
    store = testcase;
    while(testcase>0){
        cin >> input;
        tests.push_back(input);
        testcase--;
    }
    long long K;
    testcase = store;
    int index=0;
    while(testcase>0){
        K = tests[index++];
        K = K-7;
        if(K%6==0)
            K--;
        cout << K/6 + 1 << endl;
        testcase--;
    }
    return 0;
}


