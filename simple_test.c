#include "ft_printf.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

#include <stdio.h> // DELTEE

void print_bit(long long n)
{
	int largest = 0;
	int i; 
	long long one = 1;

	i = sizeof(long long) * 8;
	while (i > 0)
	{
		if (n & (one << (i - 1)))
			printf("1");
		else
			printf("0");
		if (i != sizeof(long long) * 8 && (i - 1) % 8 == 0)
			printf(" ");
		--i;
	}
	printf("\n");
}

void how_convers()
{
	long long			ld;
	unsigned int 		d;
	int					i = 0; 

	ld = LLONG_MIN;	
	printf ("%lld\n", ld);
	ld = ld * (-1);
	printf ("%lld\n", ld);
//	print_bit(INT_MAX);
//	print_bit(UINT_MAX);
//	while (i < 64)
//	{
//		printf ("%d", i % 8);
//		if ((i + 1) % 8 == 0)
//			printf(" ");
//		++i;
//	}
//	printf("\n");
//	print_bit(ld);
//	print_bit(ULONG_MAX);
//	d = ld;
//	print_bit(d);
//	ld = d;
//	print_bit(ld);
//	ld = INT_MIN;
//	print_bit(ld);
}

void test_d_i()
{
//	printf("Input 3 |%0.4d|\n", 3);
//	ft_printf("Input 3 |%0.4d|\n", 3);
//	printf("% 10.5d\n", 4242);
//	ft_printf("% 10.5d\n", 4242);
	//printf("% 10.11d\n", 4242);
	//ft_printf("% 10.11d\n", 4242);
	//printf("@moulitest: %.10d\n", -42);
	//ft_printf("@moulitest: %.10d\n", -42);
//	printf("%-10.5d\n", 4242);
//	ft_printf("%-10.5d\n", 4242);
//	printf("%-3.7d\n", -2375);
//	ft_printf("%-3.7d\n", -2375);
//	printf("|%-7d|\n", 33);
//	ft_printf("|%-7d|\n", 33);
//	printf("%010.5d\n", -216);
//	ft_printf("%010.5d\n", -216);
//	printf("%010d\n", -216);
//	ft_printf("%010d\n", -216);
//	printf("%0d\n", -216);
//	ft_printf("%0d\n", -216);
//	printf("%7d\n", -14);
//	ft_printf("%7d\n", -14);
//	printf("%0-8.5d\n", 34);
//	ft_printf("%0-8.5d\n", 34);
//	printf("%.*i\n", 6, -3);
//	ft_printf("%.*i\n", 6, -3);
//	printf("{%*3d}\n", 5, 0);
//	ft_printf("{%*3d}\n", 5, 0);
//	printf("{%.*3s}\n", 4, "lollo");
//	ft_printf("{%.*3s}\n", 4, "lollo");
//	printf("{%-15p}\n", 0);
//	ft_printf("{%-15p}\n", 0);
//	printf("{%05.*d}\n", -15, 42);
//	ft_printf("{%05.*d}\n", -15, 42);
//	printf("%#010.10d\n", 42);
//	ft_printf("%#010.10d\n", 42);
//	printf("%10d\n", 42);
//	ft_printf("%10d\n", 42);
//	printf("%10x\n", 42);
//	printf("%-10d\n", 42);
//	printf("%-10x\n", 42);
//	printf("%-15x\n", 542);
//	printf("%1d\n", 42);
//	printf("%10.10d\n", 42);
//	printf("%10.11d\n", 42);
//	printf("%11.10d\n", 42);
//	printf("%#10d\n", 42);
//	ft_printf("%#10d\n", 42);
//	printf("%010d\n", 42);
//	printf("%#010d\n", 42);
//	printf("%+7u\n", 0);
//	ft_printf("%+7u\n", 0);
//	printf("% 7u\n", 0);
//	ft_printf("% 7u\n", 0);
//	printf("%7u\n", -0);
//	ft_printf("%7u\n", -0);
//	printf("%+.18u\n", 2147483647);
//	ft_printf("%+.18u\n", 2147483647);
//	printf("%+18u\n", 2147483647);
//	ft_printf("%+18u\n", 2147483647);
//	printf("%+18u\n", -2147483647);
//	ft_printf("%+18u\n", -2147483647);
//	printf("%#18u\n", -2147483647);
//	ft_printf("%#18u\n", -2147483647);
//	printf("% -.18u\n", 2147483647);
//	ft_printf("% -.18u\n", 2147483647);
//	printf("% -.11u\n", 2147483647);
//	ft_printf("% -.11u\n", 2147483647);
//	printf("% -.10u\n", 2147483647);
//	ft_printf("% -.10u\n", 2147483647);
//	printf("% -u\n", 2147483647);
//	ft_printf("% -u\n", 2147483647);
//	printf("%+d\n", 0);
//	ft_printf("%+d\n", 0);
//	printf("% d\n", 0);
//	ft_printf("% d\n", 0);
//	printf("%+-.18ld\n", 1);
//	ft_printf("%+-.18ld\n", 1);
//	printf("%.1d\n", 0);
//	ft_printf("%.1d\n", 0);
//	printf("%.5d\n", 0);
//	ft_printf("%.5d\n", 0);
//	printf("%d\n", 0);
//	ft_printf("%d\n", 0);
//	printf("%+7hd\n", 0);
//	ft_printf("%+7hd\n", 0);
//	printf("%+-.18u\n", 2147483647);
//	ft_printf("%+-.18u\n", 2147483647);
//	printf("%d\n", 2147483648);
//	ft_printf("%d\n", 2147483648);
	printf("%u%u%u%u%u\n", 1, 100, 999, 42, 999988888);
	ft_printf("%u%u%u%u%u\n", 1, 100, 999, 42, 999988888);
}

void test_x()
{
	int res1, res2;
	int input = 0;
//	printf("|%#5.3x|\n", input);
//	printf("|%05.3x|\n", input);
//	printf("|%#-5.3x|\n", input);
//	printf("|%0-5.3x|\n", input);
//	printf("|%#-.x|\n", input);
//	printf("|%04x|\n", input);
//	ft_printf("|%04x|\n", input);
//	printf("|%+x|\n", UINT_MAX);
//	ft_printf("|%+x|\n", UINT_MAX);
//	ft_printf("|%#6.7X|\n", 3);
//	ft_printf("|%-4x|\n", 0);
//	res2 = hexa_len(input);	
//	printf("Real: %x\n", 4294967296);
//	ft_printf("Not real: %x\n", 4294967296);
//	printf("%ll#x\n", 9223372036854775807);
//	ft_printf("%ll#x\n", 9223372036854775807);
//	printf("|%.4x|\n", 42);
//	ft_printf("|%.4x|\n", 42);
//	printf("{%#.5x}\n", 1);
//	ft_printf("{%#.5x}\n", 1);
//	printf("|%-8.5x|\n", 34);
//	ft_printf("|%-8.5x|\n", 34);
//	printf("|%-12.5x|\n", 34);
//	ft_printf("|%-12.5x|\n", 34);
//	printf("|%-7x|\n", 33);
//	ft_printf("|%-7x|\n", 33);
//	printf("|%-8.3x|\n", 8375);
//	ft_printf("|%-8.3x|\n", 8375);
//	printf("%#08.2X\n", 42);
//	ft_printf("%#08.2X\n", 42);
//	res1 = printf("|%-10lu|\n", 18446744073709551615);
//	res2 = ft_printf("|%-10lu|\n", 18446744073709551615);
//	printf("%-010lu\n", 4294967295);
//	ft_printf("%-010lu\n", 4294967295);
//	printf("%-010lu\n", 4294967295);
//	ft_printf("%-010lu\n", 4294967295);
//	printf("|%#010.0x|\n", 1);
//	ft_printf("|%#010.0x|\n", 1);
//	printf("%10lx\n", 0xffffffffffffffff);
//	ft_printf("%10lx\n", 0xffffffffffffffff);
//	printf("%.0lx\n", 1);
//	ft_printf("%.0lx\n", 1);
	printf("|%0#30.5x|\n", 0);
    ft_printf("|%0#30.5x|\n", 0);
	printf("|%#x|\n", 0);
    ft_printf("|%#x|\n", 0);
}

void wtf(void)
{	
//	printf("%*.*d", 44);
//	printf("|%llhlhlhlhlhlhllhlhlhl  l hlhlhlhllhlhlhld|",-482512345);
//	int	n = -42;
//	long ln;
	long long lln;
//
//	printf("long: %ld\n", n);
//	printf("long long: %lld\n", n);
//	ft_printf("Argument is +-42: |%ld|, |%ld|, |%li|\n", n, n, n);
//	ln = LONG_MAX;
//	ft_printf("Argument is LONG_MAX: |%ld|, |%ld|, |%li|\n", ln, ln, ln);
//	printf("Argument is LONG_MAX: |%ld|, |%ld|, |%li|\n", ln, ln, ln);
//	lln = LONG_MIN;
//	ft_printf("Argument is LONG_MIX: |%ld|, |%ld|, |%li|\n", lln, lln, lln);
//	printf("Argument is LONG_MIX: |%ld|, |%ld|, |%li|\n", lln, lln, lln);
//	printf("Argument is LLONG_MAX:  |%llu|\n", LLONG_MAX);
//	printf("Argument is ULLONG_MAX: |%llu|\n", ULLONG_MAX);
	ft_printf("Argument is UINT_MAX: |%u|\n", UINT_MAX);
	return ;
}

void test_octal_len()
{
	int input = 12;

//	printf("|%-#5.3o|\n", input);
//	ft_printf("|%-#5.3o|\n", input);
	printf("|%lo|\n",ULONG_MAX);
	ft_printf("|%lo|\n",ULONG_MAX);
}

void test_print_octal()
{
	int d = 0;

//	printf("|%15.4o|\n", 42);
//	ft_printf("|%15.4o|\n", 42);
//	printf("|%15.4o|\n", 0);
//	ft_printf("|%15.4o|\n", 0);
//	printf("|%.4o|\n", 424242);
//	ft_printf("|%.4o|\n", 424242);
//	printf("|%15.4o|\n", 424242);
//	ft_printf("|%15.4o|\n", 424242);
//	printf("%#.3o\n", 1);
//	ft_printf("%#.3o\n", 1);
	printf("|%#-1.0o|\n", 0);
	ft_printf("|%#-1.0o|\n", 0);
	printf("|%#1.0o|\n", 0);
	ft_printf("|%#1.0o|\n", 0);
	printf("|%-1.0o|\n", 0);
	ft_printf("|%-1.0o|\n", 0);
	printf("|%#3.0o|\n", 0);
	ft_printf("|%#3.0o|\n", 0);
	printf("|%#-3.0o|\n", 0);
	ft_printf("|%#-3.0o|\n", 0);
	//If precision larger than width and number then add zeroes to front
	ft_printf("%o\\n", 40);

}

void test_percent()
{
	int d = 0;
	int res, res2;

//	res = printf("%%%%%%\n");
	//res2 = ft_printf("%%%%%%\n");
	//printf("correct: %d yours: %d\n", res, res2);	
	//res = printf("%%\n");
	//res2 = ft_printf("%%\n");
	//printf("correct: %d yours: %d\n", res, res2);	
	//res = printf("%%%5d\n", 3);
	//res2 = ft_printf("%%%5d\n", 3);
	//printf("correct: %d yours: %d\n", res, res2);	
	printf("|%5%|\n");
	ft_printf("|%5%|\n");
	printf("|%-5%|\n");
	ft_printf("|%-5%|\n");
	printf("|%% % %%|\n", "test");
	ft_printf("|%% % %%|\n", "test");
	printf("|%%  %%|\n", "test");
	ft_printf("|%%  %%|\n", "test");
	printf("|%%   %|\n", "test");
	ft_printf("|%%   %|\n", "test");
	printf("|%%  %-%|\n", "test");
	ft_printf("|%%  %-%|\n", "test");
	printf("%%d 0000042 == |%d|\n", 0000042);
	ft_printf("%%d 0000042 == |%d|\n", 0000042);
	printf("%  w\n");
	ft_printf("%  w\n");
	printf("% w%s\n", "test");
	ft_printf("% w%s\n", "test");
	printf("%     d\n", 5);
	ft_printf("%     d\n", 5);
	printf("% ll%s\n", "test");
	ft_printf("% ll%s\n", "test");
	printf("|%.5%|\n");
	ft_printf("|%.5%|\n");
}

void test_interesting()
{
	int res, res2;
	//width overrides precision
//	res =	printf("|%05%%7.10%|\n");
//	res2=	ft_printf("|%05%%7.10%|\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	res =	printf("|%-05%%+7.10%|\n");
//	res2=	ft_printf("|%-05%%+7.10%|\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	res =	printf("|%-05.10%|\n");
//	res2=	ft_printf("|%-05.10%|\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	res =	printf("|%-.8%|\n");
//	res2=	ft_printf("|%-.8%|\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	res =	printf("|%8%|\n");
//	res2=	ft_printf("|%8%|\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	res =	printf("|%08%|\n");
//	res2=	ft_printf("|%08%|\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	res =	printf("|%08.3%|\n");
//	res2=	ft_printf("|%08.3%|\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	res =	printf("|%0.3%|\n");
//	res2=	ft_printf("|%0.3%|\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	res =	printf("%5%\n");
//	res2 =	ft_printf("%5%\n");
//	printf("Expected: %d Yours: %d\n", res, res2);
//	printf("%   %\n");
//	ft_printf("%   %\n");
//	ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
//	ft_printf("@moulitest: %#.x", 0);
//	printf("%#6o\n", 2500);
//	ft_printf("%#6o\n", 2500);
//	printf("%-#6o\n", 2500);
//	ft_printf("%-#6o\n", 2500);
//	printf("|%-#6o|\n", 2500);
//	printf("%-#6o\n", 2500);
//	res2 = ft_printf("%o\n", 0);
//	printf("RES: %d\n", res2);
//	ft_printf("@moulitest: %#.o %#.0o", 0, 0);
//	printf("%-10.5d\n", 4242);
//	ft_printf("%-10.5d\n", 4242);
//	ft_printf("%-05d\n", -42);
//	printf("%-+10.5d\n", 4242);
//	ft_printf("%-+10.5d\n", 4242);
//	  printf("%  +d\n", -42);
//	  ft_printf("%  +d\n", -42);
// 	 printf("%.10d\n", 4242);
// 	 ft_printf("%.10d\n", 4242);
	printf("%+10.5d\n", 4242);
	ft_printf("%+10.5d\n", 4242);

}

void test_rounder()
{
	unsigned int res;
	double input;

/*	input = 0.125;
	ft_printf("Yours:    %.2f\n", input);
	printf("Expected: %.2f\n", input);
	input = 0.75;
	ft_printf("Yours:    %.1f\n", input);
	printf("Expected: %.1f\n", input);
	input = -0.1234;
	ft_printf("Yours:    |%019.3f|\n", input);
	printf("Expected: |%019.3f|\n", input);
	input = 0.1234;
	ft_printf("Yours:    |%+019.3f|\n", input);
	printf("Expected: |%+019.3f|\n", input);
	input = 0.1234;
	ft_printf("Yours:    |% 019.3f|\n", input);
	printf("Expected: |% 019.3f|\n", input);
	input = 0.1234;
	ft_printf("Yours:    |%-019.3f|\n", input);
	printf("Expected: |%-019.3f|\n", input);
	input = 0.1234;

	input = -0.1002;
	ft_printf("Yours:    |%019.4f|\n", input);
	printf("Expected: |%019.4f|\n", input);
	input = 0.102;
	ft_printf("Yours:    |%+019.5f|\n", input);
	printf("Expected: |%+019.5f|\n", input);
	input = 0.102;
	ft_printf("Yours:    |% 019.19f|\n", input);
	printf("Expected: |% 019.19f|\n", input);
*/	input = 0.102;
	ft_printf("Yours:    |%-019.30f|\n", input);
	printf("Expected: |%-019.30f|\n", input);
/*	input = 0.102;
	ft_printf("Yours:    |%-19.3f|\n", input);
	printf("Expected: |%-19.3f|\n", input);

	input = 1;
	ft_printf("Yours:    |%#19f|\n", input);
	printf("Expected: |%#19f|\n", input);
	input = 10;
	ft_printf("Yours:    |%#19f|\n", input);
	printf("Expected: |%#19f|\n", input);
	input = 102;
	ft_printf("Yours:    |%#19f|\n", input);
	printf("Expected: |%#19f|\n", input);
	input = 103;
	ft_printf("Yours:    |%#19f|\n", input);
	printf("Expected: |%#19f|\n", input);
	input = 105;
	ft_printf("Yours:    |%#19f|\n", input);
	printf("Expected: |%#19f|\n", input);
	input = 1002;
	ft_printf("Yours:    |%#19f|\n", input);
	printf("Expected: |%#19f|\n", input);
	input = 10002;
	ft_printf("Yours:    |%#19f|\n", input);
	printf("Expected: |%#19f|\n", input);
*/
}

typedef union u_dbltoull
{
	float d;
	unsigned long long u;
}	t_dbltoull; 

void single_float()
{
	t_dbltoull data;
	int res1, res2;
	double input = 7.99999067386341522478687693364918231964111328125;

	/* This number tests for edge case on bankers rounding, if number would be 0.15 and bankers would be adding 0.05 instead of 0.1 then breaks.*/
//	data.u = 936902656;
//	printf("Expected: %.19f\n", data.d);
//	ft_printf("Yours:    %.19f\n", data.d);
//	ft_printf("DOUBLE: %.19lf\n", input);
//	printf("DOUBLE: %.19lf\n", input);
//	ft_printf("DOUBLE: %#lf\n", input);
//	printf("DOUBLE: %#lf\n", input);
//	ft_printf("DOUBLE: %#.lf\n", input);
//	printf("DOUBLE: %#.lf\n", input);
//	ft_printf("DOUBLE: %.lf\n", input);
//	printf("DOUBLE: %.lf\n", input);
//	printf("{%f}{%lf}{%Lf}\n", 1.42, 1.42, 1.42l);
//	ft_printf("{%f}{%lf}{%Lf}\n", 1.42, 1.42, 1.42l);
//	printf("{%Lf}\n", 1.42l);
//	ft_printf("{%Lf}\n", 1.42l);
//	printf("{%f}{%lf}{%Lf}\n", 1.42, 1.42, 1.42l);
//	printf("{%f}{%lf}{%Lf}\n", 1.42, 1.42, 1.42l);
//	ft_printf("{%f}{%lf}{%Lf}\n", 1.42, 1.42, 1.42l);
//	printf("{%f}{%lf}{%Lf}\n", -1.42, -1.42, -1.42l);
//	ft_printf("{%f}{%lf}{%Lf}\n", -1.42, -1.42, -1.42l);
//	ft_printf("{%f}\n", -12.42);
//	ft_printf("{%f}\n", -123.42);
//	ft_printf("{%f}\n", -0.42);
//	ft_printf("{%lf}\n", 1.42);
//	ft_printf("{%Lf}\n", 1.42l);
//	printf("{%.f}\n", 1.42);
//	ft_printf("{%.f}\n", 1.42);
//	printf("|%033.21o|\n", 0);
//	ft_printf("|%033.21o|\n", 0);
//	printf("|%-033o|\n", 0);
//	ft_printf("|%-033o|\n", 0);
//	printf("|%-033.3o|\n", 0);
//	ft_printf("|%-033.3o|\n", 0);
//	printf("|%-033.1o|\n", 0);
//	ft_printf("|%-033.1o|\n", 0);
//	printf("|%-033o|\n", 52);
//	ft_printf("|%-033o|\n", 52);
//	printf("|%-033.3o|\n", 52);
//	ft_printf("|%-033.3o|\n", 52);
//	printf("|%-033.1o|\n", 52);
//	ft_printf("|%-033.1o|\n", 52);
//	printf("|% -14.12f|\n\n", 0.0005f);
//	ft_printf("|% -14.12f|\n\n", 0.0005f);
//	printf("|%+-14.12f|\n\n", 0.0005f);
//	ft_printf("|%+-14.12f|\n\n", 0.0005f);
//	printf("%-+.12f\n\n", 1.232323232323f);
//	ft_printf("%-+.12f\n\n", 1.232323232323f);
//	printf("%0 14.12f\n\n", 8363748372381233.1239138432f);
//	ft_printf("%0 14.12f\n\n", 8363748372381233.1239138432f);
//	printf("% -22.2f\n\n", 8363748372381233.1239138432f);
//	ft_printf("% -22.2f\n\n", 8363748372381233.1239138432f);
//	printf("%+2.3f\n\n", 8363748372381233.1239138432f);
//	ft_printf("%+2.3f\n\n", 8363748372381233.1239138432f);
//	printf("%-1.3f\n\n", 5.55500000000001f);
//	ft_printf("%-1.3f\n\n", 5.55500000000001f);
//	printf("|%-19.11f|\n\n", 0.000000000001f);
//	ft_printf("|%-19.11f|\n\n", 0.000000000001f);
//	printf("|%+-0 .11f|\n\n", 0.000000000005f);
//	ft_printf("|%+-0 .11f|\n\n", 0.000000000005f);
//	printf("|% -21.11f|\n\n", 0.000000000009f);
//	ft_printf("|% -21.11f|\n\n", 0.000000000009f);
//	printf("|% -6.2f|\n\n", 0.001f);
//	ft_printf("|% -6.2f|\n\n", 0.001f);
//	printf("|%+4.3f|\n\n", 0.01f);
//	ft_printf("|%+4.3f|\n\n", 0.01f);
//	printf("|%+101.100f|\n\n", 0.0005f);
//	ft_printf("|%+101.100f|\n\n", 0.0005f);
//	printf("|%+101.100f|\n\n", -0.0005f);
//	ft_printf("|%+101.100f|\n\n", -0.0005f);
//	printf("%+012.0d\n", 0);
//	ft_printf("%+012.0d\n", 0);
//	printf("%+012.0d\n", -0);
//	ft_printf("%+012.0d\n", -0);
//	printf("|% 012.0d|\n", 0);
//	ft_printf("|% 012.0d|\n", 0);
//	printf("%+.0d\n", 0);
//	ft_printf("%+.0d\n", 0);
//	printf("%.f\n", 12.567f);
//	printf("%.f\n", 1.5f);
//	ft_printf("%.f\n", 1.5f);
//	printf("%.f\n", 0.5f);
//	ft_printf("%.f\n", 0.5f);
//	printf("%.30Lf\n", 191231232.99999999l);
//	ft_printf("%.30Lf\n", 191231232.99999999l);
//	printf("%.30Lf\n", -191231232.99999999l);
//	ft_printf("%.30Lf\n", -191231232.99999999l);
//	printf("%0 10f\n", 0.000000);
//	ft_printf("%0 10f\n", 0.000000);
//	printf("%0 15f\n", 12.000000);
//	ft_printf("%0 15f\n", 12.000000);
//	printf("%+010f\n", -00.000000);
//	ft_printf("%+010f\n", -00.000000);
//	printf("|%.2f|\n", -958.125000);
//	ft_printf("|%.2f|\n", -958.125000);
//	printf("%.3f\n", -0.0005000);
//	ft_printf("%.3f\n", -0.0005000);
//	printf("%15.0f\n", 42.42);
//	ft_printf("%15.0f\n", 42.42);
//	printf("Lf conversion: %Lf\n", 2.5555525L);
//	ft_printf("Lf conversion: %Lf\n", 2.5555525L);
//	printf("%.2f\n",958.125000);
//	ft_printf("%.2f\n",958.125000);
//	printf("Lf conversion: %Lf\n", 2.5555535L);
//	ft_printf("Lf conversion: %Lf\n", 2.5555535L);
//	printf("%0#30.5x\n", 0);
//	ft_printf("%0#30.5x\n", 0);

}

void float_play()
{
	t_dbltoull data, data2;
	unsigned long long limit;
	int fd1, fd2, stdout_bk;
	char *file_expected, *file_yours, *file_diff;

	file_expected = "./test_results/results.expected";
	file_yours = "./test_results/results.yours";
	file_diff = "./test_results/results.diff";

	/* Test values with unsigned range 936902656 - 1034147200 */
	data.u = 527179339; //Smallest value to print 1 at ulp
	data.d = 1.1;
	data2 = data;
	limit = data.u + 1000; //Upper limit
	fd1 = open(file_expected, O_RDWR | O_CREAT | O_TRUNC, 00777);	
	fd2 = open(file_yours, O_RDWR | O_CREAT | O_TRUNC, 00777);	
	if (fd1 < 0 || fd2 < 0)
	{
		printf("Open fail\n");
		return ;
	}
	printf("Starting to generate expected values\n");
	fflush(stdout);
	stdout_bk = dup(STDOUT_FILENO);
	dup2(fd1, STDOUT_FILENO); //fd1 replaces stdout(Assuming that stdout is 1)
	if (fd2 < 0)
	{
		printf("Dup fail\n");
		return ;
	}
	while (data.u < limit)
	{
		printf("%.18f, ull: %llu\n", data.d, data.u);	
		fflush(stdout);
		data.u++;
	}
	close (fd1);
	dup2(stdout_bk, STDOUT_FILENO);
	printf("Starting to generate your values\n");
	fflush(stdout);
	dup2(fd2, STDOUT_FILENO);
	while (data2.u < limit)
	{
		ft_printf("%.18f, ull: %llu\n", data2.d, data2.u);	
		fflush(stdout);
		data2.u++;
	}
	dup2(stdout_bk, STDOUT_FILENO);
	close (fd2);
	printf("Starting to generate diff\n");
	fflush(stdout);
	system("diff -y --suppress-common-lines ./test_results/results.expected ./test_results/results.yours > ./test_results/results.diff");
	printf("DONE\n");
}

void test_long_double(void)
{
	long double multiplier;
	int counter;

	multiplier = 1;
	counter = 0;
	/* LDBL_Max 1000000000000000000000000000.000000 */
	/* ULL_Max  10000000000000000000 */
	while (counter < 28)
	{
		printf("%.160Lf\n", multiplier);
		multiplier *= 10;
		++counter;
	}
}

void test_str()
{
	int res1, res2;
//	printf("|%.-20s|\n", "KissaKoira");
//	ft_printf("|%.-20s|\n", "KissaKoira");
//	printf("|%-020s|\n", "KissaKoira");
//	ft_printf("|%-020s|\n", "KissaKoira");
//	printf("|%0|\n", "KissaKoira");
//	ft_printf("|%0|\n", "KissaKoira");
//	printf("|%01|\n", "KissaKoira");
//	ft_printf("|%01|\n", "KissaKoira");
//	printf("|%20|\n", "KissaKoira");
//	ft_printf("|%20|\n", "KissaKoira");
//	printf("|%|\n", "KissaKoira");
//	ft_printf("|%|\n", "KissaKoira");
//	printf("|%1|\n", "KissaKoira");
//	ft_printf("|%1|\n", "KissaKoira");
///	printf("|%s|\n", NULL);
///	ft_printf("|%s|\n", NULL);
///	res1 = printf("%32s\n", NULL);
///	res2 = ft_printf("%32s\n", NULL);
///	printf("res1: %d res2: %d\n", res1, res2);
//	printf("%*.*s\n", 10, 2, "lol");
//	ft_printf("%*.*s\n", 10, 2, "lol");
//	printf("%10.1s\n", "kuokka");
//	ft_printf("%10.1s\n", "kuokka");
//	printf("{%.*s}\n", 0, "42");
//	ft_printf("{%.*s}\n", 0, "42");
//	ft_printf("|%-+10.4s|", "Halloo");
//	ft_printf("%s is a string", "this");
//	printf("%4.15s\n", "42");
//	ft_printf("%4.15s\n", "42");
//	printf("%010s\n", NULL);
//	ft_printf("%010s\n", NULL);
//	printf("%010.0s\n", NULL);
//	ft_printf("%010.0s\n", NULL);
//	printf("%s%s\n", "|| ", "0");
//	ft_printf("%s%s\n", "|| ", "0");
//	printf("|%8.4s|\n", NULL);
//	ft_printf("|%8.4s|\n", NULL);
//	printf("111%s333%s555%saaa%sccc\n", "222", "444", "666", "bbb");
//	ft_printf("111%s333%s555%saaa%sccc\n", "222", "444", "666", "bbb");
//	printf("|%0-12%|\n", "moi");
//	ft_printf("|%0-12%|\n", "moi");
//	printf("%12%\n", "moi");
//	ft_printf("%12%\n", "moi");
//	printf("%012%\n", "moi");
//	ft_printf("%012%\n", "moi");
	printf("%0-12\n");
//	printf("%0-12%\n", "moi");
//	printf("%#.0f\n", 1.2);
//	ft_printf("%#.0f\n", 1.2);
//	printf("%.0f\n", 1.2);
//	ft_printf("%.0f\n", 1.2);
//	printf("|%0-12|\n", "moi");
//	ft_printf("|%0-12|\n", "moi");
}

void test_char()
{
	int res1, res2;
//	printf("%c\n", 'x');
//	ft_printf("%c\n", 'x');
//	printf("%c\n", NULL);
//	ft_printf("%c\n", NULL);
//	printf("%c\n", 0);
//	ft_printf("%c\n", 0);
//	printf("|%5c|\n", 'x');
//	ft_printf("|%5c|\n", 'x');
//	printf("|%05c|\n", 'x');
//	ft_printf("|%05c|\n", 'x');
//	printf("|%-5c|\n", 'x');
//	ft_printf("|%-5c|\n", 'x');
//	printf("|%-05c|\n", 'x');
//	ft_printf("|%-05c|\n", 'x');
//	res1 = printf("|%3c|\n", 0);
//	res2 = ft_printf("|%3c|\n", 0);
//	printf("You: %d Expected: %d\n", res1, res2);
	res1 = printf("%05c\n", 42);
	res2 = ft_printf("%05c\n", 42);
	printf("You: %d Expected: %d\n", res1, res2);
}

void test_ptr()
{
	int *ptr;
	char *cptr;
	int nb;
	int res1, res2;

//	res1 = printf("%p\n", ptr);
//	res2 = ft_printf("%p\n", ptr);
//	cptr = "ASDFFG";
//	nb = 5;
//	printf("|%p| and |%p| and |%p|\n", ptr, nb, cptr);
//	ft_printf("|%p| and |%p| and |%p|\n", ptr, nb, cptr);
//	ptr = &nb;
//	printf("|%p| and |%p| and |%p|\n", ptr, nb, cptr);
//	ft_printf("|%p| and |%p| and |%p|\n", ptr, nb, cptr);
//	printf("%.0p, %.p\n", 0, 0);
//	ft_printf("%.0p, %.p\n", 0, 0);
//  	printf("%p\n", &nb);
//  	ft_printf("%p\n", &nb);
//	res1 = printf("%.0p, %.p\n", 0, 0);
//	res2 = ft_printf("%.0p, %.p\n", 0, 0);
//	res1 = printf("%.5p\n", 0);
//	res2 = ft_printf("%.5p\n", 0);
//	printf("Expected %d, Yours: %d\n", res1, res2);
//	res1 = printf("|%9.2p|\n", 1234);
//	res2 = ft_printf("|%9.2p|\n", 1234);
//	printf("Expected %d, Yours: %d\n", res1, res2);
//	res1 = printf("|%2.9p|\n", 1234);
//	res2 = ft_printf("|%2.9p|\n", 1234);
//	printf("Expected %d, Yours: %d\n", res1, res2);
//	printf("{%5p}\n", 0);
//	ft_printf("{%5p}\n", 0);
//	printf("{%-15p}\n", 0);
//	ft_printf("{%-15p}\n", 0);
	char *a1;
	printf("|%-70p|\n", &a1);
	ft_printf("|%-70p|\n", &a1);
	printf("%010p\n", 0x0);
	ft_printf("%010p\n", 0x0);
	printf("%010.5p\n", 0x0);
	ft_printf("%010.5p\n", 0x0);
	printf("%010.9p\n", 0x0);
	ft_printf("%010.9p\n", 0x0);
	printf("%010.10p\n", 0x0);
	ft_printf("%010.10p\n", 0x0);
	printf("%010.11p\n", 0x0);
	ft_printf("%010.11p\n", 0x0);
	printf("%10.10p\n", 0x0);
	ft_printf("%10.10p\n", 0x0);
	printf("%10p\n", 0x0);
	ft_printf("%10p\n", 0x0);

	printf("%010p\n", 0x1);
	ft_printf("%010p\n", 0x1);
	printf("%010.5p\n", 0x1);
	ft_printf("%010.5p\n", 0x1);
	printf("%010.9p\n", 0x1);
	ft_printf("%010.9p\n", 0x1);
	printf("%010.10p\n", 0x1);
	ft_printf("%010.10p\n", 0x1);
	printf("%010.11p\n", 0x1);
	ft_printf("%010.11p\n", 0x1);
	printf("%9.2p\n", 1234);
	ft_printf("%9.2p\n", 1234);

}

void test_minus()
{
	ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256);
}

void test_unsigned()
{
//	printf("%U\n", 4294967295);
	//ft_printf("%U\n", 4294967295);
//	printf("%U\n", 4294967296);
	//ft_printf("%U\n", 4294967296);
//	printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);
//	ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);
//	printf("%-33.12.d\n", 256);
//	ft_printf("%-33.12.d\n", 256);
	printf("%+7llu\n", 1);
	ft_printf("%+7llu\n", 1);
}

void where_is_leak()
{
	int res1, res2;
	
	res1 = 0;
	res1 = printf("|%*d|\n", UINT_MAX, 4);
	res2 = ft_printf("|%*d|\n", UINT_MAX, 4);
	printf("res1: %d res2: %d\n", res1, res2);
}

void test_j()
{
	printf("%jx\n", 4294967296);
	ft_printf("%jx\n", 4294967296);
	printf("%jd\n", 9223372036854775807);
	ft_printf("%jd\n", 9223372036854775807);
	printf("%zd\n", 4294967295);
	ft_printf("%zd\n", 4294967295);
	printf("%zd\n", 4294967296);
	ft_printf("%zd\n", 4294967296);
	printf("%zd\n", LONG_MAX + 1);
	ft_printf("%zd\n", LONG_MAX + 1);
}
/* Anything excpet float with value 0 and precisionn zero prints no digits */
int main(void)
{
//	test_get_flags();
//	test_is_conversion();
//	test_get_width();
//	test_get_precision();
//	test_get_modifiers();	
//	how_convers();
//	test_d_i();
//	test_x();
//	wtf();
//	test_octal_len();
//	test_print_octal();
/*	copy tests from percent and interesting to automatic test file NOW */
//	test_percent();
//	test_interesting();
//	test_rounder();
//	single_float();
//	test_long_double();
//	test_str();
//	float_play();
//	test_char();
//	test_ptr();
//	test_minus();
//	test_unsigned();
//	where_is_leak();
	test_j();
	return (0);
}
