/*

Luther has a string S of length N. He likes palindromes very much. A string is a palindrome if it reads the same backwards as forwards. For example, aba is a palindrome while abc is not.

He wants to convert S into a palindrome. He want to know the minimum number of substrings that must be deleted from S so that S becomes a palindrome.

Input

The first line of the input contains a single integer T representing the number of test cases. The first line of each test case contains a single integer N. Next line contains the string S.
Output

For each test case, output a single line containing the answer for that test case.
Constraints

1 <= T <= 10
1 <= N <= 10000
S contains only lower case alphabets (i.e. 'a' - 'z')
Example

Input:
3
3
aaa
4
abca
2
bc

Output:
0
1
1

Explanation

In the first test case, aaa is already a palindrome
In the second test case, we can delete b to get aca which is palindrome.
In the third test case, we can delete c to get b.

*/
#include<iostream>
#include<cstring>
using namespace std;

int t,n,i;
string s;

int isPalin()
{
	for(i=0;i<n/2;i++)
	{
		if(s[i] != s[n-1-i])
			return 1;
	}
	return 0;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		cout<<isPalin()<<endl;
	}
	return 0;
}

