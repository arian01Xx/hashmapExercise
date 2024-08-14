#include "solution.hpp"
#include "solutionOne.hpp"
#include "solutionTwo.hpp"
#include "solutionThree.hpp"
#include "solutionFour.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<int> hours={12,12,30,24,24};
	int firstOut=solution.countCompleteDayPairs(hours);
	cout<<"First Answer: "<<endl;
	cout<<firstOut<<endl;

	SolutionOne solution1;
	string s="abacbc";
	bool outFirst=solution1.areOccurrencesEqual(s);
	cout<<"Second Answer: "<<endl;
	cout<<outFirst<<endl;

	solutionThree solution3;
	vector<int> VectorThree={1,2,3,4};
	int outThree=solution3.repeatedNTimes(VectorThree);
	cout<<"Three Answer: "<<endl;
	cout<<outThree<<endl;
	cout<<endl;


	return 0;
}