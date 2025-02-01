//codeninjas - easy
//https://www.naukri.com/code360/problems/triangle_6573690?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
/*
Sam is making a Triangular painting for a maths project.
An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers representing the row number.
For every value of ‘N’, help sam to print the corresponding Triangle.

Example:
Input: ‘N’ = 3

Output: 
1
2 2 
3 3 3
*/
void triangle(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
}
