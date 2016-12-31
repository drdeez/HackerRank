/*
 * main.cpp
 * for the Day 11
 *  Created on: Nov 11, 2016
 *      Author: damon
 */

#ifndef FOLD
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#endif

using namespace std;

vector< vector<int> > arr(6,vector<int>(6));

inline int hourglassSum (int i,int j){
	return arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] +
			arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
}

int main(){

    int max, sum;

    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
    	   cin >> arr[arr_i][arr_j];
       }
    }
    for(int arr_i = 0;arr_i < 4;arr_i++){
        for(int arr_j = 0;arr_j < 4;arr_j++){
        	sum = hourglassSum(arr_i, arr_j);
            if (arr_i==0 && arr_j==0) max=sum;
        	if (sum>max) max=sum;
        }
    }
    cout << max;
    return 0;
}
