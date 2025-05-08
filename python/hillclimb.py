import random

def hill_climbing(function, x_start, step_size, max_iterations):
    """
    Implements the Hill Climbing algorithm.

    :param function: The function to optimize.
    :param x_start: The starting point.
    :param step_size: The size of the steps.
    :param max_iterations: The maximum number of iterations.
    :return: The best x and its corresponding function value.
    """
    current_x = x_start
    current_value = function(current_x)

    for iteration in range(max_iterations):
        # Generate a new candidate by adding or subtracting the step size
        next_x = current_x + random.choice([-step_size, step_size])
        next_value = function(next_x)

        # If the new candidate is better, move to it
        if next_value > current_value:
            current_x, current_value = next_x, next_value

        print(f"Iteration {iteration + 1}: x = {current_x}, f(x) = {current_value}")

    return current_x, current_value

# Define the function to optimize
def function_to_optimize(x):
    return -x**2 + 4*x + 10  # Example quadratic function

# Parameters
x_start = 0       # Starting point
step_size = 0.1   # Step size
max_iterations = 50  # Maximum iterations

# Run the Hill Climbing algorithm
best_x, best_value = hill_climbing(function_to_optimize, x_start, step_size, max_iterations)

print("\nResult:")
print(f"Best x: {best_x}, Best f(x): {best_value}")
