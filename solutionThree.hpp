#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class solutionThree{
public:
	int repeatedNTimes(vector<int>& nums){
		int num;
		for(int i=0; i<nums.size(); i++){
			for(int j=i+1; j<nums.size(); j++){
				if(nums[i]==nums[j]){
					num=nums[i];
				}
			}
		}
		return num;
	}
};

#endif