#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class SolutionTwo{
public:
	int maxFrequencyElements(vector<int>& nums){
		//{1,2,2,3,3,3}
		map<int,int>mp1;
		for(int i:nums){
			mp1[i]++; //{1:1, 2:2, 3:3}
		}
		map<int,int>mp2;
		for(auto i:mp1){
			//cuenta cuantos elementos tiene la misma frecuencia
			mp2[i.second]++; //{1:1, 2:1, 3:1}
		}
		//multiplica la frequencia mas alta por el numero de elementos que haya
		return mp2.rbegin()->first*mp2.rbegin()->second;
		//i.second elemento
		//i->second iterador
	}
};

#endif