#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class Solution{
public:
	int countCompleteDayPairs(vector<int>& hours){
		int n=hours.size();
		int count=0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				int atom=hours[i]+hours[j];
				if(atom%24==0){
					count++;
				}
			}
		}
		return count;
	}
};

#endif