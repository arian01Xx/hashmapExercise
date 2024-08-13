#include "solution.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<int> hours={12,12,30,24,24};
	int firstOut=solution.countCompleteDayPairs(hours);
	cout<<"First Answer: "<<endl;
	cout<<firstOut<<endl;

	return 0;
}