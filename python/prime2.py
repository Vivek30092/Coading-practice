# Function to check if a number is prime
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

# Input: range of numbers
start = int(input("Enter the start of the range: "))
end = int(input("Enter the end of the range: "))

# Output: prime numbers in the range
print(f"Prime numbers between {start} and {end} are:")
for num in range(start, end + 1):
    if is_prime(num):
        print(num)
