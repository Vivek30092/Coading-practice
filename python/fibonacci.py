# Function to print Fibonacci sequence
def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        print(a, end=" ")
        a, b = b, a + b

# Input: number of terms
num_terms = int(input("Enter the number of terms: "))

# Output Fibonacci sequence
if num_terms <= 0:
    print("Please enter a positive integer.")
else:
    fibonacci(num_terms)
