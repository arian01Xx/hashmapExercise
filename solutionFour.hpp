#ifndef SOLUTION_FOUR_HPP
#define SOLUTION_FOUR_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class SolutionFour{
public:
	int minimizedStringLength(string s){
		sort(s.begin(), s.end());
		for(int i=0; i<s.size()-1; ){
			if(s[i]==s[i+1]){
				s.erase(i,1);
			}
		}
		return s.size();
	}
};

#endif