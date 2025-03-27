//codeninjas - easy
//https://www.naukri.com/code360/problems/seeding_6581892?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
/*
Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.
For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *

*/
void seeding(int n) {
	for (int i = n; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
