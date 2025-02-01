//codeninjas - easy
//https://www.naukri.com/code360/problems/star-triangle_6573671?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
/*
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*/
void nStarTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=(2*n)-1; j++) {
            if (j <= n-i || j >= n+i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
