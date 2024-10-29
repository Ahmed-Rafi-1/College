# 1. write a code to print Hello World
#ans
"""
print("Hello World")
print("Hello 'World'")
print('Hello "world"')
"""

# 2. Write a program to add two number
#ans
"""
first_Num = int(input("Enter the first number: "))
Second_Num = int(input("Enter the second number: "))

result = first_Num + Second_Num
print(f"Answer is {result}")
"""

# 3. Write a program to square root of a number
#ans
# Using build in function #
"""
import math
num = int(input("Enter a number "))
result = math.sqrt(num)
print(f"The root of {num} is : {result}")
"""
# Without buildin function
"""
def sqr_root(n):
    if n<0 :
        print("Enter positive number")
    else :
        return n**0.5

num = int(input("Enter a number: "))
result = sqr_root(num)
print(f"Ther root of {num} is : {result}")
"""

# 4. Write a code to calculate the area of a triangle
#ans
"""
def tri_area(a, b, c):
    if a**2 == int(b**2 + c**2):
        return 0.5*b*c
    else :
        s = (a * b * c) / 2
        return (s*(s-a)*(s-b)*(s-c))**0.5

num1 = int(input("Enter the largest length: "))
num2 = int(input("Enter the second length: "))
num3 = int(input("Enter the third length: "))

result = tri_area(num1, num2, num3)
print(f"The area of the Triangle is {result}")
"""

# 5. Write a code to check a number even or odd
#ans
"""
def num_check(n) :
    if n%2 == 0 :
        print(f"{n} is even number")
    else :
        print(f"{n} is a odd number")

num = int(input("Enter a number : "))
num_check(num)
"""

# 6. Write a code to check if a number is prime or not
#ans
"""
def prime_check(n):
    if n<0 :
        print("Enter a valid number")
    else :
        for i in range(2, int(n**0.5) + 1) :
            if n % i == 0 :
                return False
            else :
                return True

num = int(input("Enter a number : "))

if prime_check(num) :
    print(f"{num} is prime number")
else :
    print(f"{num} is not prime number")
"""

# 7. Write a code to print a fibonacci series
#ans
"""
def fib_series(n):
    a = 0
    b = 1
    for i in range(n) :
        print(a, end = " ")
        next_term = a + b
        a = b
        b = next_term
    print()

num = int(input("Enter a number : "))
if num <= 0 :
    print("Enter a valid number")
else :
    fib_series(num)
    print(f"is the fibonacci series of {num} length")
"""

# 8. Write a code to find a factorial of a number
#ans
"""
def num_factorial(n) :
    result = 1
    for i in range(1, n+1) :
        result *= i
    return result
num = int(input("Enter a number : "))
if num <= 0 :
    print("Enter a valid number")
else :
    print(f"The factorial of {num} is {num_factorial(num)}")
"""

# 9. Write a program to swap to number
#ans
"""
def num_swap(a, b) :
    a,b = b,a
    print(f"After swap a = {a}, b = {b}")

num1 = int(input("Enter the first number : "))
num2 = int(input("Enter the second number : "))

print(f"Before swap a = {num1}, b = {num2}")
num_swap(num1, num2)
"""

# 10. Write a code to check if string is palindrome or not
#ans
"""
def is_palindrome(s) :
    s = s.replace(" ","").replace(",", "").replace(".","").replace("!","").lower()
    return s == s[::-1]

str_in = input("Enter a string to check palindrome : ")
if is_palindrome(str_in):
    print("String is palindrome")
else:
    print("String is not palindrome")
"""

# 11. Write a program to find the largest among three numbers
#ans
"""
def find_largest(a, b, c) :
    if a>=b and a>=c :
        return a
    elif b>=a and b>=c :
        return b
    else :
        return c
num1 = float(input("Enter the first number : "))
num2 = float(input("Enter the second number : "))
num3 = float(input("Enter the third number : "))

result = find_largest(num1, num2, num3)
print(f"The largest number is {result}")
"""

# 12. Write a code to find the GCD/HCF of two number
#ans
"""
def find_gcd(a, b) :
    while b != 0 :
        a,b = b, a%b
    return a
num1 = int(input("Enter the largest number : "))
num2 = int(input("Enter the other number : "))
result = find_gcd(num1, num2)
print(f"The GCD/HCF of {num1} and {num2} is {result}")
"""

# 13. Write a code to find the LCM of two number
#ans
"""
def find_gcd(a, b) :
    while b != 0 :
        a,b = b, a%b
    return a
def find_lcm(a,b) :
    return abs(a*b) // find_gcd(a,b)
num1 = int(input("Enter the largest number : "))
num2 = int(input("Enter the other number : "))
print(f"The LCM of {num1} and {num2} is {find_lcm(num1,num2)}")
"""
# 14. Write a code to convert Celsius to Fahrenheit
#ans
"""
def convert_celsius(n) :
    return (n*9/5) + 32
num = float(input("Enter the Temperature in Celsius : "))
result = convert_celsius(num)
print(f"The Temperature in Fahrenheit is {result}")
"""

# 15. Write a program to generate a random number
#ans
"""
import random
def random_generator(a, b) :
    return random.uniform(a,b)

num1 = float(input("Enter a lower bound number : "))
num2 = float(input("Enter a higher bound number : "))

result = random_generator(num1, num2)
print(f"A random number between {num1} and {num2} is {result}")
"""

# 16. Write a code to find sum of natural numbers
#ans
#Way 1
"""
def mySum(n) :
    return n*(n+1) // 2
num = int(input("Enter a number : "))
ans = mySum(num)
print(f"The sum is {ans}")
"""
#Way 2
"""
def mySum(a, b) :
    sum = 0
    for i in range(a, b+1) :
        sum += i
    return sum
num1 = int(input("Enter the first number : "))
num2 = int(input("Enter the second number : "))

if num1 > 0 and num1 < num2 :
    ans = mySum(num1, num2)
    print(f"The sum between {num1} and {num2} is {ans}")
else :
     print("Enter valid number")
"""

# 17. Write a code to count vowel in string
#ans
"""
def vowel_finder(str) :
    vowel = "aeiouAEIOU"
    count = 0
    for i in str :
        if i in vowel :
            count += 1
    return count
myStr = input("Enter the string here : ")
result = vowel_finder(myStr)
print(f"The number of vowel in string is {result}")
"""

# 18. Write a program to remove punctuation from string
#ans
"""
import string
def punctuation_delete(s) :
    translator = s.maketrans('','',string.punctuation)
    return s.translate(translator)
myStr = input("Enter the string here : ")
print(f"String without punctuation is : {punctuation_delete(myStr)}")

"""

# 19. Write a code to find the ASCII value of a character
#ans
"""
myStr = input("Enter a character : ")
ascii_value = ord(myStr)
print(f"The ASCII value of {myStr} is {ascii_value}")
"""

# 20. Write a code to reverse a number
#ans
"""
num = int(input("Enter a number here : "))
rev_number = 0
while num != 0 :
    lastDigit = num % 10
    rev_number = (rev_number * 10) + lastDigit
    num = num // 10

print(f"The reversed number is : {rev_number}")
"""

#21. Write a code to find second largest number in a list
#ans
"""
def find_secondlargest(number):
    unique_numbers = list(set(number))
    if len(unique_numbers) < 2:
        return "There is no second largest number in this List"
    unique_numbers.sort(reverse=True)
    return unique_numbers[1]


number_list = list(map(int, input("Enter numbers seperated by space: ").split()))
second_largest = find_secondlargest(number_list)
print(f"Second largest number of List is {second_largest}")"""

#22. Write a code to sort a List ascending or descending order
#ans
"""number_list = list(map(int, input("Enter the number seperated by space :").split()))

number_list.sort()
# for reversed order
#number_list.sort(reverse=True)
print(f"Sorted list is {number_list}")"""

#23. Write a code to merge two list
#ans
"""list1 = list(map(int, input("Enter the first list : ").split()))
list2 = list(map(int, input("Enter the second list : ").split()))
merged_list = list1 + list2
print(f"The merged list is {merged_list}")"""

#24. Write a code to find sum of a list's number
#ans
"""my_list = list(map(int, input("Enter the number of the list : ").split()))
answer = sum(my_list)
print(f"The total sum of the list is {answer}")"""

#25. Write a code to common element in two list
#ans
"""list1 = list(map(int, input("Enter the first list : ").split()))
list2 = list(map(int, input("Enter the second list : ").split()))

unique_element = list(set(list1) & set(list2) )

print(f"The common element is {unique_element}")"""

#26. Write a program to find the occurrences in a list
#ans:

"""list1 = list(map(int, input("Enter the elementes of the list : ").split()))
unique_element = {}
for i in list1:
    if i in unique_element:
        unique_element[i] += 1
    else:
        unique_element[i] = 1

for i, count in unique_element.items():
    print(f"Element {i} occurre {count} times")
"""

#27. Write a program to remove duplicate from list
#ans:
"""def remove_duplicates(list1):
    # (using set) return list(set(list1))
    unique_list = []
    for i in list1 :
        if i not in unique_list:
            unique_list.append(i)
    return unique_list
list1 = list(map(int, input("Enter the elements by spaces : ").split()))
result = remove_duplicates(list1)
print(f"After removing duplicate from list :  {result}")"""

#28. Write a program flatten a list
#nas
"""def flatten_nested_list(list1):
    flattened_list = []
    for i in list1:
        if isinstance(i, list):
            flattened_list.extend(flatten_nested_list(i))
        else:
            flattened_list.append(i)
    return flattened_list
nested_list = [7, [2, 3], 4, [2, [3, 4], 5], 6, [7, 8]]
result = flatten_nested_list(nested_list)
print("Flattened list : ", result)"""

#29. Write a program to check if a list is empty or not
#ans
"""def check_empty(list1):
    if not list1:
        return "Given list is empty"
    else:
        return "Given list is not empty"
user_list1 = []
print(check_empty(user_list1))

user_list2 = [1, 2, 3]
print(check_empty(user_list2))"""

#30. Write a program to find the intersection of two sets
"""def find_intersection(set1, set2):
    set_intersection = set1.intersection(set2)
    return set_intersection
set1_input = input("Enter the element fo first set by space : ")
set2_input = input("Enter the element fo second set by space : ")

set1 = set(map(int, set1_input.split()))
set2 = set(map(int, set2_input.split()))

result = find_intersection(set1, set2)
print("Intersection of set1 and set2 : ", result)"""
