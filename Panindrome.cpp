#include <iostream>

//Palindrom Number checking
//Alog:
//auto isPalinDrome = [](121==121){}? PalindDrome : Not PalinDrome;
/* Take a number from the user
* Pass this number to user either inline or lamba function.
* In Inline Method a contaior type memory take data and modify it and retrun some value.
* 
* inline bool IsPalinDrome(const int num)
* {
*	while (num!=0)  1234--> 123-->12-->1
* {
*		either create reverse number or just compare iterative digit from both ends;
*		Means once num 1234 enter it should again yield to 23 means string manupulation
*		Or Char Array iteration. If we taking the value in char array or string then we can
*		Operate this approach;
*		For now Applying the new number approach
*		num= front digit*10== 4*10
*		front to second last = num/10==> Give  121 brome 12 1front to second last digit
*		back  = num%10==> Gives last digit 4321
*		if (front == back)
		{
			num/10
		}
*		
* }
* }
*/
std::string IsPalindrome(int baseNum)
{
	int original = baseNum;
	int revDigits = 0;
	int digit;

	while (baseNum!=0)
	{
		digit = baseNum % 10;
		revDigits = revDigits * 10 + digit;
		baseNum = baseNum / 10;
	}
	return (original == revDigits) ? "Palinddrome Numer" : "Not Palindrome Numeber";
}
int _main()
{
	int userInput;
	std::cout << "Hi Coder! Please input data for Palindrome check : ";
	std::cin >> userInput;
	system("color a && cls");
	std::cout << "The User Input is: " << userInput << " is = " << IsPalindrome(userInput) << std::endl;
	std::cin.get();
	return 0;
}