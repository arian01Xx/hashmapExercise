#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class SolutionOne{
public:
	bool areOccurrencesEqual(string s){
		unordered_map<char,int> mp;
		for(char c: s){
			mp[c]++;
		}
		auto it=mp.begin();
		int curr=it->second;
		for(auto it=mp.begin(); it!=mp.end(); it++){
			if(curr!=it->second){
				return false;
			}
		}
		return true;
	}
};

#endif