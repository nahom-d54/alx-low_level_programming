/**
 * is_it_really - a function to recrusivly 
 * check
 *
 * @n: number to check
 * @c: loop kind of thing number
 */
int is_it_really(int n, int c)
{
	if (c < 10)
		if (n % c == 0)
			return (0);
		else
			is_it_really(n, c + 1);
	else
		return (1);

}
/**
 * is_prime_number - a function to check if prime
 *
 * @n: number to check
 */
int is_prime_number(int n)
{
    if (n <= 1)
		return (0);
	return (is_it_really(n, 2));
}
