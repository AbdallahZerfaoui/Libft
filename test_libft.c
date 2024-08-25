#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

// if you use includes : gcc test_libft.c -I./includes -L. -lft -o test_libft
// if the libft.h is in the root : gcc test_libft.c -I. -L. -lft -o test_libft
// my favorite way to compile so far : clear && gcc test_libft.c -I. -L. -lft -o test_libft && ./test_libft

// Function to print in color
void print_result(int result) {
    if (result) {
        // Print in green
        printf("\033[0;32mPassed\033[0m\n");
    } else {
        // Print in red
        printf("\033[0;31mFail\033[0m\n");
    }
}

void print_separator(const char *title) {
    printf("\n");
    printf("╔═════════════════════════════════════════════════════════╗\n");
    printf("║                                                         ║\n");
    printf("║  🟢  %-45s  🟢  ║\n", title);
    printf("║                                                         ║\n");
    printf("╚═════════════════════════════════════════════════════════╝\n");
    printf("\n");
}

// Main function
int main()
{
    
    // Test ft_isalpha
    // Be careful because isalpha does not return always 1 for true, it returns a non-zero value
    print_separator("Testing ft_isalpha");
    int test_cases[] = {'A', 'z', 'm', '1', '#', ' ', 0, -1, 'a', 'Z', 127, 128};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_tests; i++) {
        int c = test_cases[i];
        int actual = ft_isalpha(c);
        int expected = (isalpha(c) != 0) ? 1 : 0;

        // printf("Test %d: ft_isalpha(%d) -> ", i + 1, c);
        // printf("Expected: %d, Actual: %d\n", expected, actual);

        printf("Test %d: ft_isalpha(%d) == isalpha(%d) -> ", i + 1, c, c);
        print_result(expected == actual);
    }

    // Test ft_isdigit
    print_separator("Testing ft_isdigit");
    int test_cases_digit[] = {'A', 'z', 'm', '1', '#', ' ', 0, -1, 'a', 'Z', 127, 128};
    int num_tests_digit = sizeof(test_cases_digit) / sizeof(test_cases_digit[0]);

    for (int i = 0; i < num_tests_digit; i++) {
        int c = test_cases_digit[i];
        int actual = ft_isdigit(c);
        int expected = (isdigit(c) != 0) ? 1 : 0;
        
        // printf("Test %d: ft_isdigit(%d) -> ", i + 1, c);
        // printf("Expected: %d, Actual: %d\n", expected, actual);
        printf("Test %d: ft_isdigit(%d) == isdigit(%d) -> ", i + 1, c, c);
        print_result(expected == actual);
    }

    // Test ft_isalnum
    print_separator("Testing ft_isalnum");
    int test_cases_alnum[] = {'A', 'z', 'm', '1', '#', ' ', 0, -1, 'a', 'Z', 127, 128};
    int num_tests_alnum = sizeof(test_cases_alnum) / sizeof(test_cases_alnum[0]);
    
    for (int i = 0; i < num_tests_alnum; i++) {
        int c = test_cases_alnum[i];
        int actual = ft_isalnum(c);
        int expected = (isalnum(c) != 0) ? 1 : 0;
        
        // printf("Test %d: ft_isalnum(%d) -> ", i + 1, c);
        // printf("Expected: %d, Actual: %d\n", expected, actual);
        printf("Test %d: ft_isalnum(%d) == isalnum(%d) -> ", i + 1, c, c);
        print_result(expected == actual);
    }

    // Test ft_isascii
    // I did not check the edge cases
    print_separator("Testing ft_isascii");
    int test_cases_ascii[] = {'A', 'z', 'm', '1', '#', ' ', 0, -1, 'a', 'Z', 127, 128, 888};
    int num_tests_ascii = sizeof(test_cases_ascii) / sizeof(test_cases_ascii[0]);

    for (int i = 0; i < num_tests_ascii; i++) {
        int c = test_cases_ascii[i];
        int actual = ft_isascii(c);
        int expected = (isascii(c) != 0) ? 1 : 0;
        
        // printf("Test %d: ft_isascii(%d) -> ", i + 1, c);
        // printf("Expected: %d, Actual: %d\n", expected, actual);
        printf("Test %d: ft_isascii(%d) == isascii(%d) -> ", i + 1, c, c);
        print_result(expected == actual);
    }

    // Test ft_isprint
    // 9 is the tab character
    print_separator("Testing ft_isprint");
    int test_cases_print[] = {'A', 'z', 'm', '1', '#', ' ', 0, -1, 'a', 'Z', 127, 9, 30, '\n'};
    int num_tests_print = sizeof(test_cases_print) / sizeof(test_cases_print[0]);

    for (int i = 0; i < num_tests_print; i++) {
        int c = test_cases_print[i];
        int actual = ft_isprint(c);
        int expected = (isprint(c) != 0) ? 1 : 0;
        
        // printf("Test %d: ft_isprint(%d) -> ", i + 1, c);
        // printf("Expected: %d, Actual: %d\n", expected, actual);
        printf("Test %d: ft_isprint(%d) == isprint(%d) -> ", i + 1, c, c);
        print_result(expected == actual);
    }
    // Test ft_strlen
    print_separator("Testing ft_strlen");
    char *test_cases_strlen[] = {"Hello", "World", "123", " ", "", "This is a test", "Another test"};
    int num_tests_strlen = sizeof(test_cases_strlen) / sizeof(test_cases_strlen[0]);

    for (int i = 0; i < num_tests_strlen; i++) {
        char *s = test_cases_strlen[i];
        int actual = ft_strlen(s);
        int expected = strlen(s);
        
        // printf("Test %d: ft_strlen(%s) -> ", i + 1, s);
        // printf("Expected: %d, Actual: %d\n", expected, actual);
        printf("Test %d: ft_strlen(%s) == strlen(%s) -> ", i + 1, s, s);
        print_result(expected == actual);
    }
    // Test ft_strcmp
    print_separator("Testing ft_strcmp");
    char *test_cases_strcmp_s1[] = {"Hello", "World", "123", " ", "", "This is a test", "Another test"};
    char *test_cases_strcmp_s2[] = {"Hello", "World", "777", "", " ", "This is a", "Anothe test"};
    int num_tests_strcmp = sizeof(test_cases_strcmp_s1) / sizeof(test_cases_strcmp_s1[0]);

    for (int i = 0; i < num_tests_strcmp; i++) {
        char *s1 = test_cases_strcmp_s1[i];
        char *s2 = test_cases_strcmp_s2[i];
        int actual = ft_strcmp(s1, s2);
        int expected = strcmp(s1, s2);
        
        // printf("Test %d: ft_strcmp(%s, %s) -> ", i + 1, s1, s2);
        // printf("Expected: %d, Actual: %d\n", expected, actual);
        printf("Test %d: ft_strcmp(%s, %s) == strcmp(%s, %s) -> ", i + 1, s1, s2, s1, s2);
        print_result(expected == actual);
    }

    // Test ft_strncmp
    print_separator("Testing ft_strncmp");
    struct {
        const char *s1;
        const char *s2;
        size_t n;
        int expected;
    } test_cases_strncmp[] = {
        {"hello", "hello", 5, 0},        // Identical strings
        {"hello", "hell", 5, 'o' - '\0'}, // Prefix match
        {"hello", "helloo", 5, 0},        // Partial match with additional characters
        {"hello", "world", 5, 'h' - 'w'}, // Completely different strings
        {"abcd", "abce", 3, 0},           // Identical up to n, then different
        {"abcd", "abce", 4, 'd' - 'e'},   // Identical up to n, then different
        {"abcd", "abce", 0, 0},           // n is zero
        {"abc", "abcd", 4, 0},            // One string is a prefix of the other, n larger
        {"abc", "abc", 3, 0},             // Identical strings with n matching length
        {"abc", "abc", 2, 0},             // Identical strings with n less than length
        {"", "", 1, '\0'},               // Empty strings, n > 0
        {"a", "", 1, 'a'},                // Single character vs empty string
        {"", "a", 1, -'a'},               // Empty string vs single character
        {"abcd", "abdc", 4, 'd' - 'd'},   // Identical up to n, then different
        {"abcd", "abcd", 5, 0}            // Exact match with n larger than length
    };

    for (int i = 0; i < sizeof(test_cases_strncmp) / sizeof(test_cases_strncmp[0]); i++) {
        int expected = strncmp(test_cases_strncmp[i].s1, test_cases_strncmp[i].s2, test_cases_strncmp[i].n);
        int actual = ft_strncmp(test_cases_strncmp[i].s1, test_cases_strncmp[i].s2, test_cases_strncmp[i].n);

        printf("Test %d: ft_strncmp(\"%s\", \"%s\", %zu) == strncmp(\"%s\", \"%s\", %zu) -> ", 
               i + 1, test_cases_strncmp[i].s1, test_cases_strncmp[i].s2, test_cases_strncmp[i].n, 
               test_cases_strncmp[i].s1, test_cases_strncmp[i].s2, test_cases_strncmp[i].n);
        print_result(expected == actual);
    }

    return 0;
}