def print_solution(board):
    for row in board:
        print(" ".join("Q" if cell else "." for cell in row))   
    print("\n")

# Function to check if a queen can be placed on board[row][col]
def is_safe(board, row, col, n):
    # Check the column
    for i in range(row):
        if board[i][col]:
            return False

    # Check upper left diagonal
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j]:
            return False

    # Check upper right diagonal
    for i, j in zip(range(row, -1, -1), range(col, n)):
        if board[i][j]:
            return False

    return True

# Function to solve the N-Queens problem using backtracking
def solve_n_queens(board, row, n):
    if row == n:
        print_solution(board)
        return True

    res = False
    for col in range(n):
        if is_safe(board, row, col, n):
            board[row][col] = 1  # Place the queen

            # Recur to place the rest of the queens
            res = solve_n_queens(board, row + 1, n) or res

            # Backtrack
            board[row][col] = 0

    return res

# Main function to solve the 4-Queens problem
def four_queens():
    n = 4
    board = [[0 for _ in range(n)] for _ in range(n)]

    if not solve_n_queens(board, 0, n):
        print("No solution exists")

if __name__ == "__main__":
    four_queens()
